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

// AnimBlueprintGeneratedClass M249_AnimBP.M249_AnimBP_C
// 0x0130 (FullSize[0x04E8] - InheritedSize[0x03B8])
class UM249_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_YQWI[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8EA3F0474E73EE088422DB9746FF50DE;       // 0x03C8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2B412F074DF176A2D56617BBA6E77B47;       // 0x0410(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DCD5782C42581AD05F2CF5BDAEE40AB5; // 0x0478(0x0070)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(53685);
		return ptr;
	}



	void STATIC_ExecuteUbergraph_M249_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
