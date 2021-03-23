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

// Function Cv4_AddonBlueprintLibrary.Cv4_AddonBlueprintLibrary_C.GetSurvGameMode
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Cv2_GameModesEnum_ECv2_GameModesEnum> GameModes                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv4_AddonBlueprintLibrary_C::STATIC_GetSurvGameMode(class UObject* __WorldContext, TEnumAsByte<Cv2_GameModesEnum_ECv2_GameModesEnum>* GameModes)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36433);

	UCv4_AddonBlueprintLibrary_C_GetSurvGameMode_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameModes != nullptr)
		*GameModes = params.GameModes;

}


// Function Cv4_AddonBlueprintLibrary.Cv4_AddonBlueprintLibrary_C.GetSurvState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACv2_GameState_C*        AsCv_2_Game_State              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv4_AddonBlueprintLibrary_C::STATIC_GetSurvState(class UObject* __WorldContext, class ACv2_GameState_C** AsCv_2_Game_State)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36431);

	UCv4_AddonBlueprintLibrary_C_GetSurvState_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsCv_2_Game_State != nullptr)
		*AsCv_2_Game_State = params.AsCv_2_Game_State;

}


// Function Cv4_AddonBlueprintLibrary.Cv4_AddonBlueprintLibrary_C.CheckCraftDoorOnScene
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           DisableBuildingOut             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCv4_AddonBlueprintLibrary_C::STATIC_CheckCraftDoorOnScene(const struct FVector& Location, class UObject* __WorldContext, bool* DisableBuildingOut)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36429);

	UCv4_AddonBlueprintLibrary_C_CheckCraftDoorOnScene_Params params;
	params.Location = Location;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DisableBuildingOut != nullptr)
		*DisableBuildingOut = params.DisableBuildingOut;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
