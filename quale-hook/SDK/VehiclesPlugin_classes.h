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
// Classes
//---------------------------------------------------------------------------

// Class VehiclesPlugin.TankVehicle
// 0x0000 (FullSize[0x03D8] - InheritedSize[0x03D8])
class ATankVehicle : public AWheeledVehicle
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1492);
		return ptr;
	}



};

// Class VehiclesPlugin.WheeledVehicle10W
// 0x0000 (FullSize[0x03D8] - InheritedSize[0x03D8])
class AWheeledVehicle10W : public AWheeledVehicle
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1493);
		return ptr;
	}



};

// Class VehiclesPlugin.WheeledVehicle12W
// 0x0000 (FullSize[0x03D8] - InheritedSize[0x03D8])
class AWheeledVehicle12W : public AWheeledVehicle
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1494);
		return ptr;
	}



};

// Class VehiclesPlugin.WheeledVehicle14W
// 0x0000 (FullSize[0x03D8] - InheritedSize[0x03D8])
class AWheeledVehicle14W : public AWheeledVehicle
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1495);
		return ptr;
	}



};

// Class VehiclesPlugin.WheeledVehicle16W
// 0x0000 (FullSize[0x03D8] - InheritedSize[0x03D8])
class AWheeledVehicle16W : public AWheeledVehicle
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1496);
		return ptr;
	}



};

// Class VehiclesPlugin.WheeledVehicle6W
// 0x0000 (FullSize[0x03D8] - InheritedSize[0x03D8])
class AWheeledVehicle6W : public AWheeledVehicle
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1497);
		return ptr;
	}



};

// Class VehiclesPlugin.WheeledVehicle8W
// 0x0000 (FullSize[0x03D8] - InheritedSize[0x03D8])
class AWheeledVehicle8W : public AWheeledVehicle
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1498);
		return ptr;
	}



};

// Class VehiclesPlugin.WheeledVehicleMovementComponent10W
// 0x0000 (FullSize[0x0438] - InheritedSize[0x0438])
class UWheeledVehicleMovementComponent10W : public UWheeledVehicleMovementComponent4W
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1501);
		return ptr;
	}



};

// Class VehiclesPlugin.WheeledVehicleMovementComponent12W
// 0x0000 (FullSize[0x0438] - InheritedSize[0x0438])
class UWheeledVehicleMovementComponent12W : public UWheeledVehicleMovementComponent4W
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1502);
		return ptr;
	}



};

// Class VehiclesPlugin.WheeledVehicleMovementComponent14W
// 0x0000 (FullSize[0x0438] - InheritedSize[0x0438])
class UWheeledVehicleMovementComponent14W : public UWheeledVehicleMovementComponent4W
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1503);
		return ptr;
	}



};

// Class VehiclesPlugin.WheeledVehicleMovementComponent16W
// 0x0000 (FullSize[0x0438] - InheritedSize[0x0438])
class UWheeledVehicleMovementComponent16W : public UWheeledVehicleMovementComponent4W
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1504);
		return ptr;
	}



};

// Class VehiclesPlugin.WheeledVehicleMovementComponent6W
// 0x0000 (FullSize[0x0438] - InheritedSize[0x0438])
class UWheeledVehicleMovementComponent6W : public UWheeledVehicleMovementComponent4W
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1505);
		return ptr;
	}



};

// Class VehiclesPlugin.WheeledVehicleMovementComponent8W
// 0x0000 (FullSize[0x0438] - InheritedSize[0x0438])
class UWheeledVehicleMovementComponent8W : public UWheeledVehicleMovementComponent4W
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1506);
		return ptr;
	}



};

// Class VehiclesPlugin.WheeledVehicleMovementComponentTank
// 0x0198 (FullSize[0x0470] - InheritedSize[0x02D8])
class UWheeledVehicleMovementComponentTank : public UWheeledVehicleMovementComponent
{
public:
	struct FTankEngineData                             EngineSetup;                                               // 0x02D8(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FTankTransmissionData                       TransmissionSetup;                                         // 0x0368(0x0030) (Edit, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          SteeringCurve;                                             // 0x0398(0x0078) (Edit, NativeAccessSpecifierPublic)
	float                                              AckermannAccuracy;                                         // 0x0410(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SteeringLeftInput;                                         // 0x0414(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SteeringRightInput;                                        // 0x0418(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BrakeLeftInput;                                            // 0x041C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BrakeRightInput;                                           // 0x0420(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RawSteeringLeftInput;                                      // 0x0424(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RawSteeringRightInput;                                     // 0x0428(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              bRawBrakeRightInput;                                       // 0x042C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              bRawBrakeLeftInput;                                        // 0x0430(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              IdleBrakeInputLeft;                                        // 0x0434(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              IdleBrakeInputRight;                                       // 0x0438(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVehicleInputRate                           SteeringLeftRate;                                          // 0x043C(0x0008) (Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FVehicleInputRate                           SteeringRightRate;                                         // 0x0444(0x0008) (Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FVehicleInputRate                           BrakeLeftRate;                                             // 0x044C(0x0008) (Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FVehicleInputRate                           BrakeRightRate;                                            // 0x0454(0x0008) (Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FReplicatedTankState                        RepTankState;                                              // 0x045C(0x0010) (Net, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	int                                                NumRollers;                                                // 0x046C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1507);
		return ptr;
	}



	void STATIC_SetSteeringRightInput(float SteeringRight);
	void STATIC_SetSteeringLeftInput(float SteeringLeft);
	void STATIC_SetBrakeRightInput(float bNewBrakeRight);
	void STATIC_SetBrakeLeftInput(float bNewBrakeLeft);
	void STATIC_ServerUpdateTankState(float InSteeringInputLeft, float InSteeringInputRight, float InBrakeInputLeft, float InBrakeInputRight);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
