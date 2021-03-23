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

// AnimBlueprintGeneratedClass Beretta_AnimBP.Beretta_AnimBP_C
// 0x0271 (FullSize[0x0629] - InheritedSize[0x03B8])
class UBeretta_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_PKVJ[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_20E1EDAE4E7D38CCCCBF388460BF060D;       // 0x03C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_01970B8C4B36FA82E4B137A745A627D3; // 0x0410(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5E45079B4505D79F2C0FC199F3469547;       // 0x0480(0x0068)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_10BF5B774F1D33A4EB4851A13F0C01D4; // 0x04E8(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F409103A483D05AB537D49B46DE41734; // 0x05B8(0x0070)
	bool                                               lastShoot;                                                 // 0x0628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(74682);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_Beretta_AnimBP_AnimGraphNode_BlendListByBool_10BF5B774F1D33A4EB4851A13F0C01D4();
	void STATIC_ExecuteUbergraph_Beretta_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
