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

// AnimBlueprintGeneratedClass GhoulDeathAnimBP.GhoulDeathAnimBP_C
// 0x00D0 (FullSize[0x0488] - InheritedSize[0x03B8])
class UGhoulDeathAnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_VL1R[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0A74ED2B4D4D95B852512F9DAC209375;       // 0x03C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E91F2F51404CBCF7A817C4906884B09F; // 0x0410(0x0070)
	class UAnimSequenceBase*                           RandomDeathAnim;                                           // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(107481);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_GhoulDeathAnimBP_AnimGraphNode_SequencePlayer_E91F2F51404CBCF7A817C4906884B09F();
	void STATIC_BlueprintInitializeAnimation();
	void STATIC_ExecuteUbergraph_GhoulDeathAnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
