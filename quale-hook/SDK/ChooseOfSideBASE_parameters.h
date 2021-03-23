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

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.CheckCharactersBlockString
struct UChooseOfSideBASE_C_CheckCharactersBlockString_Params
{
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.Get_AxisMaxPlayers_Text_1
struct UChooseOfSideBASE_C_Get_AxisMaxPlayers_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.SelectCharacterString
struct UChooseOfSideBASE_C_SelectCharacterString_Params
{
	struct FCV2_CharacterTypeStructure                 CharacterStr;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.DrawCharacterList
struct UChooseOfSideBASE_C_DrawCharacterList_Params
{
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.GetText_3
struct UChooseOfSideBASE_C_GetText_3_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.IsNotTimeBlock
struct UChooseOfSideBASE_C_IsNotTimeBlock_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.GetCurrenNationDATA
struct UChooseOfSideBASE_C_GetCurrenNationDATA_Params
{
	TEnumAsByte<Cv2_Nations_ECv2_Nations>              Nation;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCV2_CharacterTypeStructure                 CharString;                                                // (Parm, OutParm, HasGetValueTypeHash)
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FCV2_CharacterTypeStructure>         NationArray;                                               // (Parm, OutParm, ZeroConstructor)
	int                                                CurrentNationIndex;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.NationToSide
struct UChooseOfSideBASE_C_NationToSide_Params
{
	TEnumAsByte<Cv2_Nations_ECv2_Nations>              Nation;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>          Side;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.SelectNation
struct UChooseOfSideBASE_C_SelectNation_Params
{
	TEnumAsByte<Cv2_Nations_ECv2_Nations>              Nation;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.GetNationArray_AndSort
struct UChooseOfSideBASE_C_GetNationArray_AndSort_Params
{
	TEnumAsByte<Cv2_Nations_ECv2_Nations>              Nations;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCV2_CharacterTypeStructure>         NationArray;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.GetVisibility_1
struct UChooseOfSideBASE_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.UnselectFlags
struct UChooseOfSideBASE_C_UnselectFlags_Params
{
	TEnumAsByte<Cv2_Nations_ECv2_Nations>              SelectNow;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.Lock
struct UChooseOfSideBASE_C_Lock_Params
{
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.SetMainFon
struct UChooseOfSideBASE_C_SetMainFon_Params
{
	TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>          Side;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.AutomaticSelectTeam
struct UChooseOfSideBASE_C_AutomaticSelectTeam_Params
{
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.CalculateCountPlayers
struct UChooseOfSideBASE_C_CalculateCountPlayers_Params
{
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.GetText_2
struct UChooseOfSideBASE_C_GetText_2_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.GetText_1
struct UChooseOfSideBASE_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.GetCharacterStrFomArray
struct UChooseOfSideBASE_C_GetCharacterStrFomArray_Params
{
	bool                                               Next;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FCV2_CharacterTypeStructure                 CharacterStruct;                                           // (Parm, OutParm, HasGetValueTypeHash)
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.SelectTeamAnimation
struct UChooseOfSideBASE_C_SelectTeamAnimation_Params
{
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.ShowButtons
struct UChooseOfSideBASE_C_ShowButtons_Params
{
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.Hidebuttons
struct UChooseOfSideBASE_C_Hidebuttons_Params
{
	TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>          Side;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.Get_ClassName_Text_1
struct UChooseOfSideBASE_C_Get_ClassName_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.Get_AxisText_ColorAndOpacity_1
struct UChooseOfSideBASE_C_Get_AxisText_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.Get_AlliesText_ColorAndOpacity_1
struct UChooseOfSideBASE_C_Get_AlliesText_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.Get_StartButton_bIsEnabled_1
struct UChooseOfSideBASE_C_Get_StartButton_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.Refreash
struct UChooseOfSideBASE_C_Refreash_Params
{
	struct FCV2_CharacterTypeStructure                 CharStr;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.SetWeaponIcoAndText
struct UChooseOfSideBASE_C_SetWeaponIcoAndText_Params
{
	TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum>      Weapon;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      ImageWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  NameWidget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 WeaponMesh;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.Construct
struct UChooseOfSideBASE_C_Construct_Params
{
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__Button_92_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature
struct UChooseOfSideBASE_C_BndEvt__Button_92_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UChooseOfSideBASE_C_BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__StartButton_K2Node_ComponentBoundEvent_155_OnButtonHoverEvent__DelegateSignature
struct UChooseOfSideBASE_C_BndEvt__StartButton_K2Node_ComponentBoundEvent_155_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__StartButton_K2Node_ComponentBoundEvent_303_OnButtonClickedEvent__DelegateSignature
struct UChooseOfSideBASE_C_BndEvt__StartButton_K2Node_ComponentBoundEvent_303_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__Button_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UChooseOfSideBASE_C_BndEvt__Button_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__ALLIES_Button_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature
struct UChooseOfSideBASE_C_BndEvt__ALLIES_Button_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.Select_AXIS
struct UChooseOfSideBASE_C_Select_AXIS_Params
{
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.SelectALLIES
struct UChooseOfSideBASE_C_SelectALLIES_Params
{
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__StoreButton_K2Node_ComponentBoundEvent_222_OnButtonHoverEvent__DelegateSignature
struct UChooseOfSideBASE_C_BndEvt__StoreButton_K2Node_ComponentBoundEvent_222_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__StoreButton_K2Node_ComponentBoundEvent_235_OnButtonHoverEvent__DelegateSignature
struct UChooseOfSideBASE_C_BndEvt__StoreButton_K2Node_ComponentBoundEvent_235_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__StoreButton_K2Node_ComponentBoundEvent_307_OnButtonClickedEvent__DelegateSignature
struct UChooseOfSideBASE_C_BndEvt__StoreButton_K2Node_ComponentBoundEvent_307_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__FlagSlot_C_2_K2Node_ComponentBoundEvent_240_Click__DelegateSignature
struct UChooseOfSideBASE_C_BndEvt__FlagSlot_C_2_K2Node_ComponentBoundEvent_240_Click__DelegateSignature_Params
{
	TEnumAsByte<Cv2_Nations_ECv2_Nations>              Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__USA_K2Node_ComponentBoundEvent_17_Click__DelegateSignature
struct UChooseOfSideBASE_C_BndEvt__USA_K2Node_ComponentBoundEvent_17_Click__DelegateSignature_Params
{
	TEnumAsByte<Cv2_Nations_ECv2_Nations>              Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__FlagSlot_K2Node_ComponentBoundEvent_603_Click__DelegateSignature
struct UChooseOfSideBASE_C_BndEvt__FlagSlot_K2Node_ComponentBoundEvent_603_Click__DelegateSignature_Params
{
	TEnumAsByte<Cv2_Nations_ECv2_Nations>              Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__FlagSlot_171_K2Node_ComponentBoundEvent_42_Click__DelegateSignature
struct UChooseOfSideBASE_C_BndEvt__FlagSlot_171_K2Node_ComponentBoundEvent_42_Click__DelegateSignature_Params
{
	TEnumAsByte<Cv2_Nations_ECv2_Nations>              Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__FlagSlot_72_K2Node_ComponentBoundEvent_84_Click__DelegateSignature
struct UChooseOfSideBASE_C_BndEvt__FlagSlot_72_K2Node_ComponentBoundEvent_84_Click__DelegateSignature_Params
{
	TEnumAsByte<Cv2_Nations_ECv2_Nations>              Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__AhtungTable_K2Node_ComponentBoundEvent_2_Yes__DelegateSignature
struct UChooseOfSideBASE_C_BndEvt__AhtungTable_K2Node_ComponentBoundEvent_2_Yes__DelegateSignature_Params
{
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__ShowSloder_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UChooseOfSideBASE_C_BndEvt__ShowSloder_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__ShowWeapon_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UChooseOfSideBASE_C_BndEvt__ShowWeapon_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.Tick
struct UChooseOfSideBASE_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__StartButton_K2Node_ComponentBoundEvent_424_OnButtonHoverEvent__DelegateSignature
struct UChooseOfSideBASE_C_BndEvt__StartButton_K2Node_ComponentBoundEvent_424_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.Destruct
struct UChooseOfSideBASE_C_Destruct_Params
{
};

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.ExecuteUbergraph_ChooseOfSideBASE
struct UChooseOfSideBASE_C_ExecuteUbergraph_ChooseOfSideBASE_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
