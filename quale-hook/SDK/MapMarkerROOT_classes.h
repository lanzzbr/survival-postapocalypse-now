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

// WidgetBlueprintGeneratedClass MapMarkerROOT.MapMarkerROOT_C
// 0x0036 (FullSize[0x0236] - InheritedSize[0x0200])
class UMapMarkerROOT_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      ROOT_Actor;                                                // 0x0208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                Timer;                                                     // 0x0210(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TEnumAsByte<GUI_MAP_MarkerType_EGUI_MAP_MarkerType> ROOT_Type;                                                 // 0x0218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_V0HQ[0x7];                                     // 0x0219(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMap_Overlay_C*                              Root_Parent;                                               // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ROOT_Coords;                                               // 0x0228(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMG_ESlateVisibility                               ROOT_Visibility;                                           // 0x0234(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ROOT_COSMode;                                              // 0x0235(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(95197);
		return ptr;
	}



	void STATIC_RootShowMarker();
	void STATIC_RootHideMarker();
	void STATIC_CheckCarSide(bool* Destroy);
	void STATIC_SetBestFriendStyle(bool Yes);
	void STATIC_SetUnselectedStyle();
	void STATIC_SetSelectedStyle();
	void STATIC_CheckEnemyOrFriend(bool IsFriend, bool* Ok);
	void STATIC_SetBrushROOT(const struct FSlateBrush& Brush);
	void STATIC_CheckActorValid();
	void STATIC_Construct();
	void STATIC_RemoveMe();
	void STATIC_ExecuteUbergraph_MapMarkerROOT(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
