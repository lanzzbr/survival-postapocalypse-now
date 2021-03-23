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

// Function ChooseOfSideBASE.ChooseOfSideBASE_C.CheckCharactersBlockString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChooseOfSideBASE_C::STATIC_CheckCharactersBlockString()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64598);

	UChooseOfSideBASE_C_CheckCharactersBlockString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.Get_AxisMaxPlayers_Text_1
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UChooseOfSideBASE_C::Get_AxisMaxPlayers_Text_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64555);

	UChooseOfSideBASE_C_Get_AxisMaxPlayers_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.SelectCharacterString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FCV2_CharacterTypeStructure CharacterStr                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UChooseOfSideBASE_C::STATIC_SelectCharacterString(const struct FCV2_CharacterTypeStructure& CharacterStr)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64553);

	UChooseOfSideBASE_C_SelectCharacterString_Params params;
	params.CharacterStr = CharacterStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.DrawCharacterList
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChooseOfSideBASE_C::STATIC_DrawCharacterList()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64531);

	UChooseOfSideBASE_C_DrawCharacterList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.GetText_3
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UChooseOfSideBASE_C::GetText_3()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64529);

	UChooseOfSideBASE_C_GetText_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.IsNotTimeBlock
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UChooseOfSideBASE_C::IsNotTimeBlock()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64527);

	UChooseOfSideBASE_C_IsNotTimeBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.GetCurrenNationDATA
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_Nations_ECv2_Nations> Nation                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCV2_CharacterTypeStructure CharString                     (Parm, OutParm, HasGetValueTypeHash)
// bool                           Ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FCV2_CharacterTypeStructure> NationArray                    (Parm, OutParm, ZeroConstructor)
// int                            CurrentNationIndex             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChooseOfSideBASE_C::STATIC_GetCurrenNationDATA(TEnumAsByte<Cv2_Nations_ECv2_Nations> Nation, struct FCV2_CharacterTypeStructure* CharString, bool* Ok, TArray<struct FCV2_CharacterTypeStructure>* NationArray, int* CurrentNationIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64525);

	UChooseOfSideBASE_C_GetCurrenNationDATA_Params params;
	params.Nation = Nation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CharString != nullptr)
		*CharString = params.CharString;
	if (Ok != nullptr)
		*Ok = params.Ok;
	if (NationArray != nullptr)
		*NationArray = params.NationArray;
	if (CurrentNationIndex != nullptr)
		*CurrentNationIndex = params.CurrentNationIndex;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.NationToSide
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_Nations_ECv2_Nations> Nation                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum> Side                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChooseOfSideBASE_C::STATIC_NationToSide(TEnumAsByte<Cv2_Nations_ECv2_Nations> Nation, TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>* Side)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64523);

	UChooseOfSideBASE_C_NationToSide_Params params;
	params.Nation = Nation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Side != nullptr)
		*Side = params.Side;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.SelectNation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_Nations_ECv2_Nations> Nation                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChooseOfSideBASE_C::STATIC_SelectNation(TEnumAsByte<Cv2_Nations_ECv2_Nations> Nation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64521);

	UChooseOfSideBASE_C_SelectNation_Params params;
	params.Nation = Nation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.GetNationArray_AndSort
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_Nations_ECv2_Nations> Nations                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCV2_CharacterTypeStructure> NationArray                    (Parm, OutParm, ZeroConstructor)
void UChooseOfSideBASE_C::STATIC_GetNationArray_AndSort(TEnumAsByte<Cv2_Nations_ECv2_Nations> Nations, TArray<struct FCV2_CharacterTypeStructure>* NationArray)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64519);

	UChooseOfSideBASE_C_GetNationArray_AndSort_Params params;
	params.Nations = Nations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NationArray != nullptr)
		*NationArray = params.NationArray;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.GetVisibility_1
