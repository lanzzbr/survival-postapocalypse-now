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

// BlueprintGeneratedClass Cv2_FencePackSystem.Cv2_FencePackSystem_C
// 0x0058 (FullSize[0x03C0] - InheritedSize[0x0368])
class ACv2_FencePackSystem_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0368(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                       DestroyObjects;                                            // 0x0378(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify)
	TArray<class UStaticMeshComponent*>                StaticMeshes;                                              // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              updateClientTimer;                                         // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LYK3[0x4];                                     // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<bool>                                       proxyDestroyObjects;                                       // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      HitPoints;                                                 // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(59091);
		return ptr;
	}



	void STATIC_AttackToFence(class UPrimitiveComponent* Component, float Damage);
	void STATIC_OnRep_DestroyObjects();
	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_Initialization();
	void STATIC_AsyncLoadDestroy(int proxyIndex);
	void STATIC_ExecuteUbergraph_Cv2_FencePackSystem(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
