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

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bUseAuto                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::STATIC_SetUseAutoGears(bool bUseAuto)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27689);

	UWheeledVehicleMovementComponent_SetUseAutoGears_Params params;
	params.bUseAuto = bUseAuto;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Throttle                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::STATIC_SetThrottleInput(float Throttle)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27687);

	UWheeledVehicleMovementComponent_SetThrottleInput_Params params;
	params.Throttle = Throttle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            GearNum                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bImmediate                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::STATIC_SetTargetGear(int GearNum, bool bImmediate)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27684);

	UWheeledVehicleMovementComponent_SetTargetGear_Params params;
	params.GearNum = GearNum;
	params.bImmediate = bImmediate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Steering                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::STATIC_SetSteeringInput(float Steering)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27682);

	UWheeledVehicleMovementComponent_SetSteeringInput_Params params;
	params.Steering = Steering;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bNewHandbrake                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::STATIC_SetHandbrakeInput(bool bNewHandbrake)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27680);

	UWheeledVehicleMovementComponent_SetHandbrakeInput_Params params;
	params.bNewHandbrake = bNewHandbrake;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FNavAvoidanceMask       GroupMask                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::STATIC_SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27678);

	UWheeledVehicleMovementComponent_SetGroupsToIgnoreMask_Params params;
	params.GroupMask = GroupMask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            GroupFlags                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::STATIC_SetGroupsToIgnore(int GroupFlags)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27676);

	UWheeledVehicleMovementComponent_SetGroupsToIgnore_Params params;
	params.GroupFlags = GroupFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FNavAvoidanceMask       GroupMask                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::STATIC_SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27674);

	UWheeledVehicleMovementComponent_SetGroupsToAvoidMask_Params params;
	params.GroupMask = GroupMask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            GroupFlags                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::STATIC_SetGroupsToAvoid(int GroupFlags)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27672);

	UWheeledVehicleMovementComponent_SetGroupsToAvoid_Params params;
	params.GroupFlags = GroupFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bNewGearUp                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::STATIC_SetGearUp(bool bNewGearUp)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27670);

	UWheeledVehicleMovementComponent_SetGearUp_Params params;
	params.bNewGearUp = bNewGearUp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bNewGearDown                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::STATIC_SetGearDown(bool bNewGearDown)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27668);

	UWheeledVehicleMovementComponent_SetGearDown_Params params;
	params.bNewGearDown = bNewGearDown;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Brake                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::STATIC_SetBrakeInput(float Brake)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27666);

	UWheeledVehicleMovementComponent_SetBrakeInput_Params params;
	params.Brake = Brake;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FNavAvoidanceMask       GroupMask                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::STATIC_SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27664);

	UWheeledVehicleMovementComponent_SetAvoidanceGroupMask_Params params;
	params.GroupMask = GroupMask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            GroupFlags                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::STATIC_SetAvoidanceGroup(int GroupFlags)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27662);

	UWheeledVehicleMovementComponent_SetAvoidanceGroup_Params params;
	params.GroupFlags = GroupFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::STATIC_SetAvoidanceEnabled(bool bEnable)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27660);

	UWheeledVehicleMovementComponent_SetAvoidanceEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          InSteeringInput                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InThrottleInput                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InBrakeInput                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InHandbrakeInput               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            CurrentGear                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponent::STATIC_ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int CurrentGear)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27654);

	UWheeledVehicleMovementComponent_ServerUpdateState_Params params;
	params.InSteeringInput = InSteeringInput;
	params.InThrottleInput = InThrottleInput;
	params.InBrakeInput = InBrakeInput;
	params.InHandbrakeInput = InHandbrakeInput;
	params.CurrentGear = CurrentGear;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWheeledVehicleMovementComponent::GetUseAutoGears()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27652);

	UWheeledVehicleMovementComponent_GetUseAutoGears_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UWheeledVehicleMovementComponent::GetTargetGear()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27650);

	UWheeledVehicleMovementComponent_GetTargetGear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWheeledVehicleMovementComponent::GetForwardSpeed()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27648);

	UWheeledVehicleMovementComponent_GetForwardSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWheeledVehicleMovementComponent::GetEngineRotationSpeed()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27646);

	UWheeledVehicleMovementComponent_GetEngineRotationSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWheeledVehicleMovementComponent::GetEngineMaxRotationSpeed()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27644);

	UWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UWheeledVehicleMovementComponent::GetCurrentGear()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27642);

	UWheeledVehicleMovementComponent_GetCurrentGear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          SteerAngle                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USimpleWheeledVehicleMovementComponent::STATIC_SetSteerAngle(float SteerAngle, int WheelIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27788);

	USimpleWheeledVehicleMovementComponent_SetSteerAngle_Params params;
	params.SteerAngle = SteerAngle;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          DriveTorque                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USimpleWheeledVehicleMovementComponent::STATIC_SetDriveTorque(float DriveTorque, int WheelIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27785);

	USimpleWheeledVehicleMovementComponent_SetDriveTorque_Params params;
	params.DriveTorque = DriveTorque;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          BrakeTorque                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USimpleWheeledVehicleMovementComponent::STATIC_SetBrakeTorque(float BrakeTorque, int WheelIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27782);

	USimpleWheeledVehicleMovementComponent_SetBrakeTorque_Params params;
	params.BrakeTorque = BrakeTorque;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysXVehicles.VehicleAnimInstance.GetVehicle
// ()
// Parameters:
// class AWheeledVehicle*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AWheeledVehicle* UVehicleAnimInstance::GetVehicle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27794);

	UVehicleAnimInstance_GetVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PhysXVehicles.VehicleWheel.IsInAir
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVehicleWheel::IsInAir()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27803);

	UVehicleWheel_IsInAir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PhysXVehicles.VehicleWheel.GetSuspensionOffset
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UVehicleWheel::GetSuspensionOffset()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27801);

	UVehicleWheel_GetSuspensionOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PhysXVehicles.VehicleWheel.GetSteerAngle
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UVehicleWheel::GetSteerAngle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27799);

	UVehicleWheel_GetSteerAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PhysXVehicles.VehicleWheel.GetRotationAngle
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UVehicleWheel::GetRotationAngle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27797);

	UVehicleWheel_GetRotationAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
