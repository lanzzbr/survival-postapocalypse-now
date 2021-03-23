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

// Function PointerOverlay_BASE.PointerOverlay_BASE_C.CheckShkafPionters
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UPointerOverlay_BASE_C::STATIC_CheckShkafPionters()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58860);

	UPointerOverlay_BASE_C_CheckShkafPionters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PointerOverlay_BASE.PointerOverlay_BASE_C.CheckIsActorExist
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Exist                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            IndexIfTrue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPointerOverlay_BASE_C::STATIC_CheckIsActorExist(class UObject* Actor, bool* Exist, int* IndexIfTrue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58858);

	UPointerOverlay_BASE_C_CheckIsActorExist_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Exist != nullptr)
		*Exist = params.Exist;
	if (IndexIfTrue != nullptr)
		*IndexIfTrue = params.IndexIfTrue;

}


// Function PointerOverlay_BASE.PointerOverlay_BASE_C.DeleteByActor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPointerOverlay_BASE_C::STATIC_DeleteByActor(class AActor* Actor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58856);

	UPointerOverlay_BASE_C_DeleteByActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PointerOverlay_BASE.PointerOverlay_BASE_C.DeleteByType
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<GUI_Pointer_Type_EGUI_Pointer_Type> POinterType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPointerOverlay_BASE_C::STATIC_DeleteByType(TEnumAsByte<GUI_Pointer_Type_EGUI_Pointer_Type> POinterType)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58854);

	UPointerOverlay_BASE_C_DeleteByType_Params params;
	params.POinterType = POinterType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PointerOverlay_BASE.PointerOverlay_BASE_C.AddEnemyBase
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UPointerOverlay_BASE_C::STATIC_AddEnemyBase()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58850);

	UPointerOverlay_BASE_C_AddEnemyBase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PointerOverlay_BASE.PointerOverlay_BASE_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UPointerOverlay_BASE_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58849);

	UPointerOverlay_BASE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PointerOverlay_BASE.PointerOverlay_BASE_C.Tick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPointerOverlay_BASE_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58847);

	UPointerOverlay_BASE_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PointerOverlay_BASE.PointerOverlay_BASE_C.Add pointer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<GUI_Pointer_Type_EGUI_Pointer_Type> ClassPointer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsUpdateMarker                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPointerOverlay_BASE_C::STATIC_Add_pointer(TEnumAsByte<GUI_Pointer_Type_EGUI_Pointer_Type> ClassPointer, class AActor* Actor, const struct FVector& Location, bool IsUpdateMarker)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58845);

	UPointerOverlay_BASE_C_Add_pointer_Params params;
	params.ClassPointer = ClassPointer;
	params.Actor = Actor;
	params.Location = Location;
	params.IsUpdateMarker = IsUpdateMarker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PointerOverlay_BASE.PointerOverlay_BASE_C.Destruct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UPointerOverlay_BASE_C::STATIC_Destruct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58844);

	UPointerOverlay_BASE_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PointerOverlay_BASE.PointerOverlay_BASE_C.ExecuteUbergraph_PointerOverlay_BASE
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPointerOverlay_BASE_C::STATIC_ExecuteUbergraph_PointerOverlay_BASE(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58842);

	UPointerOverlay_BASE_C_ExecuteUbergraph_PointerOverlay_BASE_Params params;
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
