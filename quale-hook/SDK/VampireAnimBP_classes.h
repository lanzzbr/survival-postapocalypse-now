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

// AnimBlueprintGeneratedClass VampireAnimBP.VampireAnimBP_C
// 0x01F4 (FullSize[0x05AC] - InheritedSize[0x03B8])
class UVampireAnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_6ZBC[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A09FBABD43130D16546256B42FC5BC32;       // 0x03C8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3C24971844657B6BF5A84F8F91E3FF25; // 0x0410(0x0128)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E53DBD4A4C05AA489F9930A4678C1995;       // 0x0538(0x0068)
	class ABOT_CreatureBase_C*                         Creature;                                                  // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Speed;                                                     // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(91403);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_VampireAnimBP_AnimGraphNode_BlendSpacePlayer_3C24971844657B6BF5A84F8F91E3FF25();
	void STATIC_BlueprintUpdateAnimation(float DeltaTimeX);
	void STATIC_BlueprintInitializeAnimation();
	void STATIC_ExecuteUbergraph_VampireAnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
