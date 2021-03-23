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

// AnimBlueprintGeneratedClass BaseWeapon_MK2_Grenade_Skeleton_AnimBlueprint.BaseWeapon_MK2_Grenade_Skeleton_AnimBlueprint_C
// 0x0130 (FullSize[0x04E8] - InheritedSize[0x03B8])
class UBaseWeapon_MK2_Grenade_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_U5PL[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_46A301FA4D87462DCB8D83A5305E835D;       // 0x03C8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_251DF65D474EFD71D9F6BF81EC2ED09A;       // 0x0410(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_83CBAD5241DE43D07499CEB6D43BB1F2; // 0x0478(0x0070)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(39807);
		return ptr;
	}



	void STATIC_ExecuteUbergraph_BaseWeapon_MK2_Grenade_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
