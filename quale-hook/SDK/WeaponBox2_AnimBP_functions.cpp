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

// Function WeaponBox2_AnimBP.WeaponBox2_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WeaponBox2_AnimBP_AnimGraphNode_BlendListByBool_4F681259480988BA2BD8C0B133EFE951
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UWeaponBox2_AnimBP_C::STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_WeaponBox2_AnimBP_AnimGraphNode_BlendListByBool_4F681259480988BA2BD8C0B133EFE951()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(171471);

	UWeaponBox2_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_WeaponBox2_AnimBP_AnimGraphNode_BlendListByBool_4F681259480988BA2BD8C0B133EFE951_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WeaponBox2_AnimBP.WeaponBox2_AnimBP_C.ExecuteUbergraph_WeaponBox2_AnimBP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWeaponBox2_AnimBP_C::STATIC_ExecuteUbergraph_WeaponBox2_AnimBP(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(171473);

	UWeaponBox2_AnimBP_C_ExecuteUbergraph_WeaponBox2_AnimBP_Params params;
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
