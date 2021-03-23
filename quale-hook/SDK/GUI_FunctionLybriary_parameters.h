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

// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_ShowServerError
struct UGUI_FunctionLybriary_C_GUI_ShowServerError_Params
{
	class APlayerController*                           Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_GetCharacterBlockTime
struct UGUI_FunctionLybriary_C_GUI_GetCharacterBlockTime_Params
{
	TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Time;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_VoiceEnumToSound
struct UGUI_FunctionLybriary_C_GUI_VoiceEnumToSound_Params
{
	TEnumAsByte<Cv3_VoicesEnum_ECv3_VoicesEnum>        VoiceEnum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>          Side;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  VoiceSound;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_VoiceEnumToString
struct UGUI_FunctionLybriary_C_GUI_VoiceEnumToString_Params
{
	TEnumAsByte<Cv3_VoicesEnum_ECv3_VoicesEnum>        VoiceEnum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // (Parm, OutParm)
};

// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_GetCharacterBlockInfo
struct UGUI_FunctionLybriary_C_GUI_GetCharacterBlockInfo_Params
{
	TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterEnum;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsBlockByTime;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsBlockByRank;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Time;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_SetTypeInHand
struct UGUI_FunctionLybriary_C_GUI_SetTypeInHand_Params
{
	TEnumAsByte<Cv2_SlotsTypeEnum_ECv2_SlotsTypeEnum>  SlotType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_GetZoneInfo
struct UGUI_FunctionLybriary_C_GUI_GetZoneInfo_Params
{
	class ACv2_ScenarioZone_C*                         Zone;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Percent;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               EnemyStyle;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       TownName;                                                  // (Parm, OutParm)
	TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>          OwnerSide;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>          PlayerSide;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.SortIntegerArray
struct UGUI_FunctionLybriary_C_SortIntegerArray_Params
{
	TArray<int>                                        Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        SortedArray;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_SortPlayerBy
struct UGUI_FunctionLybriary_C_GUI_SortPlayerBy_Params
{
	TEnumAsByte<GUI_SortPlayerParam_EGUI_SortPlayerParam> SortParametr;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                              GameState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FromMin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACv2_PlayerState_C*>                  Cv2Players_Sorted;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_GetCharacterNation
struct UGUI_FunctionLybriary_C_GUI_GetCharacterNation_Params
{
	TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterEnum;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_Nations_ECv2_Nations>              Nation;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_GetRankIco
struct UGUI_FunctionLybriary_C_GUI_GetRankIco_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_GetBasePercent
struct UGUI_FunctionLybriary_C_GUI_GetBasePercent_Params
{
	TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>          Side;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Percent;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GetMyRankClientOnly
struct UGUI_FunctionLybriary_C_GetMyRankClientOnly_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Rank;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GetMyDLC
struct UGUI_FunctionLybriary_C_GetMyDLC_Params
{
	int                                                DLC_ID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isInstalled_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_SortPlayesByScores
struct UGUI_FunctionLybriary_C_GUI_SortPlayesByScores_Params
{
	class UObject*                                     GameState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APlayerState*>                        SortedArray1;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_CharacterToSide
struct UGUI_FunctionLybriary_C_GUI_CharacterToSide_Params
{
	TEnumAsByte<Cv2_CharactersEnum_ECv2_CharactersEnum> CharacterEnum;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>          Side;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_WeaponToLoot
struct UGUI_FunctionLybriary_C_GUI_WeaponToLoot_Params
{
	TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum>      Weapon;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FCv2_LootStructure                          LootStruct;                                                // (Parm, OutParm, HasGetValueTypeHash)
};

// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_ArrayLootIntersect
struct UGUI_FunctionLybriary_C_GUI_ArrayLootIntersect_Params
{
	TArray<TEnumAsByte<Cv2_LootType_ECv2_LootType>>    Array1;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<TEnumAsByte<Cv2_LootType_ECv2_LootType>>    Array2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Intersect;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GUI_FunctionLybriary.GUI_FunctionLybriary_C.GUI_GetGameHud
struct UGUI_FunctionLybriary_C_GUI_GetGameHud_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Ok;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ACv2_Game_HUD_C*                             CV2GameHud;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
