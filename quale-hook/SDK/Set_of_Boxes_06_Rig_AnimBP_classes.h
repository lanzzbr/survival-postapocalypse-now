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

// AnimBlueprintGeneratedClass Set_of_Boxes_06_Rig_AnimBP.Set_of_Boxes_06_Rig_AnimBP_C
// 0x01C8 (FullSize[0x0588] - InheritedSize[0x03C0])
class USet_of_Boxes_06_Rig_AnimBP_C : public UFurnitureAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_CFF75E994AA09A367B5FD89D1AD3B1C3;       // 0x03C8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_D2210650416914901D2F12810F765157; // 0x0410(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6B00225C49C23FAB25E4D59447CF8D1D; // 0x0448(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_909A3B2D4ABFA5B82EF134AC64E5F512; // 0x0518(0x0070)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(172718);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_Set_of_Boxes_06_Rig_AnimBP_AnimGraphNode_BlendListByBool_6B00225C49C23FAB25E4D59447CF8D1D();
	void STATIC_ExecuteUbergraph_Set_of_Boxes_06_Rig_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
