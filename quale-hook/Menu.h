#pragma once
#include "includes.h"
#include "Third Party/imgui/imgui.h"
#include <string>

class Menu {
private:
	ID3D11DeviceContext* pContext;
	ImGuiWindowFlags MenuFlags = 0;
	ImGuiColorEditFlags ColorEditFlags = 0;
public:
	bool isOpen = false;
	bool NoTitlebar = false;
	bool NoResize = true;
	bool AutoResize = false;
	bool NoMove = false;
	bool NoScrollbar = false;
	bool NoCollapse = true;
	bool NoMenu = true;

	//bools futures
	bool player_esp = false;
	bool air_drop = false;
	bool admin_esp = false;
	bool dead_loot_box = false;
	bool spoof_name = false;
	bool cars = false;
	bool player_aim = false;
	bool grenade_esp = false;
	bool loot_esp = false;
	bool array_actor = false;


	//color variables
	float c_air_drop[4] = { 255, 0, 0, 255 };
	float c_dead_loot_box[4] = { 52, 235, 235, 255 };
	float c_cars[4] = { 149, 52, 235, 255 };
	float c_grenade[4] = { 21, 230, 80, 255 };
	float c_player[4] = { 247, 255, 5, 255 };
	float c_admin[4] = { 255, 5, 5, 255 };


	//Misc shit
	float fov = 0.f;
	const wchar_t string[32] = L" ";

	float aim_fov = 2.f;
	float aim_smooth = 6.f;
public:
	Menu();
	Menu(ID3D11DeviceContext* pContext);
	void Render();
};