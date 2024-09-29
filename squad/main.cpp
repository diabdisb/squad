#include "uiaccses.h"
#include <iostream>
#include <dwmapi.h>
#include "include/imgui.h"
#include "include/imgui_impl_dx9.h"
#include "include/imgui_impl_win32.h"
#include "hooks/imports.hpp"
#include <d3dx9.h>
#include "driver.h"
#include <thread>
#include "structs.h"
#include <sstream>
#include <thread>
#include <mutex>
using namespace std;


IDirect3D9Ex* p_object = NULL;
IDirect3DDevice9Ex* p_device = NULL;
D3DPRESENT_PARAMETERS p_params = { NULL };
MSG messager = { NULL };
HWND my_wnd = NULL;
HWND game_wnd = NULL;
inline int width = GetSystemMetrics(SM_CXSCREEN);
inline int height = GetSystemMetrics(SM_CYSCREEN);




HRESULT directx_init()
{
	// Debug logging
	std::cout << "Initializing DirectX..." << std::endl;

	// Create the Direct3D object
	if (FAILED(Direct3DCreate9Ex(D3D_SDK_VERSION, &p_object)))
	{
		std::cerr << "Failed to create Direct3D object: " << GetLastError() << std::endl;
		return E_FAIL; // Return an error code instead of exiting
	}
	std::cout << "Direct3D object created successfully." << std::endl;

	// Zero out the presentation parameters
	ZeroMemory(&p_params, sizeof(p_params));
	p_params.Windowed = TRUE;
	p_params.SwapEffect = D3DSWAPEFFECT_DISCARD;
	p_params.hDeviceWindow = my_wnd;
	p_params.MultiSampleQuality = D3DMULTISAMPLE_NONE;
	p_params.BackBufferFormat = D3DFMT_A8R8G8B8;
	p_params.BackBufferWidth = width;
	p_params.BackBufferHeight = height;
	p_params.EnableAutoDepthStencil = TRUE;
	p_params.AutoDepthStencilFormat = D3DFMT_D16;
	p_params.PresentationInterval = D3DPRESENT_INTERVAL_DEFAULT;

	// Create the Direct3D device
	if (FAILED(p_object->CreateDeviceEx(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, my_wnd,
		D3DCREATE_HARDWARE_VERTEXPROCESSING, &p_params, 0, &p_device)))
	{
		std::cerr << "Failed to create Direct3D device: " << GetLastError() << std::endl;
		p_object->Release();
		return E_FAIL; // Return an error code
	}
	std::cout << "Direct3D device created successfully." << std::endl;

	// Initialize ImGui
	ImGui::CreateContext();
	ImGui_ImplWin32_Init(my_wnd);
	ImGui_ImplDX9_Init(p_device);
	ImGuiIO& io = ImGui::GetIO(); (void)io;
	io.IniFilename = nullptr; // Disable ImGui INI file saving

	// Customize ImGui styles
	ImGuiStyle* style = &ImGui::GetStyle();
	style->WindowBorderSize = 1;
	style->FrameBorderSize = 1;
	style->WindowTitleAlign = { 0.5f, 0.5f };

	// Set ImGui colors
	style->Colors[ImGuiCol_BorderShadow] = ImColor(0, 0, 0, 0);
	style->Colors[ImGuiCol_Border] = ImColor(8, 8, 8, 250);
	style->Colors[ImGuiCol_TitleBg] = ImColor(38, 38, 38, 250);
	style->Colors[ImGuiCol_TitleBgActive] = ImColor(38, 38, 38, 250);
	style->Colors[ImGuiCol_WindowBg] = ImColor(38, 38, 38, 250);
	style->Colors[ImGuiCol_FrameBg] = ImColor(38, 38, 38, 245);
	style->Colors[ImGuiCol_FrameBgActive] = ImColor(38, 38, 38, 245);
	style->Colors[ImGuiCol_FrameBgHovered] = ImColor(38, 38, 38, 245);
	style->Colors[ImGuiCol_Button] = ImColor(38, 38, 38, 245);
	style->Colors[ImGuiCol_ButtonActive] = ImColor(38, 38, 38, 245);
	style->Colors[ImGuiCol_ButtonHovered] = ImColor(38, 38, 38, 245);
	style->Colors[ImGuiCol_SliderGrab] = ImColor(68, 68, 68, 250);
	style->Colors[ImGuiCol_SliderGrabActive] = ImColor(68, 68, 68, 250);
	style->Colors[ImGuiCol_CheckMark] = ImColor(68, 68, 68, 250);
	style->Colors[ImGuiCol_Header] = ImColor(68, 68, 68, 250);
	style->Colors[ImGuiCol_HeaderActive] = ImColor(0, 0, 0, 0);
	style->Colors[ImGuiCol_HeaderHovered] = ImColor(68, 68, 68, 250);
	style->Colors[ImGuiCol_PopupBg] = ImColor(38, 38, 38, 250);

	// Clean up Direct3D object after initializing ImGui
	p_object->Release();
	std::cout << "DirectX initialization completed successfully." << std::endl;

	return S_OK; // Return success
}
bool menuopen = true;

