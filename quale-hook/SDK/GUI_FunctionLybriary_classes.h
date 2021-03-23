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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GUI_FunctionLybriary.GUI_FunctionLybriary_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGUI_FunctionLybriary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(65418);
		return ptr;
	}



	void STATIC_GUI_ShowServerError(class APlayerController* Controller, class UObject* __WorldContext);
	void STATIC_GUI_GetCharacterBlockTime(TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> Character, class UObject* __WorldContext, float* Time);
	void STATIC_GUI_VoiceEnumToSound(TEnumAsByte<Cv3_VoicesEnum_ECv3_VoicesEnum> VoiceEnum, TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum> Side, class UObject* __WorldContext, class USoundBase** VoiceSound);
	void STATIC_GUI_VoiceEnumToString(TEnumAsByte<Cv3_VoicesEnum_ECv3_VoicesEnum> VoiceEnum, class UObject* __WorldContext, struct FText* Text);
	void STATIC_GUI_GetCharacterBlockInfo(TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterEnum, class UObject* __WorldContext, bool* IsBlockByTime, bool* IsBlockByRank, float* Time);
	void STATIC_GUI_SetTypeInHand(TEnumAsByte<Cv2_SlotsTypeEnum_ECv2_SlotsTypeEnum> SlotType, class UObject* __WorldContext);
	void STATIC_GUI_GetZoneInfo(class ACv2_ScenarioZone_C* Zone, class UObject* __WorldContext, float* Percent, bool* EnemyStyle, struct FText* TownName, TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>* OwnerSide, TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>* PlayerSide);
	void STATIC_SortIntegerArray(TArray<int>* Array, class UObject* __WorldContext, TArray<int>* SortedArray);
	void STATIC_GUI_SortPlayerBy(TEnumAsByte<GUI_SortPlayerParam_EGUI_SortPlayerParam> SortParametr, class AGameStateBase* GameState, bool FromMin, class UObject* __WorldContext, TArray<class ACv2_PlayerState_C*>* Cv2Players_Sorted);
	void STATIC_GUI_GetCharacterNation(TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterEnum, class UObject* __WorldContext, TEnumAsByte<Cv2_Nations_ECv2_Nations>* Nation);
	class UTexture2D* GUI_GetRankIco(int Index, class UObject* __WorldContext);
	void STATIC_GUI_GetBasePercent(TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum> Side, class UObject* __WorldContext, int* Percent);
	void STATIC_GetMyRankClientOnly(class UObject* __WorldContext, int* Rank);
	void STATIC_GetMyDLC(int DLC_ID, class UObject* __WorldContext, bool* isInstalled_);
	void STATIC_GUI_SortPlayesByScores(class UObject* GameState, class UObject* __WorldContext, TArray<class APlayerState*>* SortedArray1);
	void STATIC_GUI_CharacterToSide(TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterEnum, class UObject* __WorldContext, TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>* Side);
	void STATIC_GUI_WeaponToLoot(TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum> Weapon, class UObject* __WorldContext, bool* Ok, struct FCv2_LootStructure* LootStruct);
	void STATIC_GUI_ArrayLootIntersect(TArray<TEnumAsByte<Cv2_LootType_ECv2_LootType>>* Array1, TArray<TEnumAsByte<Cv2_LootType_ECv2_LootType>>* Array2, class UObject* __WorldContext, bool* Intersect);
	void STATIC_GUI_GetGameHud(class UObject* __WorldContext, bool* Ok, class ACv2_Game_HUD_C** CV2GameHud);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
