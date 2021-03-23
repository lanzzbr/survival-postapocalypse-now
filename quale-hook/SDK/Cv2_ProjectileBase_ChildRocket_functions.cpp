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

// Function Cv2_ProjectileBase_ChildRocket.Cv2_ProjectileBase_ChildRocket_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_ProjectileBase_ChildRocket_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(109071);

	ACv2_ProjectileBase_ChildRocket_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_ProjectileBase_ChildRocket.Cv2_ProjectileBase_ChildRocket_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_ProjectileBase_ChildRocket_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(109070);

	ACv2_ProjectileBase_ChildRocket_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_ProjectileBase_ChildRocket.Cv2_ProjectileBase_ChildRocket_C.EmitterSpawnSmoke
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_ProjectileBase_ChildRocket_C::STATIC_EmitterSpawnSmoke()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(109063);

	ACv2_ProjectileBase_ChildRocket_C_EmitterSpawnSmoke_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_ProjectileBase_ChildRocket.Cv2_ProjectileBase_ChildRocket_C.ExecuteUbergraph_Cv2_ProjectileBase_ChildRocket
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_ProjectileBase_ChildRocket_C::STATIC_ExecuteUbergraph_Cv2_ProjectileBase_ChildRocket(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(109064);

	ACv2_ProjectileBase_ChildRocket_C_ExecuteUbergraph_Cv2_ProjectileBase_ChildRocket_Params params;
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
