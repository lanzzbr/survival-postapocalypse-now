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

// AnimBlueprintGeneratedClass Furniture_15_AnimBP.Furniture_15_AnimBP_C
// 0x01C8 (FullSize[0x0588] - InheritedSize[0x03C0])
class UFurniture_15_AnimBP_C : public UFurnitureAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_31E6886444243C96FD304ABFF06B5FE0;       // 0x03C8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_7AC360FA437B7DB54797EC9D58B54FCA; // 0x0410(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_37F2C42E420F733CAFD62C837E594D83; // 0x0448(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F0130D7545BFA3F07DECA6A4B6D0FE68; // 0x0518(0x0070)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(171949);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_Furniture_15_AnimBP_AnimGraphNode_BlendListByBool_37F2C42E420F733CAFD62C837E594D83();
	void STATIC_ExecuteUbergraph_Furniture_15_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
