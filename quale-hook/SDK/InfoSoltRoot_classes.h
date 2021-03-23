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

// WidgetBlueprintGeneratedClass InfoSoltRoot.InfoSoltRoot_C
// 0x0070 (FullSize[0x0270] - InheritedSize[0x0200])
class UInfoSoltRoot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*                    Icon_Material_Root;                                        // 0x0208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_LootType_ECv2_LootType>            SlotTypeRoot;                                              // 0x0210(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Q9YD[0x7];                                     // 0x0211(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       RootCount;                                                 // 0x0218(0x0018) (Edit, BlueprintVisible)
	int                                                RootLootIndex;                                             // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Root_IsCountable;                                          // 0x0234(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<GUI_InfoWidget_CheckableType_EGUI_InfoWidget_CheckableType> CountableType;                                             // 0x0235(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EJ87[0x2];                                     // 0x0236(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    PreviosIcon_Material_Root;                                 // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_LootEnum_ECv2_LootEnum>            Root_Loot;                                                 // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<GUI_ActionNames_EGUI_ActionNames>      RootAction;                                                // 0x0241(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_N60I[0x6];                                     // 0x0242(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       RootKeyText_IfMoveForward;                                 // 0x0248(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<Z_EquipSocket_EZ_EquipSocket>          RootZ_EquipType;                                           // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_M0ER[0x7];                                     // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       RootZ_Loot;                                                // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(80011);
		return ptr;
	}



	void STATIC_SetPreviosIco(const struct FName& RowName);
	void STATIC_SetElementVisibility(bool Key, bool Icon, bool Count);
	void STATIC_ClearSlotRoot();
	void STATIC_DrawSlotsRoot(int LootIndex);
	void STATIC_SetIcon(class UTexture2D* Icon);
	void STATIC_Construct();
	void STATIC_ExecuteUbergraph_InfoSoltRoot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
