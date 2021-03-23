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

// AnimBlueprintGeneratedClass Sawmill_Door_AnimBP.Sawmill_Door_AnimBP_C
// 0x0209 (FullSize[0x05C1] - InheritedSize[0x03B8])
class USawmill_Door_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_7CPN[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9DE1D75D42814DB56249EEA66D1F3ED1;       // 0x03C8(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_450FF0AD482D5BD28B56FAA566BB1B9D; // 0x0410(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4C8BE3E84179FD7C32C6FC87AB8AEA18; // 0x04E0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C9BEB0E54ED860612281A8B41CE3E74B; // 0x0550(0x0070)
	bool                                               IsOpen;                                                    // 0x05C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(100668);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_Sawmill_Door_AnimBP_AnimGraphNode_BlendListByBool_450FF0AD482D5BD28B56FAA566BB1B9D();
	void STATIC_ExecuteUbergraph_Sawmill_Door_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
