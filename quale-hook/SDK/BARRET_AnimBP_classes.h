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

// AnimBlueprintGeneratedClass BARRET_AnimBP.BARRET_AnimBP_C
// 0x0130 (FullSize[0x04E8] - InheritedSize[0x03B8])
class UBARRET_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_JE63[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8FE7D2AA4F18C6882B3F948D1532A140;       // 0x03C8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4F13C20F4612550B664EF49FE6D14C97;       // 0x0410(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D83717BC4D97100A878102829CDDF1AC; // 0x0478(0x0070)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(39833);
		return ptr;
	}



	void STATIC_ExecuteUbergraph_BARRET_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