constexpr auto OFFSET_GOBJECTS = 0x71cf4c0;
constexpr auto OFFSET_APPENDSTRING = 0x21a1760;
constexpr auto OFFSET_GNAMES = 0x7192f40;
constexpr auto OFFSET_GWORLD = 0x7313ca0;

std::string FNameToString(FName& fname)
{
	enum { NAME_SIZE = 1024 };
	char name[NAME_SIZE] = { 0 };

	const unsigned int chunkOffset = fname.ComparisonIndex >> 16;
	const unsigned short nameOffset = fname.ComparisonIndex;

	int64_t namePoolChunk = d.readv<uint64_t>(d.BaseAddress + OFFSET_GNAMES + 8 * (chunkOffset + 2)) + 2 * nameOffset;
	const auto nameLength = d.readv<uint16_t>(namePoolChunk) >> 6;

	d.readvm((namePoolChunk + 2), reinterpret_cast<uint64_t>(name), nameLength <= NAME_SIZE ? nameLength : NAME_SIZE);


	std::string finalName = std::string(name);
	return finalName.empty() ? "null" : finalName;
}

void driver_start() {
	d._processid = d.getprocessid(L"SquadGame.exe");
	d.initdriver(d._processid);
	d.BaseAddress = d.get_base_address();
	printf("baseAddress %p\n", d.BaseAddress);

}

struct PrefixFilter {
	std::vector<std::string> prefixes;

