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

// BlueprintGeneratedClass Cv3_LootLibrary.Cv3_LootLibrary_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCv3_LootLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(34246);
		return ptr;
	}



	void STATIC_CheckCountLoot(const struct FName& LootName, class UObject* __WorldContext, int* OutCount);
	void STATIC_GenerateLoot(TEnumAsByte<Cv3_FurnitureLootType_ECv3_FurnitureLootType> LootType, class UObject* __WorldContext, struct FName* LootName, int* Count);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
