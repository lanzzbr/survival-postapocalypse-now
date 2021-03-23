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

// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_ShowServerError
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGUI_FunctionLybriary_C::STATIC_GUI_ShowServerError(class APlayerController* Controller, class UObject* __WorldContext)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(65457);

	UGUI_FunctionLybriary_C_GUI_ShowServerError_Params params;
	params.Controller = Controller;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_GetCharacterBlockTime
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGUI_FunctionLybriary_C::STATIC_GUI_GetCharacterBlockTime(TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> Character, class UObject* __WorldContext, float* Time)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(65455);

	UGUI_FunctionLybriary_C_GUI_GetCharacterBlockTime_Params params;
	params.Character = Character;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;

}


// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_VoiceEnumToSound
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv3_VoicesEnum_ECv3_VoicesEnum> VoiceEnum                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum> Side                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*              VoiceSound                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGUI_FunctionLybriary_C::STATIC_GUI_VoiceEnumToSound(TEnumAsByte<Cv3_VoicesEnum_ECv3_VoicesEnum> VoiceEnum, TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum> Side, class UObject* __WorldContext, class USoundBase** VoiceSound)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(65453);

	UGUI_FunctionLybriary_C_GUI_VoiceEnumToSound_Params params;
	params.VoiceEnum = VoiceEnum;
	params.Side = Side;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (VoiceSound != nullptr)
		*VoiceSound = params.VoiceSound;

}


// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_VoiceEnumToString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv3_VoicesEnum_ECv3_VoicesEnum> VoiceEnum                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (Parm, OutParm)
void UGUI_FunctionLybriary_C::STATIC_GUI_VoiceEnumToString(TEnumAsByte<Cv3_VoicesEnum_ECv3_VoicesEnum> VoiceEnum, class UObject* __WorldContext, struct FText* Text)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(65451);

	UGUI_FunctionLybriary_C_GUI_VoiceEnumToString_Params params;
	params.VoiceEnum = VoiceEnum;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_GetCharacterBlockInfo
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterEnum                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsBlockByTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsBlockByRank                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGUI_FunctionLybriary_C::STATIC_GUI_GetCharacterBlockInfo(TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterEnum, class UObject* __WorldContext, bool* IsBlockByTime, bool* IsBlockByRank, float* Time)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(65449);

	UGUI_FunctionLybriary_C_GUI_GetCharacterBlockInfo_Params params;
	params.CharacterEnum = CharacterEnum;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsBlockByTime != nullptr)
		*IsBlockByTime = params.IsBlockByTime;
	if (IsBlockByRank != nullptr)
		*IsBlockByRank = params.IsBlockByRank;
	if (Time != nullptr)
		*Time = params.Time;

}


// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_SetTypeInHand
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_SlotsTypeEnum_ECv2_SlotsTypeEnum> SlotType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGUI_FunctionLybriary_C::STATIC_GUI_SetTypeInHand(TEnumAsByte<Cv2_SlotsTypeEnum_ECv2_SlotsTypeEnum> SlotType, class UObject* __WorldContext)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(65447);

	UGUI_FunctionLybriary_C_GUI_SetTypeInHand_Params params;
	params.SlotType = SlotType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_GetZoneInfo
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class ACv2_ScenarioZone_C*     Zone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           EnemyStyle                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   TownName                       (Parm, OutParm)
// TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum> OwnerSide                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum> PlayerSide                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGUI_FunctionLybriary_C::STATIC_GUI_GetZoneInfo(class ACv2_ScenarioZone_C* Zone, class UObject* __WorldContext, float* Percent, bool* EnemyStyle, struct FText* TownName, TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>* OwnerSide, TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>* PlayerSide)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(65445);

	UGUI_FunctionLybriary_C_GUI_GetZoneInfo_Params params;
	params.Zone = Zone;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Percent != nullptr)
		*Percent = params.Percent;
	if (EnemyStyle != nullptr)
		*EnemyStyle = params.EnemyStyle;
	if (TownName != nullptr)
		*TownName = params.TownName;
	if (OwnerSide != nullptr)
		*OwnerSide = params.OwnerSide;
	if (PlayerSide != nullptr)
		*PlayerSide = params.PlayerSide;

}


// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.SortIntegerArray
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<int>                    Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int>                    SortedArray                    (Parm, OutParm, ZeroConstructor)
void UGUI_FunctionLybriary_C::STATIC_SortIntegerArray(TArray<int>* Array, class UObject* __WorldContext, TArray<int>* SortedArray)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(65442);

	UGUI_FunctionLybriary_C_SortIntegerArray_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (SortedArray != nullptr)
		*SortedArray = params.SortedArray;

}


// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_SortPlayerBy
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<GUI_SortPlayerParam_EGUI_SortPlayerParam> SortParametr                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*          GameState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           FromMin                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ACv2_PlayerState_C*> Cv2Players_Sorted              (Parm, OutParm, ZeroConstructor)
void UGUI_FunctionLybriary_C::STATIC_GUI_SortPlayerBy(TEnumAsByte<GUI_SortPlayerParam_EGUI_SortPlayerParam> SortParametr, class AGameStateBase* GameState, bool FromMin, class UObject* __WorldContext, TArray<class ACv2_PlayerState_C*>* Cv2Players_Sorted)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(65440);

	UGUI_FunctionLybriary_C_GUI_SortPlayerBy_Params params;
	params.SortParametr = SortParametr;
	params.GameState = GameState;
	params.FromMin = FromMin;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Cv2Players_Sorted != nullptr)
		*Cv2Players_Sorted = params.Cv2Players_Sorted;

}


// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_GetCharacterNation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterEnum                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Cv2_Nations_ECv2_Nations> Nation                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGUI_FunctionLybriary_C::STATIC_GUI_GetCharacterNation(TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterEnum, class UObject* __WorldContext, TEnumAsByte<Cv2_Nations_ECv2_Nations>* Nation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(65438);

	UGUI_FunctionLybriary_C_GUI_GetCharacterNation_Params params;
	params.CharacterEnum = CharacterEnum;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Nation != nullptr)
		*Nation = params.Nation;

}


// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_GetRankIco
// ()
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTexture2D* UGUI_FunctionLybriary_C::GUI_GetRankIco(int Index, class UObject* __WorldContext)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(65436);

	UGUI_FunctionLybriary_C_GUI_GetRankIco_Params params;
	params.Index = Index;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_GetBasePercent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum> Side                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGUI_FunctionLybriary_C::STATIC_GUI_GetBasePercent(TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum> Side, class UObject* __WorldContext, int* Percent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(65434);

	UGUI_FunctionLybriary_C_GUI_GetBasePercent_Params params;
	params.Side = Side;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Percent != nullptr)
		*Percent = params.Percent;

}


// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GetMyRankClientOnly
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Rank                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGUI_FunctionLybriary_C::STATIC_GetMyRankClientOnly(class UObject* __WorldContext, int* Rank)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(65432);

	UGUI_FunctionLybriary_C_GetMyRankClientOnly_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rank != nullptr)
		*Rank = params.Rank;

}


// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GetMyDLC
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            DLC_ID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           isInstalled_                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGUI_FunctionLybriary_C::STATIC_GetMyDLC(int DLC_ID, class UObject* __WorldContext, bool* isInstalled_)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(65430);

	UGUI_FunctionLybriary_C_GetMyDLC_Params params;
	params.DLC_ID = DLC_ID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (isInstalled_ != nullptr)
		*isInstalled_ = params.isInstalled_;

}


// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_SortPlayesByScores
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 GameState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APlayerState*>    SortedArray1                   (Parm, OutParm, ZeroConstructor)
void UGUI_FunctionLybriary_C::STATIC_GUI_SortPlayesByScores(class UObject* GameState, class UObject* __WorldContext, TArray<class APlayerState*>* SortedArray1)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(65428);

	UGUI_FunctionLybriary_C_GUI_SortPlayesByScores_Params params;
	params.GameState = GameState;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SortedArray1 != nullptr)
		*SortedArray1 = params.SortedArray1;

}


// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_CharacterToSide
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterEnum                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum> Side                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGUI_FunctionLybriary_C::STATIC_GUI_CharacterToSide(TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterEnum, class UObject* __WorldContext, TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>* Side)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(65426);

	UGUI_FunctionLybriary_C_GUI_CharacterToSide_Params params;
	params.CharacterEnum = CharacterEnum;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Side != nullptr)
		*Side = params.Side;

}


// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_WeaponToLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum> Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCv2_LootStructure      LootStruct                     (Parm, OutParm, HasGetValueTypeHash)
void UGUI_FunctionLybriary_C::STATIC_GUI_WeaponToLoot(TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum> Weapon, class UObject* __WorldContext, bool* Ok, struct FCv2_LootStructure* LootStruct)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(65424);

	UGUI_FunctionLybriary_C_GUI_WeaponToLoot_Params params;
	params.Weapon = Weapon;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ok != nullptr)
		*Ok = params.Ok;
	if (LootStruct != nullptr)
		*LootStruct = params.LootStruct;

}


// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_ArrayLootIntersect
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<TEnumAsByte<Cv2_LootType_ECv2_LootType>> Array1                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<TEnumAsByte<Cv2_LootType_ECv2_LootType>> Array2                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Intersect                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGUI_FunctionLybriary_C::STATIC_GUI_ArrayLootIntersect(TArray<TEnumAsByte<Cv2_LootType_ECv2_LootType>>* Array1, TArray<TEnumAsByte<Cv2_LootType_ECv2_LootType>>* Array2, class UObject* __WorldContext, bool* Intersect)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(65421);

	UGUI_FunctionLybriary_C_GUI_ArrayLootIntersect_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array1 != nullptr)
		*Array1 = params.Array1;
	if (Array2 != nullptr)
		*Array2 = params.Array2;
	if (Intersect != nullptr)
		*Intersect = params.Intersect;

}


// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_GetGameHud
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACv2_Game_HUD_C*         CV2GameHud                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGUI_FunctionLybriary_C::STATIC_GUI_GetGameHud(class UObject* __WorldContext, bool* Ok, class ACv2_Game_HUD_C** CV2GameHud)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(65419);

	UGUI_FunctionLybriary_C_GUI_GetGameHud_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ok != nullptr)
		*Ok = params.Ok;
	if (CV2GameHud != nullptr)
		*CV2GameHud = params.CV2GameHud;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
