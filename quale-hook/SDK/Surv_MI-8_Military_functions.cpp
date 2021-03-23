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

// Function Surv_MI-8_Military.Surv_MI-8_Military_C.CheckGroundDistance
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_MI_8_Military_C::STATIC_CheckGroundDistance()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(107823);

	ASurv_MI_8_Military_C_CheckGroundDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_MI-8_Military.Surv_MI-8_Military_C.HelicopterLogic
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_MI_8_Military_C::STATIC_HelicopterLogic()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(107738);

	ASurv_MI_8_Military_C_HelicopterLogic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_MI-8_Military.Surv_MI-8_Military_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_MI_8_Military_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(107737);

	ASurv_MI_8_Military_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_MI-8_Military.Surv_MI-8_Military_C.InpActEvt_Fire_K2Node_InputActionEvent_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ASurv_MI_8_Military_C::STATIC_InpActEvt_Fire_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(107735);

	ASurv_MI_8_Military_C_InpActEvt_Fire_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_MI-8_Military.Surv_MI-8_Military_C.ClientApplyDamageToServer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_MI_8_Military_C::STATIC_ClientApplyDamageToServer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(107734);

	ASurv_MI_8_Military_C_ClientApplyDamageToServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_MI-8_Military.Surv_MI-8_Military_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_MI_8_Military_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(107733);

	ASurv_MI_8_Military_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_MI-8_Military.Surv_MI-8_Military_C.ServerFireHelicopter
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurv_MI_8_Military_C::STATIC_ServerFireHelicopter()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(107732);

	ASurv_MI_8_Military_C_ServerFireHelicopter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_MI-8_Military.Surv_MI-8_Military_C.ServerFireHelicopterAll
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector_NetQuantize     Location                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FVector_NetQuantize     Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void ASurv_MI_8_Military_C::STATIC_ServerFireHelicopterAll(const struct FVector_NetQuantize& Location, const struct FVector_NetQuantize& Rotation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(107730);

	ASurv_MI_8_Military_C_ServerFireHelicopterAll_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Surv_MI-8_Military.Surv_MI-8_Military_C.ExecuteUbergraph_Surv_MI-8_Military
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurv_MI_8_Military_C::STATIC_ExecuteUbergraph_Surv_MI_8_Military(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(107728);

	ASurv_MI_8_Military_C_ExecuteUbergraph_Surv_MI_8_Military_Params params;
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
