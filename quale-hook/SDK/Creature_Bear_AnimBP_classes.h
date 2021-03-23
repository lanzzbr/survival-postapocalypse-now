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

// AnimBlueprintGeneratedClass Creature_Bear_AnimBP.Creature_Bear_AnimBP_C
// 0x01F4 (FullSize[0x05AC] - InheritedSize[0x03B8])
class UCreature_Bear_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_WIXY[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D6E71E054CCFED23007166B7B604F7D8;       // 0x03C8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_53EE996A4A868532E1289D9E8E6A48B9; // 0x0410(0x0128)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_11C2792A40EF60307E76CB881811F0CC;       // 0x0538(0x0068)
	class ABOT_CreatureBase_C*                         Creature;                                                  // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Speed;                                                     // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(92828);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_Creature_Bear_AnimBP_AnimGraphNode_BlendSpacePlayer_53EE996A4A868532E1289D9E8E6A48B9();
	void STATIC_BlueprintUpdateAnimation(float DeltaTimeX);
	void STATIC_BlueprintInitializeAnimation();
	void STATIC_ExecuteUbergraph_Creature_Bear_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
