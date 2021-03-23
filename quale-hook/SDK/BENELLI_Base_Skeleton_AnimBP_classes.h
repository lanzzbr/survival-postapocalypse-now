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

// AnimBlueprintGeneratedClass BENELLI_Base_Skeleton_AnimBP.BENELLI_Base_Skeleton_AnimBP_C
// 0x0130 (FullSize[0x04E8] - InheritedSize[0x03B8])
class UBENELLI_Base_Skeleton_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_7SXJ[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1177E1DA4FE6F806227A25ADB989B057;       // 0x03C8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EE3FCEB64EC90EAE0F5FAD9129A4D76C;       // 0x0410(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5764FCF44E7BE2C1F43E4592B965E51C; // 0x0478(0x0070)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(53651);
		return ptr;
	}



	void STATIC_ExecuteUbergraph_BENELLI_Base_Skeleton_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
