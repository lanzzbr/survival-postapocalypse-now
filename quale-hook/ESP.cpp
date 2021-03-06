#include "ESP.h"
#include "vars.h"
#include "Offsets.h"
#include <comdef.h>

#pragma warning(disable : 4996)

const int AimKey = VK_RBUTTON;

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

float DistTo(CG::FVector first, CG::FVector second)
{
	CG::FVector delta;
	delta.X = first.X - second.X;
	delta.Y = first.Y - second.Y;
	delta.Z = first.Z - second.Z;

	return sqrt(delta.X * delta.X + delta.Y * delta.Y + delta.Z * delta.Z);
}


enum Bones : int {
	Head = 6
};

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

	auto* controller = acknowledged_pawn->Controller;
	if ((controller) == nullptr)
		return;
	auto character = controller->Character;
	if ((character) == nullptr)
		return;
	auto char_Movement = character->CharacterMovement;
	if ((char_Movement) == nullptr)
		return;
	char_Movement->MaxWalkSpeed = vars::quale_menu.single_player_speed;
	char_Movement->MaxWalkSpeed = vars::quale_menu.single_player_speed;

	float ViewportWidth;
	float ViewportHeight;
	ImGuiIO io = ImGui::GetIO();
	ViewportWidth = io.DisplaySize.x;
	ViewportHeight = io.DisplaySize.y;
	auto my_pawn = player_controller->Pawn;
	if ((my_pawn) == nullptr)
		return;
	auto my_player_state = my_pawn->PlayerState;
	if ((my_player_state) == nullptr)
		return;
	CG::ACv2_PlayerState_C* local_state = static_cast<CG::ACv2_PlayerState_C*>(my_player_state);

	auto game_state = local_state->proxyGameState;

	if (vars::quale_menu.time) {
		game_state->DayTimeSys->TimeChangeSpeed = 16.f;
	}

	auto my_ping = my_player_state->Ping;

	ImGui::GetBackgroundDrawList()->AddText(ImVec2(350, 150), ImColor(0, 213, 0, 255), std::to_string(my_ping).c_str());

	//change fov function
	player_controller->STATIC_FOV(vars::quale_menu.fov);
	//Set name function
	if (vars::quale_menu.spoof_name)
	{
		CG::FString string(vars::quale_menu.string);
		player_controller->STATIC_SetName(string);
	}

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

		float distance = DistTo(root_component->RelativeLocation, root_component_actor->RelativeLocation);
		float calculate_distnace = distance / 100;

		CG::ACv2_Character_Survival_C* pawn = static_cast<CG::ACv2_Character_Survival_C*>(actor);
		CG::ACv2_playerController_C* admin = static_cast<CG::ACv2_playerController_C*>(actor);
		static struct
		{
			CG::AActor* target = nullptr;
			CG::FVector location;
			CG::FRotator delta;
			float best = FLT_MAX;
			float smoothness = 1.f;
		}aimBest;

		aimBest.target = nullptr;
		aimBest.best = FLT_MAX;

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

			CG::ACv2_PlayerState_C* actor_state = static_cast<CG::ACv2_PlayerState_C*>(get_player_state);

			_bstr_t b(get_player_name);
			const char* c = b;


			if (player_controller->ProjectWorldLocationToScreen(root_component_actor->RelativeLocation, &screen, false))
			{
				float* c_player_esp = vars::quale_menu.c_player;
				ImGui::GetBackgroundDrawList()->AddText(ImVec2(screen.X, screen.Y), ImColor{ c_player_esp[0], c_player_esp[1], c_player_esp[2], c_player_esp[3] }, c);
				ImGui::GetBackgroundDrawList()->AddText(ImVec2(screen.X, screen.Y + 15), ImColor{ c_player_esp[0], c_player_esp[1], c_player_esp[2], c_player_esp[3] }, std::to_string((int)(calculate_distnace)).c_str());

				if (!player_controller->LineOfSightTo(actor, CG::FVector(), false))
				{
					ImGui::GetBackgroundDrawList()->AddText(ImVec2(screen.X, screen.Y + 35), ImColor(255, 0, 0, 255), "behind the wall");
				}
				if (admin->ServerAdmin)
				{
					ImGui::GetBackgroundDrawList()->AddText(ImVec2(screen.X, screen.Y + 45), ImColor(0, 255, 0, 255), "server admin");
				}
			}

			float fYaw = vars::quale_menu.aim_fov;
			float fPitch = vars::quale_menu.aim_fov;
			float fSmoothness = vars::quale_menu.aim_smooth;

			auto localLoc = character->K2_GetActorLocation();
			auto const camera = player_controller->PlayerCameraManager;
			if ((camera) == nullptr)
				continue;
			const auto cameraLoc = camera->CameraCache.POV.Location;
			const auto cameraRot = camera->CameraCache.POV.Rotation;
			CG::FVector addPos(0, 0, 35);
			CG::FVector playerLoc = addPos + actor->RootComponent->RelativeLocation;
			float dist = DistTo(root_component->RelativeLocation, playerLoc);
			CG::UKismetMathLibrary* gMath = (CG::UKismetMathLibrary*)CG::UGameplayStatics::StaticClass();
			CG::FRotator rotationDelta = gMath->NormalizedDeltaRotator(gMath->FindLookAtRotation(cameraLoc, playerLoc), cameraRot);

			float absYaw = abs(rotationDelta.Yaw);
			float absPitch = abs(rotationDelta.Pitch);
			if (absYaw > fYaw || absPitch > fPitch) { continue; }
			float sum = absYaw + absPitch;
			if (sum < aimBest.best)
			{
				aimBest.target = actor;
				aimBest.location = playerLoc;
				aimBest.delta = rotationDelta;
				aimBest.best = sum;
				aimBest.smoothness = fSmoothness;
			}

			if (player_controller->ProjectWorldLocationToScreen(aimBest.location, &screen, false))
			{
				auto col = ImGui::GetColorU32(IM_COL32(0, 200, 0, 255));
				ImGui::GetBackgroundDrawList()->AddLine({ io.DisplaySize.x * 0.5f , io.DisplaySize.y * 0.5f }, { screen.X, screen.Y }, col);
				ImGui::GetBackgroundDrawList()->AddCircle({ screen.X, screen.Y }, 3.f, col);
			}

			if (GetAsyncKeyState(AimKey))
			{
				if (vars::quale_menu.visible)
				{
					if (player_controller->LineOfSightTo(actor, CG::FVector(), false))
					{
						aimBest.delta = gMath->NormalizedDeltaRotator(gMath->FindLookAtRotation(cameraLoc, aimBest.location), cameraRot);
						auto smoothness = 1.f / aimBest.smoothness;
						player_controller->STATIC_AddYawInput(aimBest.delta.Yaw * smoothness);
						player_controller->STATIC_AddPitchInput(aimBest.delta.Pitch * -smoothness);
					}
				}
				else {
					aimBest.delta = gMath->NormalizedDeltaRotator(gMath->FindLookAtRotation(cameraLoc, aimBest.location), cameraRot);
					auto smoothness = 1.f / aimBest.smoothness;
					player_controller->STATIC_AddYawInput(aimBest.delta.Yaw* smoothness);
					player_controller->STATIC_AddPitchInput(aimBest.delta.Pitch * -smoothness);
				}
			}
		}
	}
}