	// Function to check if a given name starts with any of the prefixes
	bool Matches(const std::string& name) const {
		for (const auto& prefix : prefixes) {
			if (name.rfind(prefix, 0) == 0) { // Check if the name starts with the prefix
				return true;
			}
		}
		return false;
	}
};
inline bool filterEnabled = true;
auto draw_line(int x1, int y1, int x2, int y2, ImU32 color) -> void {
	// Snap the points to a grid
	const int snapSize = 10; // Adjust the snapping increment as needed
	x1 = (x1 / snapSize) * snapSize;
	y1 = (y1 / snapSize) * snapSize;
	x2 = (x2 / snapSize) * snapSize;
	y2 = (y2 / snapSize) * snapSize;

	// Create ImVec2 points
	ImVec2 point1(static_cast<float>(x1), static_cast<float>(y1));
	ImVec2 point2(static_cast<float>(x2), static_cast<float>(y2));

	// Draw the line using ImGui
	ImGui::GetForegroundDrawList()->AddLine(point1, point2, color);
}
enum bones : int {
//	Root = 0,
	Bip01 = 1,
	Bip01_Pelvis = 2,
	Bip01_Spine = 3,
	Bip01_Spine1 = 4,
	Bip01_Spine2 = 5,
	Bip01_Neck = 6,
	Bip01_Head = 7,
	Bip01_HeadNub = 8,
	Bip01_REye = 9,
	Bip01_REyeNub = 10,
	Bip01_LEye = 11,
	Bip01_LEyeNub = 12,
	Bip01_MJaw = 13,
	Bip01_MJawNub = 14,
	Bip01_MBottomLip = 15,
	Bip01_MBottomLipNub = 16,
	Bip01_MTongue = 17,
	Bip01_MTongueNub = 18,
	Bip01_LMouthBottom = 19,
	Bip01_LMouthBottomNub = 20,
	Bip01_RMouthBottom = 21,
	Bip01_RMouthBottomNub = 22,
	Bip01_RMasseter = 23,
	Bip01_RMasseterNub = 24,
	Bip01_LMasseter = 25,
	Bip01_LMasseterNub = 26,
	Bip01_MUpperLip = 27,
	Bip01_MUpperLipNub = 28,
	Bip01_RCaninus = 29,
	Bip01_RCaninusNub = 30,
	Bip01_LCaninus = 31,
	Bip01_LCaninusNub = 32,
	Bip01_REyeBlinkBottom = 33,
	Bip01_REyeBlinkBottomNub = 34,
	Bip01_LEyeBlinkBottom = 35,
	Bip01_LEyeBlinkBottomNub = 36,
	Bip01_RUpperlip = 37,
	Bip01_RUpperlipNub = 38,
	Bip01_LUpperlip = 39,
	Bip01_LUpperlipNub = 40,
	Bip01_RMouthCorner = 41,
	Bip01_RMouthCornerNub = 42,
	Bip01_LMouthCorner = 43,
	Bip01_LMouthCornerNub = 44,
	Bip01_RCheek = 45,
	Bip01_RCheekNub = 46,
	Bip01_LCheek = 47,
	Bip01_LCheekNub = 48,
	Bip01_REyeBlinkTop = 49,
	Bip01_REyeBlinkTopNub = 50,
	Bip01_LEyeBlinkTop = 51,
	Bip01_LEyeBlinkTopNub = 52,
	Bip01_RInnerEyebrow = 53,
	Bip01_RInnerEyebrowNub = 54,
	Bip01_LInnerEyebrow = 55,
	Bip01_LInnerEyebrowNub = 56,
	Bip01_MMiddleEyebrow = 57,
	Bip01_MMiddleEyebrowNub = 58,
	Bip01_ROuterEyebrow = 59,
	Bip01_ROuterEyebrowNub = 60,
	Bip01_LOuterEyebrow = 61,
	Bip01_LOuterEyebrowNub = 62,
	Bip01_MNose = 63,
	Bip01_MNoseNub = 64,
	Bip01_R_Clavicle = 65,
	Bip01_R_UpperArm = 66,
	Bip01_R_Forearm = 67,
	Bip01_R_Hand = 68,
	Bip01_R_Finger0 = 69,
	Bip01_R_Finger01 = 70,
	Bip01_R_Finger02 = 71,
	Bip01_R_Finger0Nub = 72,
	Bip01_R_Finger1 = 73,
	Bip01_R_Finger11 = 74,
	Bip01_R_Finger12 = 75,
	Bip01_R_Finger1Nub = 76,
	Bip01_R_Finger2 = 77,
	Bip01_R_Finger21 = 78,
	Bip01_R_Finger22 = 79,
	Bip01_R_Finger2Nub = 80,
	Bip01_R_Finger3 = 81,
	Bip01_R_Finger31 = 82,
	Bip01_R_Finger32 = 83,
	Bip01_R_Finger3Nub = 84,
	Bip01_R_Finger4 = 85,
	Bip01_R_Finger41 = 86,
	Bip01_R_Finger42 = 87,
	Bip01_R_Finger4Nub = 88,
	Bip01_R_ForeTwist = 89,
	Bip01_R_ForeTwist1 = 90,
	Bip01_R_ForeTwist2 = 91,
	Bip01_L_Clavicle = 92,
	Bip01_L_UpperArm = 93,
	Bip01_L_Forearm = 94,
	Bip01_L_Hand = 95,
	Bip01_L_Finger0 = 96,
	Bip01_L_Finger01 = 97,
	Bip01_L_Finger02 = 98,
	Bip01_L_Finger0Nub = 99,
	Bip01_L_Finger1 = 100,
	Bip01_L_Finger11 = 101,
	Bip01_L_Finger12 = 102,
	Bip01_L_Finger1Nub = 103,
	Bip01_L_Finger2 = 104,
	Bip01_L_Finger21 = 105,
	Bip01_L_Finger22 = 106,
	Bip01_L_Finger2Nub = 107,
	Bip01_L_Finger3 = 108,
	Bip01_L_Finger31 = 109,
	Bip01_L_Finger32 = 110,
	Bip01_L_Finger3Nub = 111,
	Bip01_L_Finger4 = 112,
	Bip01_L_Finger41 = 113,
	Bip01_L_Finger42 = 114,
	Bip01_L_Finger4Nub = 115,
	Bip01_L_ForeTwist = 116,
	Bip01_L_ForeTwist1 = 117,
	Bip01_L_ForeTwist2 = 118,
	Bip01_IK_Weapon_Root = 119,
	Bip01_IK_Weapon = 120,
	Bip01_CameraBone = 121,
	Bip01_Weapon1 = 122,
	Bip01_IK_Weapon_L_Hand = 123,
	Bip01_IK_Weapon_R_Hand = 124,
	Bip01_L_Thigh = 125,
	Bip01_L_Calf = 126,
	Bip01_L_Foot = 127,
	Bip01_L_Toe0 = 128,
	Bip01_L_Toe0Nub = 129,
	Bip01_R_Thigh = 130,
	Bip01_R_Calf = 131,
	Bip01_R_Foot = 132,
	Bip01_R_Toe0 = 133,
	Bip01_R_Toe0Nub = 134,
	Bip01_IK_Hand_Root = 135,
	Bip01_IK_L_Hand = 136,
	Bip01_IK_R_Hand = 137,
	IK_Feet_Root = 138,
	IK_Left_Foot = 139,
	IK_Right_Foot = 140
};

