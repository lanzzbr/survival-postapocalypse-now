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

// AnimBlueprintGeneratedClass SK_Crazy_DeadAnimBP.SK_Crazy_DeadAnimBP_C
// 0x00C8 (FullSize[0x0480] - InheritedSize[0x03B8])
class USK_Crazy_DeadAnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_FXUX[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B31D33D148D8881CB26FABA001FA4F7F;       // 0x03C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F63787AB489B221AC4636EBE4CADF176; // 0x0410(0x0070)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(94486);
		return ptr;
	}



	void STATIC_ExecuteUbergraph_SK_Crazy_DeadAnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
