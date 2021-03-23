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

// BlueprintGeneratedClass Lamps.Lamps_C
// 0x0001 (FullSize[0x0371] - InheritedSize[0x0370])
class ALamps_C : public AStaticPropsParent_BP_C
{
public:
	TEnumAsByte<LampsEnum_ELampsEnum>                  LampsArray;                                                // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(157212);
		return ptr;
	}



	void STATIC_UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
