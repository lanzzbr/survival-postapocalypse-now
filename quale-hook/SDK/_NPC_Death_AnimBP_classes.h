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

// AnimBlueprintGeneratedClass _NPC_Death_AnimBP._NPC_Death_AnimBP_C
// 0x00C8 (FullSize[0x0480] - InheritedSize[0x03B8])
class U_NPC_Death_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_3ICL[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_ACE7D07B4A48C39BD0F1E9B6125D6FB9;       // 0x03C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8ACBE76E40F19F470B182AAA0D2BB983; // 0x0410(0x0070)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(87858);
		return ptr;
	}



	void STATIC_ExecuteUbergraph__NPC_Death_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