enum bones2
{
	Root = 0,
	pelvis = 3,
	upperarm_l = 93,
	hand_l = 118,
	neck_01 = 6,
	head = 7,
	upperarm_r = 66,
	hand_r = 91,
	thigh_l = 125,
	calf_l = 126,
	foot_l = 139,
	thigh_r = 130,
	calf_r = 131,
	foot_r = 140,
	ik_hand_l = 116,
	ik_hand_r = 89,
};
typedef struct _EntityList
{
	uintptr_t actor_pawn;
	uintptr_t actor_mesh;
	uintptr_t actor_state;
	Vector3 actor_pos;
	int actor_id;
	string actor_name;

	string bot_name;
	Vector3 bot_pos;
	int bot_id;

	uintptr_t item_pawn;
	Vector3 item_pos;
	int item_id;
	string item_name;

	string Ships_name;
	Vector3 Ships_pos;
	int Ships_id;
}EntityList;
std::vector<EntityList> entityAllList;
std::vector<EntityList> entityList;
std::vector<EntityList> entityBotList;
std::vector<EntityList> entityShipsList;

FTransform GetBoneIndex(DWORD_PTR mesh, int index)
{
	DWORD_PTR bonearray = d.readv<DWORD_PTR>(mesh + 0x4b0);
	if (!bonearray)
		bonearray = d.readv<DWORD_PTR>(mesh + 0x4b0 + 0x10);
	return d.readv<FTransform>(bonearray + (index * 0x30));
}

Vector3 GetBoneWithRotation(DWORD_PTR mesh, int id)
{
	FTransform bone = GetBoneIndex(mesh, id);
	FTransform ComponentToWorld = d.readv<FTransform>(mesh + 0x1c0);
	//auto ComponentToWorld2 = d.readv<uint64_t>(mesh + 0x0158);
	
	D3DMATRIX Matrix;
	Matrix = MatrixMultiplication(bone.ToMatrixWithScale(), ComponentToWorld.ToMatrixWithScale());
	return Vector3(Matrix._41, Matrix._42, Matrix._43);
}



