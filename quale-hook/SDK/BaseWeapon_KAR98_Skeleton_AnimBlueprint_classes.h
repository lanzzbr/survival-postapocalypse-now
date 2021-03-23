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

// AnimBlueprintGeneratedClass BaseWeapon_KAR98_Skeleton_AnimBlueprint.BaseWeapon_KAR98_Skeleton_AnimBlueprint_C
// 0x0130 (FullSize[0x04E8] - InheritedSize[0x03B8])
class UBaseWeapon_KAR98_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_ZGOK[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5D9DFB2943D9C1FF07FA67A3DB0A94E9;       // 0x03C8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_25C2AFC64094123B898F5DA61BF00A62;       // 0x0410(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12842F7C4A14B6D01ACAF3A95E3D3665; // 0x0478(0x0070)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(92544);
		return ptr;
	}



	void STATIC_ExecuteUbergraph_BaseWeapon_KAR98_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