DeadLootBoxESP::DeadLootBoxESP()
{

}

void DeadLootBoxESP::Render()
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

		if (strstr(get_name, "Cv2_DeadLootBox_C"))
		{
			if (player_controller->ProjectWorldLocationToScreen(root_component_actor->RelativeLocation, &screen, false))
			{
				float* c_dead_loot_box = vars::quale_menu.c_dead_loot_box;
				ImGui::GetBackgroundDrawList()->AddText(ImVec2(screen.X, screen.Y), ImColor(c_dead_loot_box[0], c_dead_loot_box[1], c_dead_loot_box[2], c_dead_loot_box[3]), "LootBox");
			}
		}
	}
}

Admin::Admin()
{

}

void Admin::Render()
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

		float distance = DistTo(root_component->RelativeLocation, root_component_actor->RelativeLocation);
		float calculate_distnace = distance / 100;

		CG::ACv2_Character_Survival_C* pawn = static_cast<CG::ACv2_Character_Survival_C*>(actor);

		if (strstr(get_name, "Cv2_AdminPawn_C"))
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
				float* c_admin_esp = vars::quale_menu.c_admin;
				ImGui::GetBackgroundDrawList()->AddText(ImVec2(screen.X, screen.Y), ImColor(c_admin_esp[0], c_admin_esp[1], c_admin_esp[2], c_admin_esp[3]), name);
				ImGui::GetBackgroundDrawList()->AddText(ImVec2(screen.X, screen.Y + 15), ImColor(c_admin_esp[0], c_admin_esp[1], c_admin_esp[2], c_admin_esp[3]), std::to_string((int)(calculate_distnace)).c_str());
				ImGui::GetBackgroundDrawList()->AddText(ImVec2(screen.X, screen.Y + 35), ImColor(c_admin_esp[0], c_admin_esp[1], c_admin_esp[2], c_admin_esp[3]), "is Admin");
			}
		}
	}
}

