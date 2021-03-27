#include "ESP.h"
#include "vars.h"
#include "Offsets.h"

void get_offsets_for_esp()
{
	uintptr_t base_address = (reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)));
	gh::m_world = reinterpret_cast<CG::UWorld**>(base_address + 0x2A58BB8);
	CG::UObject::GObjects = reinterpret_cast<CG::TUObjectArray*>(base_address + 0x2975950);
	CG::FName::GNames = *reinterpret_cast<CG::TNameEntryArray**>(base_address + 0x296CB28);
}

ESP::ESP()
{

}

bool is_local_player(CG::AActor* player)
{
	auto player_controller = gh::local_player->PlayerController;
	if ((player_controller) == nullptr)
		return 0;
	if (player_controller->AcknowledgedPawn == nullptr)
		return true;
	return (static_cast<CG::APawn*>(player) == player_controller->AcknowledgedPawn);
}

void ESP::Render()
{
	if (!toggled) return;

	get_offsets_for_esp();

	if ((*gh::m_world) == nullptr)
		return;

	gh::m_persistence_level = (*gh::m_world)->PersistentLevel;

	gh::local_player = (*gh::m_world)->OwningGameInstance->LocalPlayers[0];

	if ((gh::local_player) == nullptr)
		return;

	auto* player_controller = gh::local_player->PlayerController;

	if ((player_controller) == nullptr)
		return;

	auto acknowledged_pawn = player_controller->AcknowledgedPawn;
	if ((acknowledged_pawn) == nullptr)
		return;

	auto* root_component = acknowledged_pawn->RootComponent;
	if ((root_component) == nullptr)
		return;

	CG::FVector2D screen;

	CG::TArray<CG::AActor*> AActors = gh::m_persistence_level->AActors;
	for (int i = 0; i < AActors.Num(); i++)
	{
		CG::AActor* actor = AActors[i];
		if ((actor) == nullptr)
			continue;
		auto root_component_actor = actor->RootComponent;
		if ((root_component_actor) == nullptr)
			continue;

		const char* get_name = actor->Name.GetName();

		CG::ACv2_Character_Survival_C* pawn = static_cast<CG::ACv2_Character_Survival_C*>(actor);

		if (strstr(get_name, "Cv2_Character_Survival_C"))
		{
			if (is_local_player(actor))
				continue;

			if ((pawn) == nullptr)
				continue;
			auto get_player_state = pawn->PlayerState;

			if ((get_player_state) == nullptr)
				continue;

			const wchar_t* get_player_name = get_player_state->PlayerName.c_str();
			char name[32];
			std::wcstombs(name, get_player_name, 32);

			if (player_controller->ProjectWorldLocationToScreen(root_component_actor->RelativeLocation, &screen, false))
			{
				float* c_player_esp = vars::quale_menu.c_player;
				ImGui::GetBackgroundDrawList()->AddText(ImVec2(screen.X, screen.Y), ImColor(c_player_esp[0], c_player_esp[1], c_player_esp[2], c_player_esp[3]), name);
			}
		}
	}
}