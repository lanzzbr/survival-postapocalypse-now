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

// WidgetBlueprintGeneratedClass PointerOverlay_BASE.PointerOverlay_BASE_C
// 0x0028 (FullSize[0x0228] - InheritedSize[0x0200])
class UPointerOverlay_BASE_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UCanvasPanel*                                CanvasPanel_1;                                             // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UPointer_Root_C*>                     WidgetsInScreen;                                           // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                                CheckShkaftimer;                                           // 0x0220(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(58839);
		return ptr;
	}



	void STATIC_CheckShkafPionters();
	void STATIC_CheckIsActorExist(class UObject* Actor, bool* Exist, int* IndexIfTrue);
	void STATIC_DeleteByActor(class AActor* Actor);
	void STATIC_DeleteByType(TEnumAsByte<GUI_Pointer_Type_EGUI_Pointer_Type> POinterType);
	void STATIC_AddEnemyBase();
	void STATIC_Construct();
	void STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void STATIC_Add_pointer(TEnumAsByte<GUI_Pointer_Type_EGUI_Pointer_Type> ClassPointer, class AActor* Actor, const struct FVector& Location, bool IsUpdateMarker);
	void STATIC_Destruct();
	void STATIC_ExecuteUbergraph_PointerOverlay_BASE(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
