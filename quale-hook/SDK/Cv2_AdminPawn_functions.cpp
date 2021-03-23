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

// Function Cv2_AdminPawn.Cv2_AdminPawn_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_AdminPawn_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56969);

	ACv2_AdminPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_AdminPawn.Cv2_AdminPawn_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_124
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_AdminPawn_C::STATIC_InpAxisEvt_Turn_K2Node_InputAxisEvent_124(float AxisValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56967);

	ACv2_AdminPawn_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_124_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_AdminPawn.Cv2_AdminPawn_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_116
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_AdminPawn_C::STATIC_InpAxisEvt_LookUp_K2Node_InputAxisEvent_116(float AxisValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56965);

	ACv2_AdminPawn_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_116_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_AdminPawn.Cv2_AdminPawn_C.ReceiveTick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_AdminPawn_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56963);

	ACv2_AdminPawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_AdminPawn.Cv2_AdminPawn_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_AdminPawn_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56962);

	ACv2_AdminPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_AdminPawn.Cv2_AdminPawn_C.ReceiveDestroyed
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_AdminPawn_C::STATIC_ReceiveDestroyed()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56961);

	ACv2_AdminPawn_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_AdminPawn.Cv2_AdminPawn_C.RightButton
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_AdminPawn_C::STATIC_RightButton()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56960);

	ACv2_AdminPawn_C_RightButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_AdminPawn.Cv2_AdminPawn_C.LeftButton
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_AdminPawn_C::STATIC_LeftButton()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56959);

	ACv2_AdminPawn_C_LeftButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_AdminPawn.Cv2_AdminPawn_C.CheckArrayPlayers
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_AdminPawn_C::STATIC_CheckArrayPlayers()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56958);

	ACv2_AdminPawn_C_CheckArrayPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_AdminPawn.Cv2_AdminPawn_C.SetActorLocationServer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector                 Loca                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_AdminPawn_C::STATIC_SetActorLocationServer(const struct FVector& Loca)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56956);

	ACv2_AdminPawn_C_SetActorLocationServer_Params params;
	params.Loca = Loca;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_AdminPawn.Cv2_AdminPawn_C.BanPlayerAP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_AdminPawn_C::STATIC_BanPlayerAP()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56955);

	ACv2_AdminPawn_C_BanPlayerAP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_AdminPawn.Cv2_AdminPawn_C.KickPlayerAP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_AdminPawn_C::STATIC_KickPlayerAP()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56954);

	ACv2_AdminPawn_C_KickPlayerAP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_AdminPawn.Cv2_AdminPawn_C.AddResources
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_AdminPawn_C::STATIC_AddResources()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56953);

	ACv2_AdminPawn_C_AddResources_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_AdminPawn.Cv2_AdminPawn_C.CLIENT_ShowPlayerInGUI
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 NetId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ACv2_AdminPawn_C::STATIC_CLIENT_ShowPlayerInGUI(const struct FString& NetId)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56951);

	ACv2_AdminPawn_C_CLIENT_ShowPlayerInGUI_Params params;
	params.NetId = NetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_AdminPawn.Cv2_AdminPawn_C.SERVER_ShowPlayer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 NetId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ACv2_AdminPawn_C::STATIC_SERVER_ShowPlayer(const struct FString& NetId)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56949);

	ACv2_AdminPawn_C_SERVER_ShowPlayer_Params params;
	params.NetId = NetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_AdminPawn.Cv2_AdminPawn_C.CLIENT_ShowAdminPanel
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_AdminPawn_C::STATIC_CLIENT_ShowAdminPanel()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56948);

	ACv2_AdminPawn_C_CLIENT_ShowAdminPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_AdminPawn.Cv2_AdminPawn_C.SetPawnLocationServer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_AdminPawn_C::STATIC_SetPawnLocationServer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56947);

	ACv2_AdminPawn_C_SetPawnLocationServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_AdminPawn.Cv2_AdminPawn_C.ExecuteUbergraph_Cv2_AdminPawn
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_AdminPawn_C::STATIC_ExecuteUbergraph_Cv2_AdminPawn(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56902);

	ACv2_AdminPawn_C_ExecuteUbergraph_Cv2_AdminPawn_Params params;
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
