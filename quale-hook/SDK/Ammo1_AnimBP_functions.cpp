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

// Function Ammo1_AnimBP.Ammo1_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Ammo1_AnimBP_AnimGraphNode_BlendListByBool_A162E3B04726F31F482E9DB2E4FF0244
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UAmmo1_AnimBP_C::STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_Ammo1_AnimBP_AnimGraphNode_BlendListByBool_A162E3B04726F31F482E9DB2E4FF0244()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(178615);

	UAmmo1_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Ammo1_AnimBP_AnimGraphNode_BlendListByBool_A162E3B04726F31F482E9DB2E4FF0244_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ammo1_AnimBP.Ammo1_AnimBP_C.ExecuteUbergraph_Ammo1_AnimBP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAmmo1_AnimBP_C::STATIC_ExecuteUbergraph_Ammo1_AnimBP(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(178617);

	UAmmo1_AnimBP_C_ExecuteUbergraph_Ammo1_AnimBP_Params params;
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
