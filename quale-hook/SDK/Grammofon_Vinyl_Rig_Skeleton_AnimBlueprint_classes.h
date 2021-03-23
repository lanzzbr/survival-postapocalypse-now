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

// AnimBlueprintGeneratedClass Grammofon_Vinyl_Rig_Skeleton_AnimBlueprint.Grammofon_Vinyl_Rig_Skeleton_AnimBlueprint_C
// 0x0218 (FullSize[0x05D0] - InheritedSize[0x03B8])
class UGrammofon_Vinyl_Rig_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_GBA7[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E91AAB804E802DC194F484A93A34B36F;       // 0x03C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_895FC2014676F1BB029550978B8A7438; // 0x0410(0x0070)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0592796B48355961CA61F298CF48AB5C; // 0x0480(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_67897DC243E5356A1194F4A41D4E3C04; // 0x0538(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_9BC055C849C9990F079564ACE39CBFE3; // 0x0580(0x0048)
	bool                                               isPlay;                                                    // 0x05C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_E4LK[0x3];                                     // 0x05C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Yaw;                                                       // 0x05CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(87655);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_Grammofon_Vinyl_Rig_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_0592796B48355961CA61F298CF48AB5C();
	void STATIC_BlueprintUpdateAnimation(float DeltaTimeX);
	void STATIC_ExecuteUbergraph_Grammofon_Vinyl_Rig_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
