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

// AnimBlueprintGeneratedClass AK47_Base_Skeleton_AnimBP.AK47_Base_Skeleton_AnimBP_C
// 0x0130 (FullSize[0x04E8] - InheritedSize[0x03B8])
class UAK47_Base_Skeleton_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_QX8B[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_596F8F00483D23792190B0A9B0E792A0;       // 0x03C8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9F88CD06416B909A2CE288AE01243BA1;       // 0x0410(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FD50598142B6A917A8D1479A6E57EA0A; // 0x0478(0x0070)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(53604);
		return ptr;
	}



	void STATIC_ExecuteUbergraph_AK47_Base_Skeleton_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
