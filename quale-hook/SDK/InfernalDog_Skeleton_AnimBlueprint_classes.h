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

// AnimBlueprintGeneratedClass InfernalDog_Skeleton_AnimBlueprint.InfernalDog_Skeleton_AnimBlueprint_C
// 0x01F8 (FullSize[0x05B0] - InheritedSize[0x03B8])
class UInfernalDog_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_E2EF[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_42388B8F4D7890E3BE0FDCAF59025280;       // 0x03C8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5E37320347DE5A33D9A08B8DF13FD016;       // 0x0410(0x0068)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4C03BB4A40F380CA6188B6A8D1FF7E38; // 0x0478(0x0128)
	float                                              Speed;                                                     // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LU3R[0x4];                                     // 0x05A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABOT_CreatureBase_C*                         Creature;                                                  // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(91243);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_InfernalDog_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_4C03BB4A40F380CA6188B6A8D1FF7E38();
	void STATIC_BlueprintUpdateAnimation(float DeltaTimeX);
	void STATIC_BlueprintInitializeAnimation();
	void STATIC_ExecuteUbergraph_InfernalDog_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