void cache_basic() {

	cache::gworld = d.read<uint64_t>(d.BaseAddress + OFFSET_GWORLD);
	cache::PersistentLevel = d.read<uint64_t>(cache::gworld + 0x30); //0xd8
	cache::owninggameinstance = d.read<uint64_t>(cache::gworld + 0x180);
	cache::LocalPlayers = d.readv<TArray>(cache::owninggameinstance + 0x38);
	cache::localplayer = d.read<uint64_t>(cache::LocalPlayers.GetAddress());
	cache::PlayerController = d.read<uint64_t>(cache::localplayer + 0x30);
	cache::playerPawn = d.read<uint64_t>(cache::PlayerController + 0x258);
	cache::Playerstate = d.read<uint64_t>(cache::PlayerController + 0x230);
	cache::localteamid = d.readv<int32_t>(cache::Playerstate + 0x400);
	cache::Mesh = d.read<uint64_t>(cache::playerPawn + 0x288);
	cache::player_camera_manager = d.read<uint64_t>(cache::PlayerController + 0x2C0);
	//printf("mesh %p\n", Mesh);
	cache::Actors = d.readv<TArray>(cache::PersistentLevel + 0x98);
	cache::Actors2 = d.readv<uint64_t>(cache::PersistentLevel + 0x98);



	std::this_thread::sleep_for(std::chrono::milliseconds(30));
}
auto DrawLine(const ImVec2& aPoint1, const ImVec2 aPoint2, ImU32 aColor, const FLOAT aLineWidth) -> VOID
{
	
	ImGui::GetForegroundDrawList()->AddLine(aPoint1, aPoint2, aColor, aLineWidth);
}
auto DrawBox(float x, float y, float w, float h, ImColor color) -> VOID
{
	DrawLine(ImVec2(x, y), ImVec2(x + w, y), color, 1.3f); // top 
	DrawLine(ImVec2(x, y - 1.3f), ImVec2(x, y + h + 1.4f), color, 1.3f); // left
	DrawLine(ImVec2(x + w, y - 1.3f), ImVec2(x + w, y + h + 1.4f), color, 1.3f);  // right
	DrawLine(ImVec2(x, y + h), ImVec2(x + w, y + h), color, 1.3f);   // bottom 
}
ImFont* Verdana, * DefaultFont;
auto DrawOutlinedText(ImFont* pFont, const std::string& text, const ImVec2& pos, float size, ImU32 color, bool center) -> VOID
{
	ImGui::PushFont(Verdana);
	std::stringstream stream(text);
	std::string line;

	float y = 0.0f;
	int index = 0;

	while (std::getline(stream, line))
	{
		ImVec2 textSize = pFont->CalcTextSizeA(size, FLT_MAX, 0.0f, line.c_str());

		if (center)
		{
			ImGui::GetForegroundDrawList()->AddText(pFont, size, ImVec2((pos.x - textSize.x / 2.0f) + 1, (pos.y + textSize.y * index) + 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), line.c_str());
			ImGui::GetForegroundDrawList()->AddText(pFont, size, ImVec2((pos.x - textSize.x / 2.0f) - 1, (pos.y + textSize.y * index) - 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), line.c_str());
			ImGui::GetForegroundDrawList()->AddText(pFont, size, ImVec2(pos.x - textSize.x / 2.0f, pos.y + textSize.y * index), ImGui::GetColorU32(color), line.c_str());
		}
		else
		{//
			ImGui::GetForegroundDrawList()->AddText(pFont, size, ImVec2((pos.x) + 1, (pos.y + textSize.y * index) + 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), line.c_str());
			ImGui::GetForegroundDrawList()->AddText(pFont, size, ImVec2((pos.x) - 1, (pos.y + textSize.y * index) - 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), line.c_str());
			ImGui::GetForegroundDrawList()->AddText(pFont, size, ImVec2(pos.x, pos.y + textSize.y * index), ImGui::GetColorU32(color), line.c_str());
		}

		y = pos.y + textSize.y * (index + 1);
		index++;
	}
	ImGui::PopFont();
}

void RenderPlayerInfo(Vector3 screenPosition, int distance, ImU32 color) {
	// Render is dead status based on checkbox
	

	// Render distance based on checkbox
	if (displayDistance) {
		std::string distanceText = "Distance: [" + std::to_string(distance) + "]";
		ImGui::GetForegroundDrawList()->AddText(ImVec2(screenPosition.x, screenPosition.y + 5), color, distanceText.c_str());
	}
}

