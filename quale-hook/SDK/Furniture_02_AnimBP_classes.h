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

// AnimBlueprintGeneratedClass Furniture_02_AnimBP.Furniture_02_AnimBP_C
// 0x01C8 (FullSize[0x0588] - InheritedSize[0x03C0])
class UFurniture_02_AnimBP_C : public UFurnitureAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_EF933A5A492D14F1B3A8C38D8CC8DB82;       // 0x03C8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_5D16519F4F4CF3BE8C06E28FEB91BBC5; // 0x0410(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_59E82FA44DFF62E814060F827BAABA56; // 0x0448(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A640A40A457E7716F39088A550A470D1; // 0x0518(0x0070)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(171787);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_Furniture_02_AnimBP_AnimGraphNode_BlendListByBool_59E82FA44DFF62E814060F827BAABA56();
	void STATIC_ExecuteUbergraph_Furniture_02_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
