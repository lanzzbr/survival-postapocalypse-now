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

// Function Z_Tooltip_Root.Z_Tooltip_Root_C.RootIni
struct UZ_Tooltip_Root_C_RootIni_Params
{
	class UImage*                                      Root_Icon;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  Root_NameText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  Root_DescriptionText;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_Tooltip_Root.Z_Tooltip_Root_C.Root_DrawFromZLoot
struct UZ_Tooltip_Root_C_Root_DrawFromZLoot_Params
{
	struct FName                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_Tooltip_Root.Z_Tooltip_Root_C.Root_Hide
struct UZ_Tooltip_Root_C_Root_Hide_Params
{
	bool                                               Hide;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Z_Tooltip_Root.Z_Tooltip_Root_C.Root_DrawFromCraft
struct UZ_Tooltip_Root_C_Root_DrawFromCraft_Params
{
	struct FName                                       Root_Name;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_Tooltip_Root.Z_Tooltip_Root_C.Root_SetMass
struct UZ_Tooltip_Root_C_Root_SetMass_Params
{
	float                                              Mass;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Z_Tooltip_Root.Z_Tooltip_Root_C.ExecuteUbergraph_Z_Tooltip_Root
struct UZ_Tooltip_Root_C_ExecuteUbergraph_Z_Tooltip_Root_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