void DrawPlayerBones(uint64_t actorMesh, Vector3 headPos, Vector3 bonePos)
{
	Vector3 vHeadBone = ProjectWorldToScreen(GetBoneWithRotation(actorMesh, bones2::head));
	Vector3 vHip = ProjectWorldToScreen(GetBoneWithRotation(actorMesh, bones2::pelvis));
	Vector3 vNeck = ProjectWorldToScreen(GetBoneWithRotation(actorMesh, bones2::neck_01));
	Vector3 vUpperArmLeft = ProjectWorldToScreen(GetBoneWithRotation(actorMesh, bones2::upperarm_l));
	Vector3 vUpperArmRight = ProjectWorldToScreen(GetBoneWithRotation(actorMesh, bones2::upperarm_r));
	Vector3 vLeftHand = ProjectWorldToScreen(GetBoneWithRotation(actorMesh, bones2::hand_l));
	Vector3 vRightHand = ProjectWorldToScreen(GetBoneWithRotation(actorMesh, bones2::hand_r));
	Vector3 vRightThigh = ProjectWorldToScreen(GetBoneWithRotation(actorMesh, bones2::thigh_r));
	Vector3 vLeftThigh = ProjectWorldToScreen(GetBoneWithRotation(actorMesh, bones2::thigh_l));
	Vector3 vRightCalf = ProjectWorldToScreen(GetBoneWithRotation(actorMesh, bones2::calf_r));
	Vector3 vLeftCalf = ProjectWorldToScreen(GetBoneWithRotation(actorMesh, bones2::calf_l));
	Vector3 vLeftFoot = ProjectWorldToScreen(GetBoneWithRotation(actorMesh, bones2::foot_l));
	Vector3 vRightFoot = ProjectWorldToScreen(GetBoneWithRotation(actorMesh, bones2::foot_r));

	Vector3 vLeftHandMiddle = ProjectWorldToScreen(GetBoneWithRotation(actorMesh, bones2::ik_hand_l));
	Vector3 vRightHandMiddle = ProjectWorldToScreen(GetBoneWithRotation(actorMesh, bones2::ik_hand_r));

	// Draw bones
	DrawLine(ImVec2(vHeadBone.x, vHeadBone.y), ImVec2(vNeck.x, vNeck.y), ImColor(255, 255, 255), 2);
	DrawLine(ImVec2(vHip.x, vHip.y), ImVec2(vNeck.x, vNeck.y), ImColor(255, 255, 255), 2);
	DrawLine(ImVec2(vUpperArmLeft.x, vUpperArmLeft.y), ImVec2(vNeck.x, vNeck.y), ImColor(255, 255, 255), 2);
	DrawLine(ImVec2(vUpperArmRight.x, vUpperArmRight.y), ImVec2(vNeck.x, vNeck.y), ImColor(255, 255, 255), 2);
	DrawLine(ImVec2(vLeftHand.x, vLeftHand.y), ImVec2(vLeftHandMiddle.x, vLeftHandMiddle.y), ImColor(255, 255, 255), 2);
	DrawLine(ImVec2(vRightHand.x, vRightHand.y), ImVec2(vRightHandMiddle.x, vRightHandMiddle.y), ImColor(255, 255, 255), 2);
	DrawLine(ImVec2(vLeftThigh.x, vLeftThigh.y), ImVec2(vHip.x, vHip.y), ImColor(255, 255, 255), 2);
	DrawLine(ImVec2(vRightThigh.x, vRightThigh.y), ImVec2(vHip.x, vHip.y), ImColor(255, 255, 255), 2);
	DrawLine(ImVec2(vLeftCalf.x, vLeftCalf.y), ImVec2(vLeftThigh.x, vLeftThigh.y), ImColor(255, 255, 255), 2);
	DrawLine(ImVec2(vRightCalf.x, vRightCalf.y), ImVec2(vRightThigh.x, vRightThigh.y), ImColor(255, 255, 255), 2);
	DrawLine(ImVec2(vLeftFoot.x, vLeftFoot.y), ImVec2(vLeftCalf.x, vLeftCalf.y), ImColor(255, 255, 255), 2);
	DrawLine(ImVec2(vRightFoot.x, vRightFoot.y), ImVec2(vRightCalf.x, vRightCalf.y), ImColor(255, 255, 255), 2);
	DrawLine(ImVec2(vLeftHandMiddle.x, vLeftHandMiddle.y), ImVec2(vUpperArmLeft.x, vUpperArmLeft.y), ImColor(255, 255, 255), 2);
	DrawLine(ImVec2(vRightHandMiddle.x, vRightHandMiddle.y), ImVec2(vUpperArmRight.x, vUpperArmRight.y), ImColor(255, 255, 255), 2);
}
static PrefixFilter filter = { {"BP_Soldier"} };
void esp() {



	for (int i = 0; i < cache::Actors.Size(); i++) {
		auto CurrentActor = cache::Actors[i];
		auto CameraCache = d.readv<FCameraCacheEntry>(cache::player_camera_manager + 0x1AF0);
		auto trust = d.readv<FName>(CurrentActor + 0x18);
		std::string brain = FNameToString(trust);

		bool shouldRender = !filterEnabled || filter.Matches(brain);

		if (shouldRender) {
			Vector3 Screen;
			auto player_RootComponent = d.read<uint64_t>(cache::PlayerController + 0x138);
			Vector3 player_WorldPos = d.readv<Vector3>(player_RootComponent + 0x11c);
			auto actorPawn = d.read<uintptr_t>(cache::Actors2 + i * 0x8);
			auto actorState = d.read<uint64_t>(actorPawn + 0x0248);
			auto actorid = d.readv<int32_t>(actorState + 0x400);
			auto actorMesh = d.read<uint64_t>(actorPawn + 0x288);

			auto bone_pos = GetBoneWithRotation(actorMesh, 0);

			auto actor_health = d.readv<float>(actorPawn + 0x1df8);
			printf("actor_health %.3f" , actor_health);
			

			auto actorRootComponent = d.read<uint64_t>(CurrentActor + 0x138);
			Vector3 actorWorldPos = d.readv<Vector3>(actorRootComponent + 0x11c);
		//	auto isDead = d.readv<bool>(actorState + 0x1df4); // bIsDying : 1

			if (ignoreteam && actorid == cache::localteamid) {
				continue;
			}
			
			if (actor_health <= 0.0f) {
				continue;
			}
			
			if (WorldToScreenX(actorWorldPos, CameraCache.POV, Screen)) {
				ImU32 color = IM_COL32(0, 255, 0, 255); // Green color

				// Call 
				DrawPlayerBones(actorMesh, GetBoneWithRotation(actorMesh, bones2::head), bone_pos);

				int entity_distance = player_WorldPos.Distance(bone_pos);
				
				RenderPlayerInfo(Screen, entity_distance, color);
			}
		}
	}
}


