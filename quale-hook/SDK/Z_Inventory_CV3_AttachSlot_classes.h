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

// WidgetBlueprintGeneratedClass Z_Inventory_CV3_AttachSlot.Z_Inventory_CV3_AttachSlot_C
// 0x0078 (FullSize[0x02F1] - InheritedSize[0x0279])
class UZ_Inventory_CV3_AttachSlot_C : public UZ_Inventory_AttachRoot_C
{
public:
	unsigned char                                      UnknownData_5456[0x7];                                     // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Icon;                                                      // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FZ_LootStr                                  Loot_1;                                                    // 0x0290(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               IsFloor;                                                   // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(81743);
		return ptr;
	}



	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
	void STATIC_OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation);
	void STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void STATIC_MouseDrop();
	void STATIC_Draw(const struct FZ_LootStr& Z_Loot);
	void STATIC_Root_MouseDrop();
	void STATIC_Clear();
	void STATIC_ExecuteUbergraph_Z_Inventory_CV3_AttachSlot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
