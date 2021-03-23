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

// AnimBlueprintGeneratedClass InfernalDog_Skeleton_AnimBlueprint_DEAD.InfernalDog_Skeleton_AnimBlueprint_DEAD_C
// 0x00D0 (FullSize[0x0488] - InheritedSize[0x03B8])
class UInfernalDog_Skeleton_AnimBlueprint_DEAD_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_DQV1[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_118211934E1960AE51541882874ED4A8;       // 0x03C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_35CE693C43EDF195AF2E7F9FBFCC7419; // 0x0410(0x0070)
	class UAnimSequenceBase*                           RandomDeathAnim;                                           // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(91234);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_InfernalDog_Skeleton_AnimBlueprint_DEAD_AnimGraphNode_SequencePlayer_35CE693C43EDF195AF2E7F9FBFCC7419();
	void STATIC_BlueprintInitializeAnimation();
	void STATIC_ExecuteUbergraph_InfernalDog_Skeleton_AnimBlueprint_DEAD(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
