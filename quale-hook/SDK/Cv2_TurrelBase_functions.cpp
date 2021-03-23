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

// Function Cv2_TurrelBase.Cv2_TurrelBase_C.SetCameraFollowShell
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_TurrelBase_C::STATIC_SetCameraFollowShell()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96184);

	ACv2_TurrelBase_C_SetCameraFollowShell_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.FireGunClient
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_TurrelBase_C::STATIC_FireGunClient()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96160);

	ACv2_TurrelBase_C_FireGunClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.SpawnBullet
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_TurrelBase_C::STATIC_SpawnBullet(float Pitch, float Yaw)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96072);

	ACv2_TurrelBase_C_SpawnBullet_Params params;
	params.Pitch = Pitch;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.OnRep_isDead
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_TurrelBase_C::STATIC_OnRep_isDead()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96069);

	ACv2_TurrelBase_C_OnRep_isDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.OnRep_Crews
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_TurrelBase_C::STATIC_OnRep_Crews()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96068);

	ACv2_TurrelBase_C_OnRep_Crews_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_TurrelBase_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96067);

	ACv2_TurrelBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.InpActEvt_Use_K2Node_InputActionEvent_7
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_TurrelBase_C::STATIC_InpActEvt_Use_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96065);

	ACv2_TurrelBase_C_InpActEvt_Use_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.InpActEvt_Open_Vehicle_K2Node_InputActionEvent_6
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_TurrelBase_C::STATIC_InpActEvt_Open_Vehicle_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96063);

	ACv2_TurrelBase_C_InpActEvt_Open_Vehicle_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.InpActEvt_Aim_K2Node_InputActionEvent_5
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_TurrelBase_C::STATIC_InpActEvt_Aim_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96061);

	ACv2_TurrelBase_C_InpActEvt_Aim_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.InpActEvt_Fire_K2Node_InputActionEvent_4
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_TurrelBase_C::STATIC_InpActEvt_Fire_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96059);

	ACv2_TurrelBase_C_InpActEvt_Fire_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.InpActEvt_Fire_K2Node_InputActionEvent_3
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_TurrelBase_C::STATIC_InpActEvt_Fire_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96057);

	ACv2_TurrelBase_C_InpActEvt_Fire_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_2
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_TurrelBase_C::STATIC_InpActEvt_LeftShift_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96055);

	ACv2_TurrelBase_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_TurrelBase_C::STATIC_InpActEvt_LeftShift_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96053);

	ACv2_TurrelBase_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.InpActEvt_VoiceChat_K2Node_InputActionEvent_2
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_TurrelBase_C::STATIC_InpActEvt_VoiceChat_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96051);

	ACv2_TurrelBase_C_InpActEvt_VoiceChat_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.InpActEvt_VoiceChat_K2Node_InputActionEvent_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACv2_TurrelBase_C::STATIC_InpActEvt_VoiceChat_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96049);

	ACv2_TurrelBase_C_InpActEvt_VoiceChat_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.ReceiveTick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_TurrelBase_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96047);

	ACv2_TurrelBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.ServerSetTurret
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          ServTurretBase                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ServTurretGun                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ServGunRot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_TurrelBase_C::STATIC_ServerSetTurret(float ServTurretBase, float ServTurretGun, float ServGunRot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96045);

	ACv2_TurrelBase_C_ServerSetTurret_Params params;
	params.ServTurretBase = ServTurretBase;
	params.ServTurretGun = ServTurretGun;
	params.ServGunRot = ServGunRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_TurrelBase_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96044);

	ACv2_TurrelBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.FireServer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Fire                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACv2_TurrelBase_C::STATIC_FireServer(bool Fire)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96035);

	ACv2_TurrelBase_C_FireServer_Params params;
	params.Fire = Fire;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.ExitVehicleServer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_TurrelBase_C::STATIC_ExitVehicleServer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96034);

	ACv2_TurrelBase_C_ExitVehicleServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_116
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_TurrelBase_C::STATIC_InpAxisEvt_LookUp_K2Node_InputAxisEvent_116(float AxisValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96032);

	ACv2_TurrelBase_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_116_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_124
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_TurrelBase_C::STATIC_InpAxisEvt_Turn_K2Node_InputAxisEvent_124(float AxisValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(96030);

	ACv2_TurrelBase_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_124_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.UpdateLootArray
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FS_InventorySlot> LootSlotsArray                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ACv2_TurrelBase_C::STATIC_UpdateLootArray(TArray<struct FS_InventorySlot>* LootSlotsArray)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95967);

	ACv2_TurrelBase_C_UpdateLootArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LootSlotsArray != nullptr)
		*LootSlotsArray = params.LootSlotsArray;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.ReceiveAnyDamage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_TurrelBase_C::STATIC_ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95965);

	ACv2_TurrelBase_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.MulticastFire
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_TurrelBase_C::STATIC_MulticastFire(float Pitch, float Yaw)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95963);

	ACv2_TurrelBase_C_MulticastFire_Params params;
	params.Pitch = Pitch;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.ServerFire
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_TurrelBase_C::STATIC_ServerFire(float Pitch, float Yaw)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95961);

	ACv2_TurrelBase_C_ServerFire_Params params;
	params.Pitch = Pitch;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.OpenCarServer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsOpen                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACv2_TurrelBase_C::STATIC_OpenCarServer(bool IsOpen)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95959);

	ACv2_TurrelBase_C_OpenCarServer_Params params;
	params.IsOpen = IsOpen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_TurrelBase_C::STATIC_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(float AxisValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95957);

	ACv2_TurrelBase_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_6
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_TurrelBase_C::STATIC_InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_6(float AxisValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95955);

	ACv2_TurrelBase_C_InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_6_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.ClientFire
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_TurrelBase_C::STATIC_ClientFire(float Pitch, float Yaw)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95953);

	ACv2_TurrelBase_C_ClientFire_Params params;
	params.Pitch = Pitch;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.CheckReplication
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_TurrelBase_C::STATIC_CheckReplication()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95952);

	ACv2_TurrelBase_C_CheckReplication_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.BndEvt__VoiceChat_K2Node_ComponentBoundEvent_0_VoiceDataAvailableSignature__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ACv2_TurrelBase_C::STATIC_BndEvt__VoiceChat_K2Node_ComponentBoundEvent_0_VoiceDataAvailableSignature__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95951);

	ACv2_TurrelBase_C_BndEvt__VoiceChat_K2Node_ComponentBoundEvent_0_VoiceDataAvailableSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.ServerProcessVoiceData
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<unsigned char>          Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ACv2_TurrelBase_C::STATIC_ServerProcessVoiceData(TArray<unsigned char> Data)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95948);

	ACv2_TurrelBase_C_ServerProcessVoiceData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.ClientReceiveVoiceData
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<unsigned char>          Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class APawn*                   FromPlayer                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_TurrelBase_C::STATIC_ClientReceiveVoiceData(TArray<unsigned char> Data, class APawn* FromPlayer)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95931);

	ACv2_TurrelBase_C_ClientReceiveVoiceData_Params params;
	params.Data = Data;
	params.FromPlayer = FromPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.ServerSetRotateWheels
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv3_TurrelRotateWheelEnum_ECv3_TurrelRotateWheelEnum> RotateWheels                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_TurrelBase_C::STATIC_ServerSetRotateWheels(TEnumAsByte<Cv3_TurrelRotateWheelEnum_ECv3_TurrelRotateWheelEnum> RotateWheels)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95929);

	ACv2_TurrelBase_C_ServerSetRotateWheels_Params params;
	params.RotateWheels = RotateWheels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv2_TurrelBase.Cv2_TurrelBase_C.ExecuteUbergraph_Cv2_TurrelBase
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACv2_TurrelBase_C::STATIC_ExecuteUbergraph_Cv2_TurrelBase(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(95927);

	ACv2_TurrelBase_C_ExecuteUbergraph_Cv2_TurrelBase_Params params;
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
