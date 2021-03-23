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

// Function Cv2_Character_Survival.Cv2_Character_Survival_C.OnRep_PARTS_TORSE
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Character_Survival_C::STATIC_OnRep_PARTS_TORSE()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(62243);

	ACv2_Character_Survival_C_OnRep_PARTS_TORSE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Character_Survival.Cv2_Character_Survival_C.OnRep_PARTS_LEGS
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Character_Survival_C::STATIC_OnRep_PARTS_LEGS()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(62241);

	ACv2_Character_Survival_C_OnRep_PARTS_LEGS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Character_Survival.Cv2_Character_Survival_C.OnRep_PARTS_FOOT
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Character_Survival_C::STATIC_OnRep_PARTS_FOOT()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(62239);

	ACv2_Character_Survival_C_OnRep_PARTS_FOOT_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_Character_Survival.Cv2_Character_Survival_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_Character_Survival_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(68329);

	ACv2_Character_Survival_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
