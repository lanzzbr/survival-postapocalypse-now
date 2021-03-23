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

// Function GhoulAnimBP.GhoulAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GhoulAnimBP_AnimGraphNode_BlendSpacePlayer_0EBB5ADE4D767A198989B8926EE55147
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGhoulAnimBP_C::STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_GhoulAnimBP_AnimGraphNode_BlendSpacePlayer_0EBB5ADE4D767A198989B8926EE55147()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(91333);

	UGhoulAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_GhoulAnimBP_AnimGraphNode_BlendSpacePlayer_0EBB5ADE4D767A198989B8926EE55147_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GhoulAnimBP.GhoulAnimBP_C.BlueprintUpdateAnimation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGhoulAnimBP_C::STATIC_BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(91327);

	UGhoulAnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GhoulAnimBP.GhoulAnimBP_C.BlueprintInitializeAnimation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UGhoulAnimBP_C::STATIC_BlueprintInitializeAnimation()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(91326);

	UGhoulAnimBP_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GhoulAnimBP.GhoulAnimBP_C.ExecuteUbergraph_GhoulAnimBP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGhoulAnimBP_C::STATIC_ExecuteUbergraph_GhoulAnimBP(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(91323);

	UGhoulAnimBP_C_ExecuteUbergraph_GhoulAnimBP_Params params;
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
