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

// AnimBlueprintGeneratedClass ABP_AnimalsWolf_Wolf.ABP_AnimalsWolf_Wolf_C
// 0x0E22 (FullSize[0x11DA] - InheritedSize[0x03B8])
class UABP_AnimalsWolf_Wolf_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_HBS2[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_AE91BC2D4B9A957F3C0E7B8C05FA4211;       // 0x03C8(0x0048)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_3E6B773D4486BAD962381ABB6581647B; // 0x0410(0x0078)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_BE3907FB4C68AC1D703A0FA74D47F488; // 0x0488(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A87DBF714A44806032621E8DB8BE9C34; // 0x0500(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_CustomTransitionResult_3FFC3DBF45A2F159C5F3A98D39F73886; // 0x0570(0x0048)
	unsigned char                                      UnknownData_ODAL[0x8];                                     // 0x05B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5E568E9A4F8C78798C50C7A711C74094; // 0x05C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1E62AC104AB1DD70C26C058779A708DB; // 0x0640(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ABBD90AF4C487FF5C6F44D9282F1BFC3; // 0x06C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7B5843DB4952D0F4F14781B707FCDABD; // 0x0740(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B0ABE4314638BBF51791388A5345F087; // 0x07C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1C287C424D98A1D2075A6E952A6471B7; // 0x0840(0x0080)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_36FDC5FF4AFBD012F60C8985BDF24791; // 0x08C0(0x0078)
	struct FAnimNode_TransitionPoseEvaluator           AnimGraphNode_TransitionPoseEvaluator_A27B930A4D6C945EDFA669A99C96C224; // 0x0938(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_017C7DD14BA2DC62C10FE29C5F9A9FD0; // 0x09B0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_CustomTransitionResult_B35D701848AF37C0EE40009A9CF1E80C; // 0x0A20(0x0048)
	unsigned char                                      UnknownData_4I44[0x8];                                     // 0x0A68(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3399611A4CF3CA73BAE519AB3F35C90E; // 0x0A70(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1A0281AF421E9845657E4C9CB960CCF9; // 0x0AF0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C4109EAB4BDE13A7DA5B049B83A515AF; // 0x0B70(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4ADA348649994885030AA8B9D04064B3; // 0x0BE0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F74857714EF18AE07F4903897A520830; // 0x0C28(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2F647B34438A9037FA0DCB8CE34A9F9D; // 0x0C98(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_CAE148D84314AD784B483E8556E59925; // 0x0CE0(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_02DC78DA426F98E8C11E8383B5329AD4; // 0x0E08(0x0048)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_F41810D6462F210BCD3EF5BDE1B010C3; // 0x0E50(0x0090)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_34181BAC4A00A6123B194AB7380B980F; // 0x0EE0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2F31AACE4C5DF53D9A649D90608B4D78; // 0x0F28(0x00D8)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_1FFF150C415491B5E6A4548ED485A0C7; // 0x1000(0x0158)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6652590B46E859900EE56B862DB0A8F2;       // 0x1158(0x0068)
	float                                              ABP_Speed;                                                 // 0x11C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ABP_MoveForward;                                           // 0x11C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ABP_MoveRight;                                             // 0x11C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ABP_LookUp;                                                // 0x11CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ABP_Turn;                                                  // 0x11D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaTimeVar;                                              // 0x11D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsFalling;                                                 // 0x11D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Attack;                                                    // 0x11D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(108887);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsWolf_Wolf_AnimGraphNode_TransitionResult_ABBD90AF4C487FF5C6F44D9282F1BFC3();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsWolf_Wolf_AnimGraphNode_TransitionResult_7B5843DB4952D0F4F14781B707FCDABD();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsWolf_Wolf_AnimGraphNode_TransitionResult_1E62AC104AB1DD70C26C058779A708DB();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsWolf_Wolf_AnimGraphNode_TransitionResult_B0ABE4314638BBF51791388A5345F087();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsWolf_Wolf_AnimGraphNode_TransitionResult_1C287C424D98A1D2075A6E952A6471B7();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsWolf_Wolf_AnimGraphNode_TransitionResult_3399611A4CF3CA73BAE519AB3F35C90E();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsWolf_Wolf_AnimGraphNode_TransitionResult_1A0281AF421E9845657E4C9CB960CCF9();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsWolf_Wolf_AnimGraphNode_TransitionResult_5E568E9A4F8C78798C50C7A711C74094();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsWolf_Wolf_AnimGraphNode_BlendSpacePlayer_CAE148D84314AD784B483E8556E59925();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsWolf_Wolf_AnimGraphNode_RotationOffsetBlendSpace_1FFF150C415491B5E6A4548ED485A0C7();
	void STATIC_BlueprintUpdateAnimation(float DeltaTimeX);
	void STATIC_AnimNotify_AttackStart();
	void STATIC_AnimNotify_AttackEnd();
	void STATIC_ExecuteUbergraph_ABP_AnimalsWolf_Wolf(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
