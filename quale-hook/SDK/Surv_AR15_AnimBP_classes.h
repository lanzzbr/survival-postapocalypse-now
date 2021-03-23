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

// AnimBlueprintGeneratedClass Surv_AR15_AnimBP.Surv_AR15_AnimBP_C
// 0x0130 (FullSize[0x04E8] - InheritedSize[0x03B8])
class USurv_AR15_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_JBWH[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1C695CB949FF7C35C7C9EA847821E3FB;       // 0x03C8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_33240CAA48D46D21D70BC796DB6B1225;       // 0x0410(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_06F1586E40E07F7D3D058689AA476642; // 0x0478(0x0070)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(53692);
		return ptr;
	}



	void STATIC_ExecuteUbergraph_Surv_AR15_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
