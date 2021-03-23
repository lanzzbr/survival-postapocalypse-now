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

// Function SelectSpawnWidgetPortable.SelectSpawnWidgetPortable_C.CheckOfficers
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USelectSpawnWidgetPortable_C::STATIC_CheckOfficers()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(57005);

	USelectSpawnWidgetPortable_C_CheckOfficers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectSpawnWidgetPortable.SelectSpawnWidgetPortable_C.SelectCurrent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USelectSpawnWidgetPortable_C::STATIC_SelectCurrent()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(57003);

	USelectSpawnWidgetPortable_C_SelectCurrent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectSpawnWidgetPortable.SelectSpawnWidgetPortable_C.GetPlayerSide
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum> ProxySide                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USelectSpawnWidgetPortable_C::STATIC_GetPlayerSide(TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>* ProxySide)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(57001);

	USelectSpawnWidgetPortable_C_GetPlayerSide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ProxySide != nullptr)
		*ProxySide = params.ProxySide;

}


// Function SelectSpawnWidgetPortable.SelectSpawnWidgetPortable_C.CheckStrings
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USelectSpawnWidgetPortable_C::STATIC_CheckStrings()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56989);

	USelectSpawnWidgetPortable_C_CheckStrings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectSpawnWidgetPortable.SelectSpawnWidgetPortable_C.GetString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USelectSpawnWidgetPortable_C::STATIC_GetString(class UObject* Actor, int* Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56987);

	USelectSpawnWidgetPortable_C_GetString_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;

}


// Function SelectSpawnWidgetPortable.SelectSpawnWidgetPortable_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USelectSpawnWidgetPortable_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56986);

	USelectSpawnWidgetPortable_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectSpawnWidgetPortable.SelectSpawnWidgetPortable_C.Tick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USelectSpawnWidgetPortable_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56984);

	USelectSpawnWidgetPortable_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectSpawnWidgetPortable.SelectSpawnWidgetPortable_C.SelectString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USelectSpawnWidgetPortable_C::STATIC_SelectString(class AActor* Actor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56982);

	USelectSpawnWidgetPortable_C_SelectString_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectSpawnWidgetPortable.SelectSpawnWidgetPortable_C.HoverString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USelectSpawnWidgetPortable_C::STATIC_HoverString(class UObject* Actor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56980);

	USelectSpawnWidgetPortable_C_HoverString_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectSpawnWidgetPortable.SelectSpawnWidgetPortable_C.UnhoverString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USelectSpawnWidgetPortable_C::STATIC_UnhoverString(class UObject* Actor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56978);

	USelectSpawnWidgetPortable_C_UnhoverString_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectSpawnWidgetPortable.SelectSpawnWidgetPortable_C.Destruct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void USelectSpawnWidgetPortable_C::STATIC_Destruct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56977);

	USelectSpawnWidgetPortable_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectSpawnWidgetPortable.SelectSpawnWidgetPortable_C.SpawnString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USelectSpawnWidgetPortable_C::STATIC_SpawnString(class AActor* Actor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56975);

	USelectSpawnWidgetPortable_C_SpawnString_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SelectSpawnWidgetPortable.SelectSpawnWidgetPortable_C.ExecuteUbergraph_SelectSpawnWidgetPortable
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USelectSpawnWidgetPortable_C::STATIC_ExecuteUbergraph_SelectSpawnWidgetPortable(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(56973);

	USelectSpawnWidgetPortable_C_ExecuteUbergraph_SelectSpawnWidgetPortable_Params params;
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
