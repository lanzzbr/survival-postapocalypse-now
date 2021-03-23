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

// Function LocationServicesBPLibrary.LocationServices.StopLocationServices
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULocationServices::StopLocationServices()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29435);

	ULocationServices_StopLocationServices_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LocationServicesBPLibrary.LocationServices.StartLocationServices
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULocationServices::StartLocationServices()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29433);

	ULocationServices_StartLocationServices_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable
// (Final)
// Parameters:
// LocationServicesBPLibrary_ELocationAccuracy Accuracy                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULocationServices::IsLocationAccuracyAvailable(LocationServicesBPLibrary_ELocationAccuracy Accuracy)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29429);

	ULocationServices_IsLocationAccuracyAvailable_Params params;
	params.Accuracy = Accuracy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LocationServicesBPLibrary.LocationServices.InitLocationServices
// (BlueprintAuthorityOnly, BlueprintCosmetic)
// Parameters:
// LocationServicesBPLibrary_ELocationAccuracy Accuracy                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          UpdateFrequency                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MinDistanceFilter              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULocationServices::InitLocationServices(LocationServicesBPLibrary_ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29423);

	ULocationServices_InitLocationServices_Params params;
	params.Accuracy = Accuracy;
	params.UpdateFrequency = UpdateFrequency;
	params.MinDistanceFilter = MinDistanceFilter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl
// ()
// Parameters:
// class ULocationServicesImpl*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULocationServicesImpl* ULocationServices::GetLocationServicesImpl()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29421);

	ULocationServices_GetLocationServicesImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LocationServicesBPLibrary.LocationServices.GetLastKnownLocation
// ()
// Parameters:
// struct FLocationServicesData   ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FLocationServicesData ULocationServices::GetLastKnownLocation()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29419);

	ULocationServices_GetLastKnownLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULocationServices::AreLocationServicesEnabled()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29417);

	ULocationServices_AreLocationServicesEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
