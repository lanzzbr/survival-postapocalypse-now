#pragma once

// Name: ANUSGAME, Version: 4.18


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function VehiclesPlugin.WheeledVehicleMovementComponentTank.SetSteeringRightInput
struct UWheeledVehicleMovementComponentTank_SetSteeringRightInput_Params
{
	float                                              SteeringRight;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VehiclesPlugin.WheeledVehicleMovementComponentTank.SetSteeringLeftInput
struct UWheeledVehicleMovementComponentTank_SetSteeringLeftInput_Params
{
	float                                              SteeringLeft;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VehiclesPlugin.WheeledVehicleMovementComponentTank.SetBrakeRightInput
struct UWheeledVehicleMovementComponentTank_SetBrakeRightInput_Params
{
	float                                              bNewBrakeRight;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VehiclesPlugin.WheeledVehicleMovementComponentTank.SetBrakeLeftInput
struct UWheeledVehicleMovementComponentTank_SetBrakeLeftInput_Params
{
	float                                              bNewBrakeLeft;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VehiclesPlugin.WheeledVehicleMovementComponentTank.ServerUpdateTankState
struct UWheeledVehicleMovementComponentTank_ServerUpdateTankState_Params
{
	float                                              InSteeringInputLeft;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InSteeringInputRight;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InBrakeInputLeft;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InBrakeInputRight;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
