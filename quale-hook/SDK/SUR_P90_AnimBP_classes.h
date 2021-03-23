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

// AnimBlueprintGeneratedClass SUR_P90_AnimBP.SUR_P90_AnimBP_C
// 0x0130 (FullSize[0x04E8] - InheritedSize[0x03B8])
class USUR_P90_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_I987[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D37080E34349A53F01751F8E041CDC4F;       // 0x03C8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3AB7976B47AAEF2FEC0B09AE9E23B420;       // 0x0410(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DB40540F40EE962BDEE88CB725F1785A; // 0x0478(0x0070)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(92530);
		return ptr;
	}



	void STATIC_ExecuteUbergraph_SUR_P90_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
