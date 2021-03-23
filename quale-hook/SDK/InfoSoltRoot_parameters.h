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

// Function InfoSoltRoot.InfoSoltRoot_C.SetPreviosIco
struct UInfoSoltRoot_C_SetPreviosIco_Params
{
	struct FName                                       RowName;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InfoSoltRoot.InfoSoltRoot_C.SetElementVisibility
struct UInfoSoltRoot_C_SetElementVisibility_Params
{
	bool                                               Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Icon;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InfoSoltRoot.InfoSoltRoot_C.ClearSlotRoot
struct UInfoSoltRoot_C_ClearSlotRoot_Params
{
};

// Function InfoSoltRoot.InfoSoltRoot_C.DrawSlotsRoot
struct UInfoSoltRoot_C_DrawSlotsRoot_Params
{
	int                                                LootIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InfoSoltRoot.InfoSoltRoot_C.SetIcon
struct UInfoSoltRoot_C_SetIcon_Params
{
	class UTexture2D*                                  Icon;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InfoSoltRoot.InfoSoltRoot_C.Construct
struct UInfoSoltRoot_C_Construct_Params
{
};

// Function InfoSoltRoot.InfoSoltRoot_C.ExecuteUbergraph_InfoSoltRoot
struct UInfoSoltRoot_C_ExecuteUbergraph_InfoSoltRoot_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
