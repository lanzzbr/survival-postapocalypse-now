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

// WidgetBlueprintGeneratedClass SelectSpawnWidgetPortable.SelectSpawnWidgetPortable_C
// 0x0058 (FullSize[0x0258] - InheritedSize[0x0200])
class USelectSpawnWidgetPortable_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Image_1;                                                   // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMap_Overlay_C*                              Map_Overlay;                                               // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTownString_C*                               TownString;                                                // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTownString_C*                               TownString_2;                                              // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                TownsVB;                                                   // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTownString_C*>                       Strings;                                                   // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                                Timer;                                                     // 0x0240(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UChooseOfSideBASE_C*                         Root;                                                      // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                OfficersTimer;                                             // 0x0250(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(56970);
		return ptr;
	}



	void STATIC_CheckOfficers();
	void STATIC_SelectCurrent();
	void STATIC_GetPlayerSide(TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>* ProxySide);
	void STATIC_CheckStrings();
	void STATIC_GetString(class UObject* Actor, int* Index);
	void STATIC_Construct();
	void STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void STATIC_SelectString(class AActor* Actor);
	void STATIC_HoverString(class UObject* Actor);
	void STATIC_UnhoverString(class UObject* Actor);
	void STATIC_Destruct();
	void STATIC_SpawnString(class AActor* Actor);
	void STATIC_ExecuteUbergraph_SelectSpawnWidgetPortable(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
