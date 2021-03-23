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

// Function Cv2_ActionComponent.Cv2_ActionComponent_C.CheckStateNPCs
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_ActionComponent_C::STATIC_CheckStateNPCs()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(68686);

	UCv2_ActionComponent_C_CheckStateNPCs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_ActionComponent.Cv2_ActionComponent_C.DropMeatToCreatures
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_ActionComponent_C::STATIC_DropMeatToCreatures()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(68526);

	UCv2_ActionComponent_C_DropMeatToCreatures_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_ActionComponent.Cv2_ActionComponent_C.Action
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class ACv2_LootBP_C*           LootObj                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_ActionComponent_C::STATIC_Action(class ACv2_LootBP_C* LootObj)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(68518);

	UCv2_ActionComponent_C_Action_Params params;
	params.LootObj = LootObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_ActionComponent.Cv2_ActionComponent_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UCv2_ActionComponent_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(68517);

	UCv2_ActionComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_ActionComponent.Cv2_ActionComponent_C.ExecuteUbergraph_Cv2_ActionComponent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv2_ActionComponent_C::STATIC_ExecuteUbergraph_Cv2_ActionComponent(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(68515);

	UCv2_ActionComponent_C_ExecuteUbergraph_Cv2_ActionComponent_Params params;
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
