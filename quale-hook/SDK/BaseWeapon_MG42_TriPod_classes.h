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

// AnimBlueprintGeneratedClass BaseWeapon_MG42_TriPod.BaseWeapon_MG42_TriPod_C
// 0x0130 (FullSize[0x04E8] - InheritedSize[0x03B8])
class UBaseWeapon_MG42_TriPod_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_8WXL[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3CD4151A4993316FB738F997AF226887;       // 0x03C8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C239B903491B28808F086BBFF44741F9;       // 0x0410(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4CE3D751419EF0556EFFDE8A003C3A4A; // 0x0478(0x0070)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(74664);
		return ptr;
	}



	void STATIC_ExecuteUbergraph_BaseWeapon_MG42_TriPod(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
