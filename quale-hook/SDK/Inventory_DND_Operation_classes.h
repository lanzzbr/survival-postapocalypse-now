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

// BlueprintGeneratedClass Inventory_DND_Operation.Inventory_DND_Operation_C
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UInventory_DND_Operation_C : public UDragDropOperation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0088(0x0008) (Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(81717);
		return ptr;
	}



	void STATIC_DragCancelled(const struct FPointerEvent& PointerEvent);
	void STATIC_Drop(const struct FPointerEvent& PointerEvent);
	void STATIC_ExecuteUbergraph_Inventory_DND_Operation(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
