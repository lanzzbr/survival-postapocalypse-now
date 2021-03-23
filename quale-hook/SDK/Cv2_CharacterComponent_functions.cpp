// Name: ANUSGAME, Version: 4.18

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.CheckProneBoxTraceTimer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_CharacterComponent_C::STATIC_CheckProneBoxTraceTimer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58280);

	UCv2_CharacterComponent_C_CheckProneBoxTraceTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.CheckProneBoxTrace
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           isDisableProne                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCv2_CharacterComponent_C::STATIC_CheckProneBoxTrace(bool* isDisableProne)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58244);

	UCv2_CharacterComponent_C_CheckProneBoxTrace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (isDisableProne != nullptr)
		*isDisableProne = params.isDisableProne;

}


// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.CheckPlayerMeshVisible
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_CharacterComponent_C::STATIC_CheckPlayerMeshVisible()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58242);

	UCv2_CharacterComponent_C_CheckPlayerMeshVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.CheckAntiCheat
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_CharacterComponent_C::STATIC_CheckAntiCheat()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58238);

	UCv2_CharacterComponent_C_CheckAntiCheat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.CheckStamina
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_CharacterComponent_C::STATIC_CheckStamina()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58236);

	UCv2_CharacterComponent_C_CheckStamina_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.AddResourceShkafLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class ACv2_playerController_C* PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FZ_LootStr              LootStructure                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UCv2_CharacterComponent_C::STATIC_AddResourceShkafLoot(class ACv2_playerController_C* PlayerController, const struct FZ_LootStr& LootStructure)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58234);

	UCv2_CharacterComponent_C_AddResourceShkafLoot_Params params;
	params.PlayerController = PlayerController;
	params.LootStructure = LootStructure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.CheckStand
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           isStandEnabled                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCv2_CharacterComponent_C::STATIC_CheckStand(bool* isStandEnabled)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58232);

	UCv2_CharacterComponent_C_CheckStand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (isStandEnabled != nullptr)
		*isStandEnabled = params.isStandEnabled;

}


// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.SetKillerCamera
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_CharacterComponent_C::STATIC_SetKillerCamera()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58231);

	UCv2_CharacterComponent_C_SetKillerCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.ClientTakeLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class ACv2_LootBP_C*           LootObject                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_CharacterComponent_C::STATIC_ClientTakeLoot(class ACv2_LootBP_C** LootObject)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58229);

	UCv2_CharacterComponent_C_ClientTakeLoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LootObject != nullptr)
		*LootObject = params.LootObject;

}


// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.SetAiming
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsAim                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           isBinocular                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCv2_CharacterComponent_C::STATIC_SetAiming(bool IsAim, bool isBinocular)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58227);

	UCv2_CharacterComponent_C_SetAiming_Params params;
	params.IsAim = IsAim;
	params.isBinocular = isBinocular;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.HideOptic
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_CharacterComponent_C::STATIC_HideOptic()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58225);

	UCv2_CharacterComponent_C_HideOptic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.ShowOptic
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UClass*                  OpticGUI                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_CharacterComponent_C::STATIC_ShowOptic(class UClass* OpticGUI)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58223);

	UCv2_CharacterComponent_C_ShowOptic_Params params;
	params.OpticGUI = OpticGUI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.SetPlayerNick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Meters                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_CharacterComponent_C::STATIC_SetPlayerNick(int Meters)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58221);

	UCv2_CharacterComponent_C_SetPlayerNick_Params params;
	params.Meters = Meters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.CheckToPlayersDistance
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_CharacterComponent_C::STATIC_CheckToPlayersDistance()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58219);

	UCv2_CharacterComponent_C_CheckToPlayersDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.ShowChatClient
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 GovorunLocation                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_CharacterComponent_C::STATIC_ShowChatClient(const struct FText& Text, const struct FVector& GovorunLocation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58217);

	UCv2_CharacterComponent_C_ShowChatClient_Params params;
	params.Text = Text;
	params.GovorunLocation = GovorunLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.DeadCameraMove
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_CharacterComponent_C::STATIC_DeadCameraMove()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58215);

	UCv2_CharacterComponent_C_DeadCameraMove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.GetGrenadesCount
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           isThrowed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum> GrenadeEnum                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_CharacterComponent_C::STATIC_GetGrenadesCount(bool* isThrowed, TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum>* GrenadeEnum)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58213);

	UCv2_CharacterComponent_C_GetGrenadesCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (isThrowed != nullptr)
		*isThrowed = params.isThrowed;
	if (GrenadeEnum != nullptr)
		*GrenadeEnum = params.GrenadeEnum;

}


// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.ClearAllLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_CharacterComponent_C::STATIC_ClearAllLoot()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58210);

	UCv2_CharacterComponent_C_ClearAllLoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.DropAllLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_CharacterComponent_C::STATIC_DropAllLoot()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58208);

	UCv2_CharacterComponent_C_DropAllLoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.SetInHandsWeaponAmmo
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            SetAmmo                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_CharacterComponent_C::STATIC_SetInHandsWeaponAmmo(int SetAmmo)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58206);

	UCv2_CharacterComponent_C_SetInHandsWeaponAmmo_Params params;
	params.SetAmmo = SetAmmo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.GetInHandsWeaponAmmo
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            GetAmmo                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_CharacterComponent_C::STATIC_GetInHandsWeaponAmmo(int* GetAmmo)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58204);

	UCv2_CharacterComponent_C_GetInHandsWeaponAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GetAmmo != nullptr)
		*GetAmmo = params.GetAmmo;

}


// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.ThrowGrenade
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum> Grenade                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_CharacterComponent_C::STATIC_ThrowGrenade(TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum> Grenade)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58202);

	UCv2_CharacterComponent_C_ThrowGrenade_Params params;
	params.Grenade = Grenade;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.InitializeOnlyServer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_CharacterComponent_C::STATIC_InitializeOnlyServer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58201);

	UCv2_CharacterComponent_C_InitializeOnlyServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_CharacterComponent_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58200);

	UCv2_CharacterComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.InitializeClient
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_CharacterComponent_C::STATIC_InitializeClient()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58199);

	UCv2_CharacterComponent_C_InitializeClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_CharacterComponent.Cv2_CharacterComponent_C.ExecuteUbergraph_Cv2_CharacterComponent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_CharacterComponent_C::STATIC_ExecuteUbergraph_Cv2_CharacterComponent(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58197);

	UCv2_CharacterComponent_C_ExecuteUbergraph_Cv2_CharacterComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
