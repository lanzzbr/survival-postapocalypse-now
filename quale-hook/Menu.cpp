#include "Menu.h"
#include "vars.h"
Menu::Menu()
{
}

static int switchTabs = 5;

void Menu::Render() {

	if (NoTitlebar)		MenuFlags |= ImGuiWindowFlags_NoTitleBar;
	if (NoResize)		MenuFlags |= ImGuiWindowFlags_NoResize;
	if (AutoResize)		MenuFlags |= ImGuiWindowFlags_AlwaysAutoResize;
	if (NoMove)			MenuFlags |= ImGuiWindowFlags_NoMove;
	if (NoScrollbar)	MenuFlags |= ImGuiWindowFlags_NoScrollbar;
	if (NoCollapse)		MenuFlags |= ImGuiWindowFlags_NoCollapse;
	if (!NoMenu)		MenuFlags |= ImGuiWindowFlags_MenuBar;
	ColorEditFlags = 0;
	ColorEditFlags |= ImGuiColorEditFlags_NoDragDrop;
	ColorEditFlags |= ImGuiColorEditFlags_NoInputs;
	ColorEditFlags |= ImGuiColorEditFlags_PickerHueBar;
	ColorEditFlags |= ImGuiColorEditFlags_Uint8;

	ImGui::SetNextWindowSize(ImVec2(600, 400), ImGuiCond_FirstUseEver);
	ImGui::GetStyle().WindowRounding = 0.0f;
	if (isOpen)
	{
		ImGui::Begin("quale-hook", &isOpen, MenuFlags);

		ImGui::PushItemWidth(ImGui::GetWindowWidth() * 0.65f);
		ImGui::PushItemWidth(140);

		if (ImGui::Button("AIMBOT", ImVec2(120, 25)))
		{
			switchTabs = 0;
		}
		ImGui::SameLine(0.0, 2.0f);
		if (ImGui::Button("VISUALS", ImVec2(120, 25)))
		{
			switchTabs = 1;
		}
		ImGui::SameLine(0.0, 2.0f);
		if (ImGui::Button("MISC", ImVec2(120, 25)))
		{
			switchTabs = 2;
		}
		ImGui::SameLine(0.0, 2.0f);
		if (ImGui::Button("COLORS", ImVec2(120, 25)))
		{
			switchTabs = 3;
		}

		switch (switchTabs)
		{
		case 0:
			ImGui::SliderFloat("AIMBOT FOV", &aim_fov, 0.f, 15.f);
			ImGui::SliderFloat("AIM SMOOTH", &aim_smooth, 2.f, 30.f);
			ImGui::Checkbox("VISIBLE", &visible);
			break;
		case 1:
			ImGui::Checkbox("PLAYER", &player_esp);
			ImGui::Checkbox("ADMINS", &admin_esp);
			ImGui::Checkbox("AIR DROP", &air_drop);
			ImGui::Checkbox("DEAD BOX LOOT", &dead_loot_box);
			ImGui::Checkbox("CAR", &cars);
			ImGui::Checkbox("GRENADE", &grenade_esp);
			break;
		case 2:
			ImGui::SliderFloat("FOV", &fov, 0.f, 170.f);
			ImGui::Checkbox("SPOOF NAME", &spoof_name);
			break;
		case 3:
			ImGui::SetColorEditOptions(ColorEditFlags);
			ImGui::ColorEdit4("PLAYERS", c_player);
			ImGui::ColorEdit4("AIR DROP", c_air_drop);
			ImGui::ColorEdit4("DEAD BOX LOOT", c_dead_loot_box);
			ImGui::ColorEdit4("CAR", c_cars);
			ImGui::ColorEdit4("GRENADE", c_grenade);
			break;
		}
		ImGui::End();
	}
}