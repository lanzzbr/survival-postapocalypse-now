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

// AnimBlueprintGeneratedClass Set_of_Boxes_03_3_Rig_AnimBP.Set_of_Boxes_03_3_Rig_AnimBP_C
// 0x01C8 (FullSize[0x0588] - InheritedSize[0x03C0])
class USet_of_Boxes_03_3_Rig_AnimBP_C : public UFurnitureAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_DF069D2E41FF517D02F5AAAE6B68AA2B;       // 0x03C8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_F9A9816E4086DA143AD370A55F528F29; // 0x0410(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DA7EDE2B4FB395257EC30594FF92F702; // 0x0448(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_52AD245741569C446772DEA26AC8A725; // 0x0518(0x0070)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(172691);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_Set_of_Boxes_03_3_Rig_AnimBP_AnimGraphNode_BlendListByBool_DA7EDE2B4FB395257EC30594FF92F702();
	void STATIC_ExecuteUbergraph_Set_of_Boxes_03_3_Rig_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
