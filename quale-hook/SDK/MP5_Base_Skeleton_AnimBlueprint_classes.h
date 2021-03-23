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

// AnimBlueprintGeneratedClass MP5_Base_Skeleton_AnimBlueprint.MP5_Base_Skeleton_AnimBlueprint_C
// 0x0130 (FullSize[0x04E8] - InheritedSize[0x03B8])
class UMP5_Base_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_F4K0[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E2A63DF84A3BE99CECF663B2C83AF4F7;       // 0x03C8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E2CE79384D79372033F82AB49C1DE369;       // 0x0410(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F297D8704DC05E4AA6E0AEAFCC3DDC2C; // 0x0478(0x0070)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(92537);
		return ptr;
	}



	void STATIC_ExecuteUbergraph_MP5_Base_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
