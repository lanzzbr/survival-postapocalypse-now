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

// BlueprintGeneratedClass Cv4_DynamicSnow.Cv4_DynamicSnow_C
// 0x0018 (FullSize[0x0380] - InheritedSize[0x0368])
class ACv4_DynamicSnow_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0368(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    SnowParticle;                                              // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(34158);
		return ptr;
	}



	void STATIC_UserConstructionScript();
	void STATIC_SetActorPosition();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_Cv4_DynamicSnow(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
