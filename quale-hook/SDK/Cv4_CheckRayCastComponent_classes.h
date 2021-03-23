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

// BlueprintGeneratedClass Cv4_CheckRayCastComponent.Cv4_CheckRayCastComponent_C
// 0x0018 (FullSize[0x0108] - InheritedSize[0x00F0])
class UCv4_CheckRayCastComponent_C : public UActorComponent
{
public:
	class ACv2_playerController_C*                     MyController;                                              // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        OldStaticMesh;                                             // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      oldSkeletalMesh;                                           // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(58539);
		return ptr;
	}



	void STATIC_RayCastToEnemy();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