// ()
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UChooseOfSideBASE_C::GetVisibility_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64516);

	UChooseOfSideBASE_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.UnselectFlags
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_Nations_ECv2_Nations> SelectNow                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChooseOfSideBASE_C::STATIC_UnselectFlags(TEnumAsByte<Cv2_Nations_ECv2_Nations> SelectNow)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64514);

	UChooseOfSideBASE_C_UnselectFlags_Params params;
	params.SelectNow = SelectNow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.Lock
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChooseOfSideBASE_C::STATIC_Lock()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64512);

	UChooseOfSideBASE_C_Lock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.SetMainFon
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum> Side                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChooseOfSideBASE_C::STATIC_SetMainFon(TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum> Side)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64510);

	UChooseOfSideBASE_C_SetMainFon_Params params;
	params.Side = Side;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.AutomaticSelectTeam
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChooseOfSideBASE_C::STATIC_AutomaticSelectTeam()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64508);

	UChooseOfSideBASE_C_AutomaticSelectTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.CalculateCountPlayers
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChooseOfSideBASE_C::STATIC_CalculateCountPlayers()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64506);

	UChooseOfSideBASE_C_CalculateCountPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.GetText_2
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UChooseOfSideBASE_C::GetText_2()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64504);

	UChooseOfSideBASE_C_GetText_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.GetText_1
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UChooseOfSideBASE_C::GetText_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64502);

	UChooseOfSideBASE_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.GetCharacterStrFomArray
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Next                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCV2_CharacterTypeStructure CharacterStruct                (Parm, OutParm, HasGetValueTypeHash)
// bool                           Ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UChooseOfSideBASE_C::STATIC_GetCharacterStrFomArray(bool Next, struct FCV2_CharacterTypeStructure* CharacterStruct, bool* Ok)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64500);

	UChooseOfSideBASE_C_GetCharacterStrFomArray_Params params;
	params.Next = Next;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CharacterStruct != nullptr)
		*CharacterStruct = params.CharacterStruct;
	if (Ok != nullptr)
		*Ok = params.Ok;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.SelectTeamAnimation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChooseOfSideBASE_C::STATIC_SelectTeamAnimation()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64498);

	UChooseOfSideBASE_C_SelectTeamAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.ShowButtons
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChooseOfSideBASE_C::STATIC_ShowButtons()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64497);

	UChooseOfSideBASE_C_ShowButtons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.Hidebuttons
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum> Side                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChooseOfSideBASE_C::STATIC_Hidebuttons(TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum> Side)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64495);

	UChooseOfSideBASE_C_Hidebuttons_Params params;
	params.Side = Side;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.Get_ClassName_Text_1
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UChooseOfSideBASE_C::Get_ClassName_Text_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64493);

	UChooseOfSideBASE_C_Get_ClassName_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.Get_AxisText_ColorAndOpacity_1
// ()
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor UChooseOfSideBASE_C::Get_AxisText_ColorAndOpacity_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64491);

	UChooseOfSideBASE_C_Get_AxisText_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.Get_AlliesText_ColorAndOpacity_1
