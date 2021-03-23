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

// BlueprintGeneratedClass BP_Christmas_Tree_2022.BP_Christmas_Tree_2021_C
// 0x0030 (FullSize[0x03A0] - InheritedSize[0x0370])
class ABP_Christmas_Tree_2021_C : public AStaticPropsParent_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0370(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             Audio;                                                     // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                        Light_Colors;                                              // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    M_dynamic_Christmas_Tree0;                                 // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    M_dynamic_Christmas_Tree1;                                 // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(142407);
		return ptr;
	}



	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_ExecuteUbergraph_BP_Christmas_Tree_2022(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
