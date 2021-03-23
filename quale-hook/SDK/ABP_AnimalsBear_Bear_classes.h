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

// AnimBlueprintGeneratedClass ABP_AnimalsBear_Bear.ABP_AnimalsBear_Bear_C
// 0x0A62 (FullSize[0x0E1A] - InheritedSize[0x03B8])
class UABP_AnimalsBear_Bear_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_PR4N[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_86B0F5E740887AE08B375BB575BB0395;       // 0x03C8(0x0048)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_2FEE535441FBB7341EB2B98AD3502629; // 0x0410(0x0158)
	unsigned char                                      UnknownData_8L0R[0x8];                                     // 0x0568(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_68261D834E920027326D37876E661C59; // 0x0570(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8BB17E9A42CFDEF2F6B4FDB4C5EBF9A5; // 0x05F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3E15A6104C0104D1AFF656903FB5917F; // 0x0670(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_40E71F224D04BB118565A880D09F9E41; // 0x06F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5A32989A4F551935B28D3481B123646A; // 0x0770(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4DDB33C546D13B20DB7D39A443DDDF5F; // 0x07F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ABBBC7944CA7FD4E182B8FAB5A5D616E; // 0x0870(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_759329CF4DED97B8F29DC4BD88F4129D; // 0x08F0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B05662914CF572DDFD1AD0AC332BC6F0; // 0x0970(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6EDD9FF84DD26AE1E5D137821815D5D2; // 0x09E0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_ABDF49FC4B8B986D96E28F9215506A95; // 0x0A28(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_14B57406479D946F3D43579A1513367A; // 0x0B50(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FCA1FEA84AA2AE76516E6DA3BE36A3C5; // 0x0B98(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2D3D0D0B466D6A91F0A7D28D69D3488E; // 0x0C08(0x0048)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_13EACB9A4173883271182091EF71F33B; // 0x0C50(0x0090)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_928FAF9A44243A4F0CD16183E3FB40A2; // 0x0CE0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4A73819F41EBEC1FAC4D248E815C131A; // 0x0D28(0x00D8)
	float                                              ABP_Speed;                                                 // 0x0E00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ABP_MoveForward;                                           // 0x0E04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ABP_MoveRight;                                             // 0x0E08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ABP_LookUp;                                                // 0x0E0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ABP_Turn;                                                  // 0x0E10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaTimeVar;                                              // 0x0E14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsFalling;                                                 // 0x0E18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Attack;                                                    // 0x0E19(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(108281);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsBear_Bear_AnimGraphNode_TransitionResult_3E15A6104C0104D1AFF656903FB5917F();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsBear_Bear_AnimGraphNode_TransitionResult_8BB17E9A42CFDEF2F6B4FDB4C5EBF9A5();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsBear_Bear_AnimGraphNode_TransitionResult_40E71F224D04BB118565A880D09F9E41();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsBear_Bear_AnimGraphNode_TransitionResult_5A32989A4F551935B28D3481B123646A();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsBear_Bear_AnimGraphNode_TransitionResult_4DDB33C546D13B20DB7D39A443DDDF5F();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsBear_Bear_AnimGraphNode_TransitionResult_ABBBC7944CA7FD4E182B8FAB5A5D616E();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsBear_Bear_AnimGraphNode_TransitionResult_759329CF4DED97B8F29DC4BD88F4129D();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsBear_Bear_AnimGraphNode_BlendSpacePlayer_ABDF49FC4B8B986D96E28F9215506A95();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsBear_Bear_AnimGraphNode_TransitionResult_68261D834E920027326D37876E661C59();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsBear_Bear_AnimGraphNode_RotationOffsetBlendSpace_2FEE535441FBB7341EB2B98AD3502629();
	void STATIC_BlueprintUpdateAnimation(float DeltaTimeX);
	void STATIC_AnimNotify_AttackStart();
	void STATIC_AnimNotify_AttackEnd();
	void STATIC_ExecuteUbergraph_ABP_AnimalsBear_Bear(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
