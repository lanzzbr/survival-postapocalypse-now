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

// AnimBlueprintGeneratedClass _RenderCharacterAnimBP._RenderCharacterAnimBP_C
// 0x00D0 (FullSize[0x0488] - InheritedSize[0x03B8])
class U_RenderCharacterAnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_JU96[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_80E374FA4CC81414E2D8BFA21B89BAB4;       // 0x03C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4F6DAC5049658ABB16E953A9F41E37F3; // 0x0410(0x0070)
	class UAnimSequence*                               IdleAnimation;                                             // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(87976);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph__RenderCharacterAnimBP_AnimGraphNode_SequencePlayer_4F6DAC5049658ABB16E953A9F41E37F3();
	void STATIC_ExecuteUbergraph__RenderCharacterAnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
