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

// AnimBlueprintGeneratedClass Set_of_Boxes_01_2_Rig_AnimBP.Set_of_Boxes_01_2_Rig_AnimBP_C
// 0x01C8 (FullSize[0x0588] - InheritedSize[0x03C0])
class USet_of_Boxes_01_2_Rig_AnimBP_C : public UFurnitureAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A85858A148A89D1065D7628E0303B5DF;       // 0x03C8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_BB49701948139AA3BBCA2B927FAB5013; // 0x0410(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_067A08EE4B9F10DA1D166984EBDB3DD3; // 0x0448(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EFEBA35347347072023897A8D5DBA797; // 0x0518(0x0070)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(172528);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_Set_of_Boxes_01_2_Rig_AnimBP_AnimGraphNode_BlendListByBool_067A08EE4B9F10DA1D166984EBDB3DD3();
	void STATIC_ExecuteUbergraph_Set_of_Boxes_01_2_Rig_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
