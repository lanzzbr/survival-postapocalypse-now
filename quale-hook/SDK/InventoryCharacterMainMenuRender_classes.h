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

// BlueprintGeneratedClass InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C
// 0x00D0 (FullSize[0x0438] - InheritedSize[0x0368])
class AInventoryCharacterMainMenuRender_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0368(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        MOD_SILENCER;                                              // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Face;                                                      // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      LEGS_PARTS;                                                // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      HANDS_PARTS;                                               // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      FOOT_PARTS;                                                // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      TORSE_PARTS;                                               // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        MOD_OPTIC;                                                 // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Backpack;                                                  // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        MeleeWeapon;                                               // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        GrenadeRight;                                              // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        GrenadeLeft;                                               // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Pistol;                                                    // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Helmet;                                                    // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Weapon;                                                    // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      ToonSoldier_Soviet;                                        // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Turbine_NewTrack_0_4B884EF24551DEC0B75A1EAE5EEB8A28;       // 0x03F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Turbine__Direction_4B884EF24551DEC0B75A1EAE5EEB8A28;       // 0x03F4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PJVS[0x3];                                     // 0x03F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Turbine;                                                   // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_Nations_ECv2_Nations>              Nation;                                                    // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4QFM[0x3];                                     // 0x0401(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                oldIndex;                                                  // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>                  oldMaterials;                                              // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UStaticMesh*                                 proxyModMesh;                                              // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum>      proxyWeapon;                                               // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UIOT[0x7];                                     // 0x0421(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 proxySilencerMesh;                                         // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 proxyWeaponMesh;                                           // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(48738);
		return ptr;
	}



	void STATIC_UserConstructionScript();
	void STATIC_Turbine__FinishedFunc();
	void STATIC_Turbine__UpdateFunc();
	void STATIC_SetHelmet(class UStaticMesh* Mesh);
	void STATIC_SetPrymaryWeapon(class UStaticMesh* Mesh, class UStaticMesh* Mod_Mesh, class UStaticMesh* Silencer_Mesh);
	void STATIC_SetSecondaryWeapon(class UStaticMesh* Mesh);
	void STATIC_SetCharacterMesh(class USkeletalMesh* NewMesh);
	void STATIC_SetMaterialRenderChar(class UMaterialInterface* Material, int Index);
	void STATIC_TurbineCharacter(bool ToRight);
	void STATIC_SetGrenade(class UStaticMesh* Mesh);
	void STATIC_SetMeleeWeapon(class UStaticMesh* Mesh);
	void STATIC_UpdateRenderMesh();
	void STATIC_SetBackPack(class UStaticMesh* Mesh);
	void STATIC_ReceiveBeginPlay();
	void STATIC_Set_FOOT_Mesh(class USkeletalMesh* Mesh);
	void STATIC_Set_HANDS_Mesh(class USkeletalMesh* Mesh);
	void STATIC_Set_LEGS_Mesh(class USkeletalMesh* Mesh);
	void STATIC_Set_TORSE_Mesh(class USkeletalMesh* Mesh);
	void STATIC_UpdateBodyParts();
	void STATIC_Set_FACE_Mesh(class UStaticMesh* Mesh);
	void STATIC_ExecuteUbergraph_InventoryCharacterMainMenuRender(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