Cars::Cars()
{

}

void Cars::Render()
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

		if (strstr(get_name, "Surv_Car_Corolla_C"))
		{
			if (player_controller->ProjectWorldLocationToScreen(root_component_actor->RelativeLocation, &screen, false))
			{
				float* c_cars_esp = vars::quale_menu.c_cars;
				ImGui::GetBackgroundDrawList()->AddText(ImVec2(screen.X, screen.Y + 35), ImColor(c_cars_esp[0], c_cars_esp[1], c_cars_esp[2], c_cars_esp[3]), "Car");
			}
		}

		if (strstr(get_name, "Surv_Car_GAZ_3302_C"))
		{
			if (player_controller->ProjectWorldLocationToScreen(root_component_actor->RelativeLocation, &screen, false))
			{
				float* c_cars_esp = vars::quale_menu.c_cars;
				ImGui::GetBackgroundDrawList()->AddText(ImVec2(screen.X, screen.Y + 35), ImColor(c_cars_esp[0], c_cars_esp[1], c_cars_esp[2], c_cars_esp[3]), "Car");
			}
		}

		if (strstr(get_name, "Surv_Car_GAZ_3321_C"))
		{
			if (player_controller->ProjectWorldLocationToScreen(root_component_actor->RelativeLocation, &screen, false))
			{
				float* c_cars_esp = vars::quale_menu.c_cars;
				ImGui::GetBackgroundDrawList()->AddText(ImVec2(screen.X, screen.Y + 35), ImColor(c_cars_esp[0], c_cars_esp[1], c_cars_esp[2], c_cars_esp[3]), "Car");
			}
		}

		if (strstr(get_name, "Surv_Car_GAZ_3321_Police_C"))
		{
			if (player_controller->ProjectWorldLocationToScreen(root_component_actor->RelativeLocation, &screen, false))
			{
				float* c_cars_esp = vars::quale_menu.c_cars;
				ImGui::GetBackgroundDrawList()->AddText(ImVec2(screen.X, screen.Y + 35), ImColor(c_cars_esp[0], c_cars_esp[1], c_cars_esp[2], c_cars_esp[3]), "Car");
			}
		}

		if (strstr(get_name, "Surv_Car_M412_C"))
		{
			if (player_controller->ProjectWorldLocationToScreen(root_component_actor->RelativeLocation, &screen, false))
			{
				float* c_cars_esp = vars::quale_menu.c_cars;
				ImGui::GetBackgroundDrawList()->AddText(ImVec2(screen.X, screen.Y + 35), ImColor(c_cars_esp[0], c_cars_esp[1], c_cars_esp[2], c_cars_esp[3]), "Car");
			}
		}

		if (strstr(get_name, "Surv_Car_Passat_C"))
		{
			if (player_controller->ProjectWorldLocationToScreen(root_component_actor->RelativeLocation, &screen, false))
			{
				float* c_cars_esp = vars::quale_menu.c_cars;
				ImGui::GetBackgroundDrawList()->AddText(ImVec2(screen.X, screen.Y + 35), ImColor(c_cars_esp[0], c_cars_esp[1], c_cars_esp[2], c_cars_esp[3]), "Car");
			}
		}

		if (strstr(get_name, "Surv_Car_T40_C"))
		{
			if (player_controller->ProjectWorldLocationToScreen(root_component_actor->RelativeLocation, &screen, false))
			{
				float* c_cars_esp = vars::quale_menu.c_cars;
				ImGui::GetBackgroundDrawList()->AddText(ImVec2(screen.X, screen.Y + 35), ImColor(c_cars_esp[0], c_cars_esp[1], c_cars_esp[2], c_cars_esp[3]), "Car");
			}
		}

		if (strstr(get_name, "Surv_Car_Uaz469_Military_C"))
		{
			if (player_controller->ProjectWorldLocationToScreen(root_component_actor->RelativeLocation, &screen, false))
			{
				float* c_cars_esp = vars::quale_menu.c_cars;
				ImGui::GetBackgroundDrawList()->AddText(ImVec2(screen.X, screen.Y + 35), ImColor(c_cars_esp[0], c_cars_esp[1], c_cars_esp[2], c_cars_esp[3]), "Car");
			}
		}

		if (strstr(get_name, "Surv_Car_Uaz469_Police_C"))
		{
			if (player_controller->ProjectWorldLocationToScreen(root_component_actor->RelativeLocation, &screen, false))
			{
				float* c_cars_esp = vars::quale_menu.c_cars;
				ImGui::GetBackgroundDrawList()->AddText(ImVec2(screen.X, screen.Y + 35), ImColor(c_cars_esp[0], c_cars_esp[1], c_cars_esp[2], c_cars_esp[3]), "Car");
			}
		}

		if (strstr(get_name, "Surv_Car_Vaz_2101_C"))
		{
			if (player_controller->ProjectWorldLocationToScreen(root_component_actor->RelativeLocation, &screen, false))
			{
				float* c_cars_esp = vars::quale_menu.c_cars;
				ImGui::GetBackgroundDrawList()->AddText(ImVec2(screen.X, screen.Y + 35), ImColor(c_cars_esp[0], c_cars_esp[1], c_cars_esp[2], c_cars_esp[3]), "Car");
			}
		}

		if (strstr(get_name, "Surv_Car_Vaz_2109_C"))
		{
			if (player_controller->ProjectWorldLocationToScreen(root_component_actor->RelativeLocation, &screen, false))
			{
				float* c_cars_esp = vars::quale_menu.c_cars;
				ImGui::GetBackgroundDrawList()->AddText(ImVec2(screen.X, screen.Y + 35), ImColor(c_cars_esp[0], c_cars_esp[1], c_cars_esp[2], c_cars_esp[3]), "Car");
			}
		}

		if (strstr(get_name, "Surv_Car_Zil130_C"))
		{
			if (player_controller->ProjectWorldLocationToScreen(root_component_actor->RelativeLocation, &screen, false))
			{
				float* c_cars_esp = vars::quale_menu.c_cars;
				ImGui::GetBackgroundDrawList()->AddText(ImVec2(screen.X, screen.Y + 35), ImColor(c_cars_esp[0], c_cars_esp[1], c_cars_esp[2], c_cars_esp[3]), "Car");
			}
		}

		if (strstr(get_name, "Cv2_BaseCar_4W_C"))
		{
			if (player_controller->ProjectWorldLocationToScreen(root_component_actor->RelativeLocation, &screen, false))
			{
				float* c_cars_esp = vars::quale_menu.c_cars;
				ImGui::GetBackgroundDrawList()->AddText(ImVec2(screen.X, screen.Y + 35), ImColor(c_cars_esp[0], c_cars_esp[1], c_cars_esp[2], c_cars_esp[3]), "Car");
			}
		}
	}
}

