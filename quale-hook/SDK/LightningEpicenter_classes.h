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

// BlueprintGeneratedClass LightningEpicenter.LightningEpicenter_C
// 0x0010 (FullSize[0x0378] - InheritedSize[0x0368])
class ALightningEpicenter_C : public AActor
{
public:
	class UStaticMeshComponent*                        SM_Dummy;                                                  // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(163540);
		return ptr;
	}



	void STATIC_UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
