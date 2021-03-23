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

// AnimBlueprintGeneratedClass StalevarkaAnimBP.StalevarkaAnimBP_C
// 0x0130 (FullSize[0x04E8] - InheritedSize[0x03B8])
class UStalevarkaAnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_84OU[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_453934E048770CFCD6A781B8A1829734;       // 0x03C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1E3E1DFD4997997B2E26AE99964AAAEF; // 0x0410(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_845264664D8709C1D00F20BAEBD77CF3;       // 0x0480(0x0068)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(39791);
		return ptr;
	}



	void STATIC_ExecuteUbergraph_StalevarkaAnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
