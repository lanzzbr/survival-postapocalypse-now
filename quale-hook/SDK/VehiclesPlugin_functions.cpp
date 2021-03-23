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

// Function VehiclesPlugin.WheeledVehicleMovementComponentTank.SetSteeringRightInput
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          SteeringRight                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponentTank::STATIC_SetSteeringRightInput(float SteeringRight)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27760);

	UWheeledVehicleMovementComponentTank_SetSteeringRightInput_Params params;
	params.SteeringRight = SteeringRight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VehiclesPlugin.WheeledVehicleMovementComponentTank.SetSteeringLeftInput
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          SteeringLeft                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponentTank::STATIC_SetSteeringLeftInput(float SteeringLeft)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27758);

	UWheeledVehicleMovementComponentTank_SetSteeringLeftInput_Params params;
	params.SteeringLeft = SteeringLeft;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VehiclesPlugin.WheeledVehicleMovementComponentTank.SetBrakeRightInput
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          bNewBrakeRight                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponentTank::STATIC_SetBrakeRightInput(float bNewBrakeRight)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27756);

	UWheeledVehicleMovementComponentTank_SetBrakeRightInput_Params params;
	params.bNewBrakeRight = bNewBrakeRight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VehiclesPlugin.WheeledVehicleMovementComponentTank.SetBrakeLeftInput
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          bNewBrakeLeft                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponentTank::STATIC_SetBrakeLeftInput(float bNewBrakeLeft)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27754);

	UWheeledVehicleMovementComponentTank_SetBrakeLeftInput_Params params;
	params.bNewBrakeLeft = bNewBrakeLeft;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VehiclesPlugin.WheeledVehicleMovementComponentTank.ServerUpdateTankState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          InSteeringInputLeft            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InSteeringInputRight           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InBrakeInputLeft               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InBrakeInputRight              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWheeledVehicleMovementComponentTank::STATIC_ServerUpdateTankState(float InSteeringInputLeft, float InSteeringInputRight, float InBrakeInputLeft, float InBrakeInputRight)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27749);

	UWheeledVehicleMovementComponentTank_ServerUpdateTankState_Params params;
	params.InSteeringInputLeft = InSteeringInputLeft;
	params.InSteeringInputRight = InSteeringInputRight;
	params.InBrakeInputLeft = InBrakeInputLeft;
	params.InBrakeInputRight = InBrakeInputRight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