Grenade::Grenade()
{

}

void Grenade::Render()
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

		if (strstr(get_name, "Cv2_ProjectileBase_C"))
		{
			if (player_controller->ProjectWorldLocationToScreen(root_component_actor->RelativeLocation, &screen, false))
			{
				float* c_grenade = vars::quale_menu.c_grenade;
				ImGui::GetBackgroundDrawList()->AddText(ImVec2(screen.X, screen.Y), ImColor(c_grenade[0], c_grenade[1], c_grenade[2], c_grenade[3]), "Grenade");
			}
		}
	}
}

AirDrop::AirDrop()
{

}

void AirDrop::Render()
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

		if (strstr(get_name, "Cv2_AirDropBox_C"))
		{
			if (player_controller->ProjectWorldLocationToScreen(root_component_actor->RelativeLocation, &screen, false))
			{
				float* c_air_drop = vars::quale_menu.c_air_drop;
				ImGui::GetBackgroundDrawList()->AddText(ImVec2(screen.X, screen.Y), ImColor(c_air_drop[0], c_air_drop[1], c_air_drop[2], c_air_drop[3]), "AIR DROP");
			}
		}

		if (strstr(get_name, "Cv2_DesantParachute_C"))
		{
			if (player_controller->ProjectWorldLocationToScreen(root_component_actor->RelativeLocation, &screen, false))
			{
				float* c_air_drop = vars::quale_menu.c_air_drop;
				ImGui::GetBackgroundDrawList()->AddText(ImVec2(screen.X, screen.Y), ImColor(c_air_drop[0], c_air_drop[1], c_air_drop[2], c_air_drop[3]), "AIR DROP");
			}
		}
	}
}


