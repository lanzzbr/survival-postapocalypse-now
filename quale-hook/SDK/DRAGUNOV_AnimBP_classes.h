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

// AnimBlueprintGeneratedClass DRAGUNOV_AnimBP.DRAGUNOV_AnimBP_C
// 0x0130 (FullSize[0x04E8] - InheritedSize[0x03B8])
class UDRAGUNOV_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_65IA[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B286CC15402061CEAA6B849C453EA2AE;       // 0x03C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_905D9C3A4BA12862F9E5B9B27AA1F975; // 0x0410(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_57A6B7024B516169815924B17C95D9BB;       // 0x0480(0x0068)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(53784);
		return ptr;
	}



	void STATIC_ExecuteUbergraph_DRAGUNOV_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
