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

// Function Creature_Wolf_AnimBP.Creature_Wolf_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Creature_Wolf_AnimBP_AnimGraphNode_BlendSpacePlayer_687A5EE04F1802652241CAAC7BC70031
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCreature_Wolf_AnimBP_C::STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_Creature_Wolf_AnimBP_AnimGraphNode_BlendSpacePlayer_687A5EE04F1802652241CAAC7BC70031()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(93338);

	UCreature_Wolf_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Creature_Wolf_AnimBP_AnimGraphNode_BlendSpacePlayer_687A5EE04F1802652241CAAC7BC70031_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Creature_Wolf_AnimBP.Creature_Wolf_AnimBP_C.BlueprintUpdateAnimation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCreature_Wolf_AnimBP_C::STATIC_BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(93332);

	UCreature_Wolf_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Creature_Wolf_AnimBP.Creature_Wolf_AnimBP_C.BlueprintInitializeAnimation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCreature_Wolf_AnimBP_C::STATIC_BlueprintInitializeAnimation()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(93331);

	UCreature_Wolf_AnimBP_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Creature_Wolf_AnimBP.Creature_Wolf_AnimBP_C.ExecuteUbergraph_Creature_Wolf_AnimBP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCreature_Wolf_AnimBP_C::STATIC_ExecuteUbergraph_Creature_Wolf_AnimBP(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(93328);

	UCreature_Wolf_AnimBP_C_ExecuteUbergraph_Creature_Wolf_AnimBP_Params params;
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
