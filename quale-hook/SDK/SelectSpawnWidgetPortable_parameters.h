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

// Function SelectSpawnWidgetPortable.SelectSpawnWidgetPortable_C.CheckOfficers
struct USelectSpawnWidgetPortable_C_CheckOfficers_Params
{
};

// Function SelectSpawnWidgetPortable.SelectSpawnWidgetPortable_C.SelectCurrent
struct USelectSpawnWidgetPortable_C_SelectCurrent_Params
{
};

// Function SelectSpawnWidgetPortable.SelectSpawnWidgetPortable_C.GetPlayerSide
struct USelectSpawnWidgetPortable_C_GetPlayerSide_Params
{
	TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>          ProxySide;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SelectSpawnWidgetPortable.SelectSpawnWidgetPortable_C.CheckStrings
struct USelectSpawnWidgetPortable_C_CheckStrings_Params
{
};

// Function SelectSpawnWidgetPortable.SelectSpawnWidgetPortable_C.GetString
struct USelectSpawnWidgetPortable_C_GetString_Params
{
	class UObject*                                     Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SelectSpawnWidgetPortable.SelectSpawnWidgetPortable_C.Construct
struct USelectSpawnWidgetPortable_C_Construct_Params
{
};

// Function SelectSpawnWidgetPortable.SelectSpawnWidgetPortable_C.Tick
struct USelectSpawnWidgetPortable_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SelectSpawnWidgetPortable.SelectSpawnWidgetPortable_C.SelectString
struct USelectSpawnWidgetPortable_C_SelectString_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SelectSpawnWidgetPortable.SelectSpawnWidgetPortable_C.HoverString
struct USelectSpawnWidgetPortable_C_HoverString_Params
{
	class UObject*                                     Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SelectSpawnWidgetPortable.SelectSpawnWidgetPortable_C.UnhoverString
struct USelectSpawnWidgetPortable_C_UnhoverString_Params
{
	class UObject*                                     Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SelectSpawnWidgetPortable.SelectSpawnWidgetPortable_C.Destruct
struct USelectSpawnWidgetPortable_C_Destruct_Params
{
};

// Function SelectSpawnWidgetPortable.SelectSpawnWidgetPortable_C.SpawnString
struct USelectSpawnWidgetPortable_C_SpawnString_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SelectSpawnWidgetPortable.SelectSpawnWidgetPortable_C.ExecuteUbergraph_SelectSpawnWidgetPortable
struct USelectSpawnWidgetPortable_C_ExecuteUbergraph_SelectSpawnWidgetPortable_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
