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

// AnimBlueprintGeneratedClass ElevatorAnimBP.ElevatorAnimBP_C
// 0x0209 (FullSize[0x05C1] - InheritedSize[0x03B8])
class UElevatorAnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_MPRF[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8760A65F49E114D599CE7482423A07ED;       // 0x03C8(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_556C63E9452DE690DA3F5AB82D6D9BAF; // 0x0410(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BBC83C6C404CC4DC5B6F7F8F7146D6AE; // 0x04E0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E02EECCE427B348D836CE092B5FBC44B; // 0x0550(0x0070)
	bool                                               IsOpen;                                                    // 0x05C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(90985);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ElevatorAnimBP_AnimGraphNode_BlendListByBool_556C63E9452DE690DA3F5AB82D6D9BAF();
	void STATIC_ExecuteUbergraph_ElevatorAnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
