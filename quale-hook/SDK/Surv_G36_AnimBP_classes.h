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

// AnimBlueprintGeneratedClass Surv_G36_AnimBP.Surv_G36_AnimBP_C
// 0x0130 (FullSize[0x04E8] - InheritedSize[0x03B8])
class USurv_G36_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_YGJ5[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_41AB73B14CE0E35473E1C7B8C93117D9;       // 0x03C8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1B909AE0427EE5AC64377DBB66446C21;       // 0x0410(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_05012EE84C43DD6BF9F90A95672CF2B5; // 0x0478(0x0070)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(53632);
		return ptr;
	}



	void STATIC_ExecuteUbergraph_Surv_G36_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
