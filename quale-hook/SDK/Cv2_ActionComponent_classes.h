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

// BlueprintGeneratedClass Cv2_ActionComponent.Cv2_ActionComponent_C
// 0x0020 (FullSize[0x0110] - InheritedSize[0x00F0])
class UCv2_ActionComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00F0(0x0008) (Transient, DuplicateTransient)
	class ACv2_Character_C*                            Character;                                                 // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABOT_CreatureBase_C*>                 FollowNPCs;                                                // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(58295);
		return ptr;
	}



	void STATIC_CheckStateNPCs();
	void STATIC_DropMeatToCreatures();
	void STATIC_Action(class ACv2_LootBP_C* LootObj);
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_Cv2_ActionComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
