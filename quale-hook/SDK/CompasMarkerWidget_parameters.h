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

// Function CompasMarkerWidget.CompasMarkerWidget_C.Construct
struct UCompasMarkerWidget_C_Construct_Params
{
};

// Function CompasMarkerWidget.CompasMarkerWidget_C.Update
struct UCompasMarkerWidget_C_Update_Params
{
};

// Function CompasMarkerWidget.CompasMarkerWidget_C.Destruct
struct UCompasMarkerWidget_C_Destruct_Params
{
};

// Function CompasMarkerWidget.CompasMarkerWidget_C.Draw
struct UCompasMarkerWidget_C_Draw_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Icon;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowDistance;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CompasMarkerWidget.CompasMarkerWidget_C.ExecuteUbergraph_CompasMarkerWidget
struct UCompasMarkerWidget_C_ExecuteUbergraph_CompasMarkerWidget_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
