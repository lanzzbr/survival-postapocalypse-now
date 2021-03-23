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

// BlueprintGeneratedClass Cv2_BombBP.Cv2_BombBP_C
// 0x0020 (FullSize[0x0388] - InheritedSize[0x0368])
class ACv2_BombBP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0368(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        BombMesh;                                                  // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCv2_DestroyComponent_C*                     Cv2_DestroyComponent;                                      // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                    // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage_Destruct;                                           // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(59731);
		return ptr;
	}



	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_BombTimer();
	void STATIC_AttachToComponent(class USceneComponent* SceneComponent, const struct FName& SocketName);
	void STATIC_ExecuteUbergraph_Cv2_BombBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
