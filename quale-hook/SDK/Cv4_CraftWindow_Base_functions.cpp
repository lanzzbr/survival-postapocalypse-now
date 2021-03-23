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

// Function Cv4_CraftWindow_Base.Cv4_CraftWindow_Base_C.OnRep_IsDamaged
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv4_CraftWindow_Base_C::STATIC_OnRep_IsDamaged()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55089);

	ACv4_CraftWindow_Base_C_OnRep_IsDamaged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_CraftWindow_Base.Cv4_CraftWindow_Base_C.OnRep_IsDestroyed
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv4_CraftWindow_Base_C::STATIC_OnRep_IsDestroyed()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55087);

	ACv4_CraftWindow_Base_C_OnRep_IsDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_CraftWindow_Base.Cv4_CraftWindow_Base_C.Apply Damage Custom(window) 
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv4_CraftWindow_Base_C::STATIC_Apply_Damage_Custom_window__(float Damage)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55085);

	ACv4_CraftWindow_Base_C_Apply_Damage_Custom_window___Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_CraftWindow_Base.Cv4_CraftWindow_Base_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv4_CraftWindow_Base_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(55084);

	ACv4_CraftWindow_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
