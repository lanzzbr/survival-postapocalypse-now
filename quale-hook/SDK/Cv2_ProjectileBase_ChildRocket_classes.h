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

// BlueprintGeneratedClass Cv2_ProjectileBase_ChildRocket.Cv2_ProjectileBase_ChildRocket_C
// 0x0010 (FullSize[0x0400] - InheritedSize[0x03F0])
class ACv2_ProjectileBase_ChildRocket_C : public ACv2_ProjectileBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03F0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Sphere;                                                    // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(109061);
		return ptr;
	}



	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_EmitterSpawnSmoke();
	void STATIC_ExecuteUbergraph_Cv2_ProjectileBase_ChildRocket(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