// ()
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor UChooseOfSideBASE_C::Get_AlliesText_ColorAndOpacity_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64489);

	UChooseOfSideBASE_C_Get_AlliesText_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.Get_StartButton_bIsEnabled_1
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UChooseOfSideBASE_C::Get_StartButton_bIsEnabled_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64487);

	UChooseOfSideBASE_C_Get_StartButton_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.Refreash
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FCV2_CharacterTypeStructure CharStr                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UChooseOfSideBASE_C::STATIC_Refreash(const struct FCV2_CharacterTypeStructure& CharStr)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64485);

	UChooseOfSideBASE_C_Refreash_Params params;
	params.CharStr = CharStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.SetWeaponIcoAndText
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum> Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                  ImageWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*              NameWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*             WeaponMesh                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChooseOfSideBASE_C::STATIC_SetWeaponIcoAndText(TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum> Weapon, class UImage* ImageWidget, class UTextBlock* NameWidget, class UStaticMesh** WeaponMesh)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64483);

	UChooseOfSideBASE_C_SetWeaponIcoAndText_Params params;
	params.Weapon = Weapon;
	params.ImageWidget = ImageWidget;
	params.NameWidget = NameWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WeaponMesh != nullptr)
		*WeaponMesh = params.WeaponMesh;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChooseOfSideBASE_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64482);

	UChooseOfSideBASE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__Button_92_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChooseOfSideBASE_C::STATIC_BndEvt__Button_92_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64481);

	UChooseOfSideBASE_C_BndEvt__Button_92_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChooseOfSideBASE_C::STATIC_BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64480);

	UChooseOfSideBASE_C_BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__StartButton_K2Node_ComponentBoundEvent_155_OnButtonHoverEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChooseOfSideBASE_C::STATIC_BndEvt__StartButton_K2Node_ComponentBoundEvent_155_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64479);

	UChooseOfSideBASE_C_BndEvt__StartButton_K2Node_ComponentBoundEvent_155_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__StartButton_K2Node_ComponentBoundEvent_303_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChooseOfSideBASE_C::STATIC_BndEvt__StartButton_K2Node_ComponentBoundEvent_303_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64478);

	UChooseOfSideBASE_C_BndEvt__StartButton_K2Node_ComponentBoundEvent_303_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__Button_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChooseOfSideBASE_C::STATIC_BndEvt__Button_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64477);

	UChooseOfSideBASE_C_BndEvt__Button_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__ALLIES_Button_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChooseOfSideBASE_C::STATIC_BndEvt__ALLIES_Button_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64476);

	UChooseOfSideBASE_C_BndEvt__ALLIES_Button_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.Select_AXIS
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChooseOfSideBASE_C::STATIC_Select_AXIS()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64475);

	UChooseOfSideBASE_C_Select_AXIS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.SelectALLIES
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChooseOfSideBASE_C::STATIC_SelectALLIES()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64474);

	UChooseOfSideBASE_C_SelectALLIES_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__StoreButton_K2Node_ComponentBoundEvent_222_OnButtonHoverEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChooseOfSideBASE_C::STATIC_BndEvt__StoreButton_K2Node_ComponentBoundEvent_222_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64473);

	UChooseOfSideBASE_C_BndEvt__StoreButton_K2Node_ComponentBoundEvent_222_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__StoreButton_K2Node_ComponentBoundEvent_235_OnButtonHoverEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChooseOfSideBASE_C::STATIC_BndEvt__StoreButton_K2Node_ComponentBoundEvent_235_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64472);

	UChooseOfSideBASE_C_BndEvt__StoreButton_K2Node_ComponentBoundEvent_235_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__StoreButton_K2Node_ComponentBoundEvent_307_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChooseOfSideBASE_C::STATIC_BndEvt__StoreButton_K2Node_ComponentBoundEvent_307_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64471);

	UChooseOfSideBASE_C_BndEvt__StoreButton_K2Node_ComponentBoundEvent_307_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__FlagSlot_C_2_K2Node_ComponentBoundEvent_240_Click__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_Nations_ECv2_Nations> Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChooseOfSideBASE_C::STATIC_BndEvt__FlagSlot_C_2_K2Node_ComponentBoundEvent_240_Click__DelegateSignature(TEnumAsByte<Cv2_Nations_ECv2_Nations> Team)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64469);

	UChooseOfSideBASE_C_BndEvt__FlagSlot_C_2_K2Node_ComponentBoundEvent_240_Click__DelegateSignature_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__USA_K2Node_ComponentBoundEvent_17_Click__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_Nations_ECv2_Nations> Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChooseOfSideBASE_C::STATIC_BndEvt__USA_K2Node_ComponentBoundEvent_17_Click__DelegateSignature(TEnumAsByte<Cv2_Nations_ECv2_Nations> Team)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64467);

	UChooseOfSideBASE_C_BndEvt__USA_K2Node_ComponentBoundEvent_17_Click__DelegateSignature_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__FlagSlot_K2Node_ComponentBoundEvent_603_Click__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_Nations_ECv2_Nations> Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChooseOfSideBASE_C::STATIC_BndEvt__FlagSlot_K2Node_ComponentBoundEvent_603_Click__DelegateSignature(TEnumAsByte<Cv2_Nations_ECv2_Nations> Team)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64465);

	UChooseOfSideBASE_C_BndEvt__FlagSlot_K2Node_ComponentBoundEvent_603_Click__DelegateSignature_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__FlagSlot_171_K2Node_ComponentBoundEvent_42_Click__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_Nations_ECv2_Nations> Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChooseOfSideBASE_C::STATIC_BndEvt__FlagSlot_171_K2Node_ComponentBoundEvent_42_Click__DelegateSignature(TEnumAsByte<Cv2_Nations_ECv2_Nations> Team)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64463);

	UChooseOfSideBASE_C_BndEvt__FlagSlot_171_K2Node_ComponentBoundEvent_42_Click__DelegateSignature_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__FlagSlot_72_K2Node_ComponentBoundEvent_84_Click__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_Nations_ECv2_Nations> Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChooseOfSideBASE_C::STATIC_BndEvt__FlagSlot_72_K2Node_ComponentBoundEvent_84_Click__DelegateSignature(TEnumAsByte<Cv2_Nations_ECv2_Nations> Team)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64461);

	UChooseOfSideBASE_C_BndEvt__FlagSlot_72_K2Node_ComponentBoundEvent_84_Click__DelegateSignature_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__AhtungTable_K2Node_ComponentBoundEvent_2_Yes__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChooseOfSideBASE_C::STATIC_BndEvt__AhtungTable_K2Node_ComponentBoundEvent_2_Yes__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64460);

	UChooseOfSideBASE_C_BndEvt__AhtungTable_K2Node_ComponentBoundEvent_2_Yes__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__ShowSloder_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChooseOfSideBASE_C::STATIC_BndEvt__ShowSloder_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64459);

	UChooseOfSideBASE_C_BndEvt__ShowSloder_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__ShowWeapon_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChooseOfSideBASE_C::STATIC_BndEvt__ShowWeapon_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64458);

	UChooseOfSideBASE_C_BndEvt__ShowWeapon_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.Tick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChooseOfSideBASE_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64456);

	UChooseOfSideBASE_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.BndEvt__StartButton_K2Node_ComponentBoundEvent_424_OnButtonHoverEvent__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChooseOfSideBASE_C::STATIC_BndEvt__StartButton_K2Node_ComponentBoundEvent_424_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64455);

	UChooseOfSideBASE_C_BndEvt__StartButton_K2Node_ComponentBoundEvent_424_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.Destruct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChooseOfSideBASE_C::STATIC_Destruct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64454);

	UChooseOfSideBASE_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChooseOfSideBASE.ChooseOfSideBASE_C.ExecuteUbergraph_ChooseOfSideBASE
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChooseOfSideBASE_C::STATIC_ExecuteUbergraph_ChooseOfSideBASE(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64452);

	UChooseOfSideBASE_C_ExecuteUbergraph_ChooseOfSideBASE_Params params;
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
