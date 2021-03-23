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

// AnimBlueprintGeneratedClass SCORPION_Base_AnimBP.SCORPION_Base_AnimBP_C
// 0x0130 (FullSize[0x04E8] - InheritedSize[0x03B8])
class USCORPION_Base_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_OW6V[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_779960EA4BF4E2381C135A9C644C514C;       // 0x03C8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BCB8B54F49C8379C02309B8EA7E218B1;       // 0x0410(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CE59BDD64EC00CFE15D09A9BC3D1EEDB; // 0x0478(0x0070)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(92523);
		return ptr;
	}



	void STATIC_ExecuteUbergraph_SCORPION_Base_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
