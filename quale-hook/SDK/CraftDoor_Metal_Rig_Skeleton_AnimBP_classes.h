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

// AnimBlueprintGeneratedClass CraftDoor_Metal_Rig_Skeleton_AnimBP.CraftDoor_Metal_Rig_Skeleton_AnimBP_C
// 0x0209 (FullSize[0x05C1] - InheritedSize[0x03B8])
class UCraftDoor_Metal_Rig_Skeleton_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_3KGL[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C51C011A46FCE2762D96EAA87D425405;       // 0x03C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_161BEB1B49EC982AE7D1608317CAE666; // 0x0410(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4EA21ACF45642B8650A713BF4BA3CD0F; // 0x0480(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B820D354445ABF491A6BF28FD21F5343; // 0x04F0(0x00D0)
	bool                                               IsOpen;                                                    // 0x05C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(49339);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_CraftDoor_Metal_Rig_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_B820D354445ABF491A6BF28FD21F5343();
	void STATIC_ExecuteUbergraph_CraftDoor_Metal_Rig_Skeleton_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
