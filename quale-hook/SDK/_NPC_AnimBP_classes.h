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

// AnimBlueprintGeneratedClass _NPC_AnimBP._NPC_AnimBP_C
// 0x01F8 (FullSize[0x05B0] - InheritedSize[0x03B8])
class U_NPC_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_FZWL[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0858BAD84AE1EB2605DE07A4AEE3AE7B;       // 0x03C8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2C6A87244F512FE3EFC809BE26C05977; // 0x0410(0x0128)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_050513BF4F6D4E66AC858095209004F8;       // 0x0538(0x0068)
	float                                              Speed;                                                     // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UDNY[0x4];                                     // 0x05A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABOT_CreatureBase_C*                         Creature;                                                  // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(87864);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph__NPC_AnimBP_AnimGraphNode_BlendSpacePlayer_2C6A87244F512FE3EFC809BE26C05977();
	void STATIC_BlueprintUpdateAnimation(float DeltaTimeX);
	void STATIC_BlueprintInitializeAnimation();
	void STATIC_AnimNotify_RFoot();
	void STATIC_AnimNotify_LFoot();
	void STATIC_PlayStep();
	void STATIC_ExecuteUbergraph__NPC_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
