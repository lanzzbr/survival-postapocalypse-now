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

// Function BaseWeapon_MK2_Grenade_Skeleton_AnimBlueprint.BaseWeapon_MK2_Grenade_Skeleton_AnimBlueprint_C.ExecuteUbergraph_BaseWeapon_MK2_Grenade_Skeleton_AnimBlueprint
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBaseWeapon_MK2_Grenade_Skeleton_AnimBlueprint_C::STATIC_ExecuteUbergraph_BaseWeapon_MK2_Grenade_Skeleton_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(39809);

	UBaseWeapon_MK2_Grenade_Skeleton_AnimBlueprint_C_ExecuteUbergraph_BaseWeapon_MK2_Grenade_Skeleton_AnimBlueprint_Params params;
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
