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

// Function VampireAnimBP.VampireAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VampireAnimBP_AnimGraphNode_BlendSpacePlayer_3C24971844657B6BF5A84F8F91E3FF25
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UVampireAnimBP_C::STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_VampireAnimBP_AnimGraphNode_BlendSpacePlayer_3C24971844657B6BF5A84F8F91E3FF25()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(91416);

	UVampireAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_VampireAnimBP_AnimGraphNode_BlendSpacePlayer_3C24971844657B6BF5A84F8F91E3FF25_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VampireAnimBP.VampireAnimBP_C.BlueprintUpdateAnimation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVampireAnimBP_C::STATIC_BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(91410);

	UVampireAnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VampireAnimBP.VampireAnimBP_C.BlueprintInitializeAnimation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UVampireAnimBP_C::STATIC_BlueprintInitializeAnimation()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(91409);

	UVampireAnimBP_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VampireAnimBP.VampireAnimBP_C.ExecuteUbergraph_VampireAnimBP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVampireAnimBP_C::STATIC_ExecuteUbergraph_VampireAnimBP(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(91406);

	UVampireAnimBP_C_ExecuteUbergraph_VampireAnimBP_Params params;
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
