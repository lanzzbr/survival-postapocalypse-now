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

// WidgetBlueprintGeneratedClass MAP_VehicleMarker.MAP_VehicleMarker_C
// 0x002C (FullSize[0x0262] - InheritedSize[0x0236])
class UMAP_VehicleMarker_C : public UMapMarkerROOT_C
{
public:
	unsigned char                                      UnknownData_MHDX[0x2];                                     // 0x0236(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            EnemyAnimation;                                            // 0x0240(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Fon;                                                       // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                                EnemyAnimTimer;                                            // 0x0258(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                               IsMyStyle;                                                 // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<Cv4_GamesEnum_ECv4_GamesEnum>          Game;                                                      // 0x0261(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(95241);
		return ptr;
	}



	void STATIC_GetColor(struct FLinearColor* Color);
	void STATIC_EnemyAnim();
	void STATIC_Construct();
	void STATIC_SetBrushROOT(const struct FSlateBrush& Brush);
	void STATIC_RootHideMarker();
	void STATIC_RootShowMarker();
	void STATIC_ShowEnemyAnim();
	void STATIC_StopEnemyAnim();
	void STATIC_ExecuteUbergraph_MAP_VehicleMarker(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
