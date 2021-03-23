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

// WidgetBlueprintGeneratedClass Z_InventoryCRAFT_Root.Z_InventoryCRAFT_Root_C
// 0x00B0 (FullSize[0x02B0] - InheritedSize[0x0200])
class UZ_InventoryCRAFT_Root_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	struct FText                                       HeaderOfBox;                                               // 0x0208(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               TempCanCraft;                                              // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_C0FD[0x7];                                     // 0x0221(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      CraftArrayResults;                                         // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                SelectedItem;                                              // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DPBN[0x4];                                     // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UZ_InventoryCraftResourceSlot_C*>     CraftResourceSlotsArray;                                   // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                      ActorVar;                                                  // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FromOtherActor;                                            // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               TempHaveRank;                                              // 0x0259(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YZJO[0x2];                                     // 0x025A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   AboutIconDefaultSize;                                      // 0x025C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_K286[0x4];                                     // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    ClickClose;                                                // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                NoCraftDistance;                                           // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_F73F[0x4];                                     // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                CraftTimer;                                                // 0x0280(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UClass*                                      Root_MainSlots_Class;                                      // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UZ_InventoryCraftSlot_ROOT_C*>        Root_SlotsAllWidget;                                       // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UZ_InventoryCraftResourseSlotROOT_C*> Root_ResourceSlotsArray;                                   // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(81677);
		return ptr;
	}



	void STATIC_RootShowActorCraft(class AActor* Actor);
	void STATIC_RootShowMyCraft();
	void STATIC_RootCraft_This(int Index);
	void STATIC_RootUpdateCraftPanel();
	void STATIC_OnCloseCraft();
	void STATIC_Reset();
	void STATIC_RootDrawSlots(int Index);
	void STATIC_RootClearSlot();
	void STATIC_RootHideThrober();
	void STATIC_ExecuteUbergraph_Z_InventoryCRAFT_Root(int EntryPoint);
	void STATIC_ClickClose__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
