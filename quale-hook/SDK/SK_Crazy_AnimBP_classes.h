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

// AnimBlueprintGeneratedClass SK_Crazy_AnimBP.SK_Crazy_AnimBP_C
// 0x01F8 (FullSize[0x05B0] - InheritedSize[0x03B8])
class USK_Crazy_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_9A26[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_51B6E6C2494AF8113AD022A488EA5EF8;       // 0x03C8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_89AA85BB4AEEA25ADFD4D68745B55203; // 0x0410(0x0128)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A4DA092A4A83BA915993738CC8A70BDE;       // 0x0538(0x0068)
	float                                              Speed;                                                     // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GI7W[0x4];                                     // 0x05A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABOT_CreatureBase_C*                         Creature;                                                  // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(56550);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crazy_AnimBP_AnimGraphNode_BlendSpacePlayer_89AA85BB4AEEA25ADFD4D68745B55203();
	void STATIC_BlueprintUpdateAnimation(float DeltaTimeX);
	void STATIC_BlueprintInitializeAnimation();
	void STATIC_ExecuteUbergraph_SK_Crazy_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