PlayerList::PlayerList()
{

}

void PlayerList::Render()
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
			if ((pawn) == nullptr)
				continue;
			auto get_player_state = pawn->PlayerState;

			if ((get_player_state) == nullptr)
				continue;

			const wchar_t* get_player_name = get_player_state->PlayerName.c_str();

			CG::ACv2_PlayerState_C* actor_state = static_cast<CG::ACv2_PlayerState_C*>(get_player_state);

			_bstr_t S(get_player_name);
			const char* f = S;

			const wchar_t* SteamID = actor_state->MyUniqNetId.c_str();

			_bstr_t d(SteamID);
			const char* v = d;

			int KD = actor_state->Kills / actor_state->Deaths;
			ImGui::SetNextWindowSize(ImVec2(185, 371), ImGuiCond_FirstUseEver);
			if (ImGui::Begin("Player List Info", &vars::quale_menu.isOpen, ImGuiWindowFlags_NoResize)) {
				ImGui::Columns(1);
				ImGui::Separator();
				ImGui::Separator();
				ImGui::Text(f);
				ImGui::Text("STEAM ID");
				ImGui::Text(v);
				ImGui::Text("KILLS");
				ImGui::Text(std::to_string(actor_state->Kills).c_str());
				ImGui::Text("Deaths");
				ImGui::Text(std::to_string(actor_state->Deaths).c_str());
				ImGui::Text("Headshots");
				ImGui::Text(std::to_string(actor_state->Headshots).c_str());
				if (actor_state->SAC_SpeedHack)
				{
					ImGui::Text("USING SPEEDHACK");
				}
				else {
					ImGui::Text("NO SPEEDHACK");
				}
				if (actor_state->AntiCheatOK)
				{
					ImGui::Text("NO USING CHEAT");
				}
				else {
					ImGui::Text("CHEATING NOW");
				}
				ImGui::Text("K/D ratio");
				ImGui::Text(std::to_string(KD).c_str());
			}
		}
	}
}