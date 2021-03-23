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

// WidgetBlueprintGeneratedClass Map_Overlay.Map_Overlay_C
// 0x0174 (FullSize[0x0374] - InheritedSize[0x0200])
class UMap_Overlay_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            ShowNet2;                                                  // 0x0208(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Black;                                                     // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Map_Overlay;                                               // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      MapTexture;                                                // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Net2Level;                                                 // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Z_Order0;                                                  // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                                   LandscapePivotCoords;                                      // 0x0238(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   SelfSize;                                                  // 0x0240(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Perehod;                                                   // 0x0248(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   TerrainSize;                                               // 0x0250(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              ActorsOnMap;                                               // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTimerHandle                                UpdateCoordinatesTIMER;                                    // 0x0268(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                                CheckActorArrayValidTIMER;                                 // 0x0270(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                                AddMarkersTimer;                                           // 0x0278(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FVector2D                                   BaseScale;                                                 // 0x0280(0x0008) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               MimiMapMode;                                               // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LA1G[0x7];                                     // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      RespawnActor;                                              // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapMarkerROOT_C*                            BaseMarker;                                                // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MiniMapRotation;                                           // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                                   Map_Geometry;                                              // 0x02A4(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsMouseDown;                                               // 0x02DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<GUI_MapMoveDirection_EGUI_MapMoveDirection> MapCanMove;                                                // 0x02DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FLR6[0x2];                                     // 0x02DE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PreviousMousePositionX;                                    // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PreviousMousePositionY;                                    // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseAutomaticScale;                                         // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1UQZ[0x3];                                     // 0x02E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   MinimumScale;                                              // 0x02EC(0x0008) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Proportion;                                                // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GeometryProportion;                                        // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   FactNoScaleMapSize;                                        // 0x02FC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_E9MI[0x4];                                     // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGUI_NetPair>                        NetPointPairs;                                             // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGUI_MapNet>                         NetWidgets;                                                // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                NetLineCount;                                              // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ZoomStep;                                                  // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   BeginBaseScale;                                            // 0x0330(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PreviousStep;                                              // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   ScaleFirstStep;                                            // 0x033C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SelectSpawnMode;                                           // 0x0344(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FYWP[0x3];                                     // 0x0345(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    AddSpawns;                                                 // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                                CheckEnemyTimer;                                           // 0x0358(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                                StaticActorsTimer;                                         // 0x0360(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TEnumAsByte<Cv2_GameModesEnum_ECv2_GameModesEnum>  GameMode;                                                  // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AQDF[0x3];                                     // 0x0369(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   MiniMapBaseScale;                                          // 0x036C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(71845);
		return ptr;
	}



	void STATIC_PrintMapParametrs();
	void STATIC_ADD_Friends_Bots();
	void STATIC_ADD_Turrels();
	void STATIC_ADD_MapActors();
	void STATIC_DrawStep3(float Procent, bool Reverce);
	void STATIC_ADD_MyDead();
	void STATIC_ADD_Deads();
	void STATIC_ADD_Spawns();
	void STATIC_DrawStep2(float Procent, bool Reverce);
	void STATIC_DrawStep0(float Percent);
	void STATIC_DrawStep1(float InputPin);
	void STATIC_SetZoomStep(int Step);
	void STATIC_MapToRange(const struct FVector2D& MapTranslation, struct FVector2D* CorrectTranslation);
	void STATIC_Zoom(float Direction);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
	void STATIC_SetMapPARAMETRS();
	void STATIC_MoveMap();
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, struct FPointerEvent* InMouseEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
	void STATIC_SetProportionAndScale(bool* WasTransform);
	void STATIC_ADD_Radiostation();
	void STATIC_GetSize(const struct FVector2D& Value, struct FVector2D* OverlaySize);
	void STATIC_ADD_ScenarioZone();
	void STATIC_RemoveActorFromMap(class AActor* Actor, TEnumAsByte<GUI_MAP_MarkerType_EGUI_MAP_MarkerType> Type);
	void STATIC_CheckEnemis();
	void STATIC_ADD_Enemy();
	void STATIC_ADD_STATIC_ACTORS();
	void STATIC_ADD_Towns();
	void STATIC_ADD_Tents();
	void STATIC_ADD_BildingsMarkers();
	void STATIC_ADD_Vehicle();
	void STATIC_ADD_Friends();
	void STATIC_ADD_My();
	void STATIC_GoToCharacter(bool No_Rotation);
	void STATIC_GetStartInformation();
	void STATIC_CheckActorArrayValid();
	void STATIC_AddActorOnMap(class AActor* Actor, TEnumAsByte<GUI_MAP_MarkerType_EGUI_MAP_MarkerType> MarkerType, const struct FVector& Coords);
	void STATIC_ADD_DYNAMIC_ACTORS();
	void STATIC_UpdateCoordinates();
	void STATIC_GetSelfSize(struct FVector2D* LocalSelfSize);
	void STATIC_Construct();
	void STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void STATIC_Destruct();
	void STATIC_OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void STATIC_SetSpawnMode();
	void STATIC_HoverSpawnMarker(class AActor* Actor);
	void STATIC_UnhoverSpawnMarker();
	void STATIC_SelectSpawnMarker(class UObject* Actor);
	void STATIC_ExecuteUbergraph_Map_Overlay(int EntryPoint);
	void STATIC_AddSpawns__DelegateSignature(bool Stop, bool Remove, class AActor* Actor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