//	printf("uworld %p\n", gworld);
	//printf("OwningGameInstance %p\n", owninggameinstance);
	//printf("PersistentLevel %p\n", PersistentLevel);
	//printf("localplayers %p\n", LocalPlayers.GetAddress());
	//printf("localplayer size % i\n", LocalPlayers.Size());
	//printf("actors size %p\n", Actors);
	//printf("actors size % i\n", Actors.Size());
	//printf("localplayer %p\n", localplayer);
	//printf("playercontroller %p\n", PlayerController);
	//printf("camera cache %.3f\n", CameraCache.POV.FOV);



void render_menu()
{
	
	if (GetAsyncKeyState(VK_INSERT) & 1) {
		menuopen = !menuopen;

		if (menuopen) {
			SetWindowLong(my_wnd, GWL_EXSTYLE, WS_EX_LAYERED | WS_EX_TOOLWINDOW);
		}
		else {
			SetWindowLong(my_wnd, GWL_EXSTYLE, WS_EX_LAYERED | WS_EX_TRANSPARENT | WS_EX_TOOLWINDOW);
			
		}
	}


	if (menuopen) {
		ImGui::SetNextWindowSize({ 620, 350 });
		ImGui::Begin("Squad", nullptr, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize);
		ImGui::Text("Hello, World!");
		ImGui::Checkbox("Enable Filter", &filterEnabled);
		ImGui::Checkbox("Show Is Dead", &displayIsDead);
		ImGui::Checkbox("Show Distance", &displayDistance); 
		ImGui::Checkbox("Filter Team", &ignoreteam);
		ImGui::End();
	}
}









