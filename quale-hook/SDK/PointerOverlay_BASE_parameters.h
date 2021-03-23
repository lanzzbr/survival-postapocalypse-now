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

// Function PointerOverlay_BASE.PointerOverlay_BASE_C.CheckShkafPionters
struct UPointerOverlay_BASE_C_CheckShkafPionters_Params
{
};

// Function PointerOverlay_BASE.PointerOverlay_BASE_C.CheckIsActorExist
struct UPointerOverlay_BASE_C_CheckIsActorExist_Params
{
	class UObject*                                     Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Exist;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                IndexIfTrue;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PointerOverlay_BASE.PointerOverlay_BASE_C.DeleteByActor
struct UPointerOverlay_BASE_C_DeleteByActor_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PointerOverlay_BASE.PointerOverlay_BASE_C.DeleteByType
struct UPointerOverlay_BASE_C_DeleteByType_Params
{
	TEnumAsByte<GUI_Pointer_Type_EGUI_Pointer_Type>    POinterType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PointerOverlay_BASE.PointerOverlay_BASE_C.AddEnemyBase
struct UPointerOverlay_BASE_C_AddEnemyBase_Params
{
};

// Function PointerOverlay_BASE.PointerOverlay_BASE_C.Construct
struct UPointerOverlay_BASE_C_Construct_Params
{
};

// Function PointerOverlay_BASE.PointerOverlay_BASE_C.Tick
struct UPointerOverlay_BASE_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PointerOverlay_BASE.PointerOverlay_BASE_C.Add pointer
struct UPointerOverlay_BASE_C_Add_pointer_Params
{
	TEnumAsByte<GUI_Pointer_Type_EGUI_Pointer_Type>    ClassPointer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsUpdateMarker;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PointerOverlay_BASE.PointerOverlay_BASE_C.Destruct
struct UPointerOverlay_BASE_C_Destruct_Params
{
};

// Function PointerOverlay_BASE.PointerOverlay_BASE_C.ExecuteUbergraph_PointerOverlay_BASE
struct UPointerOverlay_BASE_C_ExecuteUbergraph_PointerOverlay_BASE_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
