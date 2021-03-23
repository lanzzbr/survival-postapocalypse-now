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

// BlueprintGeneratedClass Cv4_AddonBlueprintLibrary.Cv4_AddonBlueprintLibrary_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCv4_AddonBlueprintLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(36428);
		return ptr;
	}



	void STATIC_GetSurvGameMode(class UObject* __WorldContext, TEnumAsByte<Cv2_GameModesEnum_ECv2_GameModesEnum>* GameModes);
	void STATIC_GetSurvState(class UObject* __WorldContext, class ACv2_GameState_C** AsCv_2_Game_State);
	void STATIC_CheckCraftDoorOnScene(const struct FVector& Location, class UObject* __WorldContext, bool* DisableBuildingOut);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
