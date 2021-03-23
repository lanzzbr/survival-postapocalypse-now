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

// BlueprintGeneratedClass CraftComponent.CraftComponent_C
// 0x0020 (FullSize[0x0110] - InheritedSize[0x00F0])
class UCraftComponent_C : public UActorComponent
{
public:
	TArray<TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings>> CraftArray;                                                // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings>> SortedCraft;                                               // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(34357);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
