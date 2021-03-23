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

// AnimBlueprintGeneratedClass Furniture_08_AnimBP.Furniture_08_AnimBP_C
// 0x01C8 (FullSize[0x0588] - InheritedSize[0x03C0])
class UFurniture_08_AnimBP_C : public UFurnitureAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_EDD14FE74FC063CEBBCF08AC179CC9F5;       // 0x03C8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_5DDED90646595AE2E3D511AA82EDCFBB; // 0x0410(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_245DA609469623D52352F688F37F66AB; // 0x0448(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3B17B2244C08B0A8EE9A65A2E00253CB; // 0x0518(0x0070)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(171886);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_Furniture_08_AnimBP_AnimGraphNode_BlendListByBool_245DA609469623D52352F688F37F66AB();
	void STATIC_ExecuteUbergraph_Furniture_08_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
