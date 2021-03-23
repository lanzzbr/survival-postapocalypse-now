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

// BlueprintGeneratedClass Cv3_Fence_wood_04.Cv3_Fence_wood_04_C
// 0x0028 (FullSize[0x0440] - InheritedSize[0x0418])
class ACv3_Fence_wood_04_C : public ACv2_HouseBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0418(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             Scene;                                                     // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Stone_Wood_04_Stone_Wood_04_z1_1;                          // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Stone_Wood_04_Foundation_Wood_04;                          // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Stone_Wood_04_Stone_Wood_04_z2_1;                          // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(87356);
		return ptr;
	}



	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_Cv3_Fence_wood_04(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
