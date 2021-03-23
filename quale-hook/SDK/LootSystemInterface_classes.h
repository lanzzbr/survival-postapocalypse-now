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

// BlueprintGeneratedClass LootSystemInterface.LootSystemInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULootSystemInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(59671);
		return ptr;
	}



	void STATIC_UpdateLootArray(TArray<struct FS_InventorySlot>* LootSlotsArray);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
