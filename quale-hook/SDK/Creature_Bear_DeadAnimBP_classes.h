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

// AnimBlueprintGeneratedClass Creature_Bear_DeadAnimBP.Creature_Bear_DeadAnimBP_C
// 0x00C8 (FullSize[0x0480] - InheritedSize[0x03B8])
class UCreature_Bear_DeadAnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_71JG[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6495983F4B7179A1F0BEE1A50A21100A;       // 0x03C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A623E9D34B692243646AD8B6A6DE9652; // 0x0410(0x0070)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(92822);
		return ptr;
	}



	void STATIC_ExecuteUbergraph_Creature_Bear_DeadAnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
