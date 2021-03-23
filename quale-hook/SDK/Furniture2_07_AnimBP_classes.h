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

// AnimBlueprintGeneratedClass Furniture2_07_AnimBP.Furniture2_07_AnimBP_C
// 0x01C8 (FullSize[0x0588] - InheritedSize[0x03C0])
class UFurniture2_07_AnimBP_C : public UFurnitureAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C921FB454567AA15AB0DA4924438FECD;       // 0x03C8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_5F0CB3124ADD94798A3EC2BCA8EAB0DE; // 0x0410(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D44A83444C42DCC8D2CFD893DB77B058; // 0x0448(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8AC6B32D451F26109AEEF5BF2930592A; // 0x0518(0x0070)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(171616);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_Furniture2_07_AnimBP_AnimGraphNode_BlendListByBool_D44A83444C42DCC8D2CFD893DB77B058();
	void STATIC_ExecuteUbergraph_Furniture2_07_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
