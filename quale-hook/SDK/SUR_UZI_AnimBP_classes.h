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

// AnimBlueprintGeneratedClass SUR_UZI_AnimBP.SUR_UZI_AnimBP_C
// 0x0130 (FullSize[0x04E8] - InheritedSize[0x03B8])
class USUR_UZI_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_22N8[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_EC3AD0D74D6309672DB474BBF5F31947;       // 0x03C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6F3260E242579EC702FFC8B1EE5955EB; // 0x0410(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3CFAD03C4C79FEFE964547A7D64E77B7;       // 0x0480(0x0068)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(92516);
		return ptr;
	}



	void STATIC_ExecuteUbergraph_SUR_UZI_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