WPARAM render_loop() {
	ZeroMemory(&messager, sizeof(MSG));
	std::cout << "Starting render loop..." << std::endl;

	while (messager.message != WM_QUIT) {
		// Process messages
		if (PeekMessage(&messager, nullptr, 0, 0, PM_REMOVE)) {
			TranslateMessage(&messager);
			DispatchMessage(&messager);
		}

		// Handle resizing and updating ImGui
		RECT rc;
		POINT xy = { 0, 0 }; // Set xy to origin for simplicity
		ZeroMemory(&rc, sizeof(RECT));
		rc.left = xy.x;
		rc.top = xy.y;

		ImGuiIO& io = ImGui::GetIO();
		io.DeltaTime = 1.0f / 60.0f; // Set frame time

		// Update mouse position
		POINT p;
		GetCursorPos(&p);
		ScreenToClient(my_wnd, &p); // Convert to client coordinates
		io.MousePos.x = p.x;
		io.MousePos.y = p.y;

		// Handle mouse input
		io.MouseDown[0] = (GetAsyncKeyState(VK_LBUTTON) & 0x8000) != 0; // Left mouse button
		if (io.MouseDown[0]) {
			io.MouseClicked[0] = true;
			io.MouseClickedPos[0] = { io.MousePos.x, io.MousePos.y };
		}

		// Start new ImGui frame
		ImGui_ImplDX9_NewFrame();
		ImGui_ImplWin32_NewFrame();
		ImGui::NewFrame();

		esp(); // Call ESP function to draw player info and bones
		render_menu(); // Call menu rendering function

		// End ImGui frame
		ImGui::EndFrame();

		// Clear the device
		p_device->SetRenderState(D3DRS_ZENABLE, false);
		p_device->SetRenderState(D3DRS_ALPHABLENDENABLE, false);
		p_device->SetRenderState(D3DRS_SCISSORTESTENABLE, false);
		p_device->Clear(0, 0, D3DCLEAR_TARGET, D3DCOLOR_ARGB(0, 0, 0, 0), 1.0f, 0);

		// Render the scene
		if (p_device->BeginScene() >= 0) {
			ImGui::Render();
			ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
			p_device->EndScene();
		}

		// Present the rendered frame
		HRESULT result = p_device->Present(0, 0, 0, 0);
		if (result == D3DERR_DEVICELOST && p_device->TestCooperativeLevel() == D3DERR_DEVICENOTRESET) {
			std::cerr << "Device lost, resetting..." << std::endl;
			ImGui_ImplDX9_InvalidateDeviceObjects();
			if (FAILED(p_device->Reset(&p_params))) {
				std::cerr << "Failed to reset Direct3D device after loss." << std::endl;
				continue; // Skip rendering this frame
			}
			ImGui_ImplDX9_CreateDeviceObjects();
		}
	}

	// Cleanup ImGui and Direct3D
	ImGui_ImplDX9_Shutdown();
	ImGui_ImplWin32_Shutdown();
	ImGui::DestroyContext();

	if (p_device != nullptr) {
		p_device->EndScene();
		p_device->Release();
	}

	if (p_object != nullptr) p_object->Release();
	DestroyWindow(my_wnd);

	std::cout << "Render loop ended." << std::endl;
	return messager.wParam;
}
void create_overlay()
{
	// Debug logging
	std::cout << "Creating overlay window..." << std::endl;

	WNDCLASSEXA wcex = {
		sizeof(WNDCLASSEXA),
		0,
		DefWindowProcA,
		0,
		0,
		0,
		LoadIcon(0, IDI_APPLICATION),
		LoadCursor(0, IDC_ARROW),
		0,
		0,
		"Medal",
		LoadIcon(0, IDI_APPLICATION)
	};

	// Register the window class
	ATOM rce = RegisterClassExA(&wcex);
	if (!rce)
	{
		std::cerr << "Error registering window class: " << GetLastError() << std::endl;
		return; // Exit if registration fails
	}
	std::cout << "Window class registered successfully." << std::endl;

	RECT rect;
	GetWindowRect(GetDesktopWindow(), &rect);

	// Create the overlay window
	my_wnd = gui::create_window_in_band(0, rce, L"Medal", WS_POPUP,
		rect.left, rect.top, rect.right, rect.bottom,
		0, 0, wcex.hInstance, 0, gui::ZBID_UIACCESS);

	if (!my_wnd)
	{
		std::cerr << "Error creating overlay window: " << GetLastError() << std::endl;
		return; // Exit if window creation fails
	}
	std::cout << "Overlay window created successfully." << std::endl;

	// Set window styles
	
	SetLayeredWindowAttributes(my_wnd, RGB(0, 0, 0), 255, LWA_ALPHA);

	MARGINS margin = { -1 };
	HRESULT hr = DwmExtendFrameIntoClientArea(my_wnd, &margin);
	if (FAILED(hr))
	{
		std::cerr << "Error extending frame into client area: " << std::hex << hr << std::endl;
		return; // Exit if DWM extension fails
	}
	std::cout << "Frame extended into client area successfully." << std::endl;

	ShowWindow(my_wnd, SW_SHOW);
	UpdateWindow(my_wnd);
	std::cout << "Overlay window displayed." << std::endl;
}
int main() {
	// hide_imports;
	driver_start();
	cache_basic();
	if (!gui::init())
	{
		printf("The gui was not initialized!");
		Sleep(3000);
		exit(0);
	}

	create_overlay();
	directx_init();
	render_loop();
}
	