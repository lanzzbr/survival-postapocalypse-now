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

// AnimBlueprintGeneratedClass Set_of_Boxes_04_Rig_AnimBP.Set_of_Boxes_04_Rig_AnimBP_C
// 0x01C8 (FullSize[0x0588] - InheritedSize[0x03C0])
class USet_of_Boxes_04_Rig_AnimBP_C : public UFurnitureAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_CFFE884C4E9C38D2AA2B60A4AC5F709D;       // 0x03C8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_C3294F234105189C44BD609273244064; // 0x0410(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D2417A8A4BB4D50AB79B399110DB835D; // 0x0448(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4CC2CC804BFEF55AF740729F7AC82815; // 0x0518(0x0070)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(172700);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_Set_of_Boxes_04_Rig_AnimBP_AnimGraphNode_BlendListByBool_D2417A8A4BB4D50AB79B399110DB835D();
	void STATIC_ExecuteUbergraph_Set_of_Boxes_04_Rig_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
