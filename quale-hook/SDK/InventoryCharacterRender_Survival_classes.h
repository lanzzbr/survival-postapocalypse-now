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

// BlueprintGeneratedClass InventoryCharacterRender_Survival.InventoryCharacterRender_Survival_C
// 0x0040 (FullSize[0x04A0] - InheritedSize[0x0460])
class AInventoryCharacterRender_Survival_C : public AInventoryCharacterRender_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0460(0x0008) (Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight2;                                               // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                        PointLight1;                                               // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                        PointLight;                                                // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      TORSE_PARTS;                                               // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      LEGS_PARTS;                                                // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      HANDS_PARTS;                                               // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      FOOT_PARTS;                                                // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(70720);
		return ptr;
	}



	void STATIC_UserConstructionScript();
	void STATIC_Set_FOOT_Mesh(class USkeletalMesh* Mesh);
	void STATIC_Set_HANDS_Mesh(class USkeletalMesh* Mesh);
	void STATIC_Set_LEGS_Mesh(class USkeletalMesh* Mesh);
	void STATIC_Set_TORSE_Mesh(class USkeletalMesh* Mesh);
	void STATIC_UpdateBodyParts();
	void STATIC_ExecuteUbergraph_InventoryCharacterRender_Survival(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
