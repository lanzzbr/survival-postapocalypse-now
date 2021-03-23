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

// AnimBlueprintGeneratedClass Set_of_Boxes_03_Rig_AnimBP.Set_of_Boxes_03_Rig_AnimBP_C
// 0x01C8 (FullSize[0x0588] - InheritedSize[0x03C0])
class USet_of_Boxes_03_Rig_AnimBP_C : public UFurnitureAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_ACC7152047CA97CFB27DF08FBD97D456;       // 0x03C8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_0F7304E14527CC323BECA29CB30650D4; // 0x0410(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A553E73748413DDE0E32C7A4FE0D732E; // 0x0448(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_21D690E7403C6336B696BA9B9480DB83; // 0x0518(0x0070)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(172682);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_Set_of_Boxes_03_Rig_AnimBP_AnimGraphNode_BlendListByBool_A553E73748413DDE0E32C7A4FE0D732E();
	void STATIC_ExecuteUbergraph_Set_of_Boxes_03_Rig_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
