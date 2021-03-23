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

// Function CrossHair.CrossHair_C.SetPointTexture
struct UCrossHair_C_SetPointTexture_Params
{
	class UTexture2D*                                  textur;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CrossHair.CrossHair_C.HideAllTypes
struct UCrossHair_C_HideAllTypes_Params
{
};

// Function CrossHair.CrossHair_C.SET_TYPE
struct UCrossHair_C_SET_TYPE_Params
{
	TEnumAsByte<CrosshairTypes_ECrosshairTypes>        CrossHairType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CrossHair.CrossHair_C.SetSpace
struct UCrossHair_C_SetSpace_Params
{
	float                                              SpaceSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CrossHair.CrossHair_C.ShowMainCrosshairs
struct UCrossHair_C_ShowMainCrosshairs_Params
{
};

// Function CrossHair.CrossHair_C.HideMainCrosshairs
struct UCrossHair_C_HideMainCrosshairs_Params
{
};

// Function CrossHair.CrossHair_C.ShowHitToEnemy
struct UCrossHair_C_ShowHitToEnemy_Params
{
};

// Function CrossHair.CrossHair_C.Construct
struct UCrossHair_C_Construct_Params
{
};

// Function CrossHair.CrossHair_C.Tick
struct UCrossHair_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CrossHair.CrossHair_C.ExecuteUbergraph_CrossHair
struct UCrossHair_C_ExecuteUbergraph_CrossHair_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
