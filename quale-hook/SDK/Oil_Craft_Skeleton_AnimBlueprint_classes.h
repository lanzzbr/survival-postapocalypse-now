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

// AnimBlueprintGeneratedClass Oil_Craft_Skeleton_AnimBlueprint.Oil_Craft_Skeleton_AnimBlueprint_C
// 0x0209 (FullSize[0x05C1] - InheritedSize[0x03B8])
class UOil_Craft_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_OL52[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9EAD990D43EC4644709F11BEF9DBDCF3;       // 0x03C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_66BAD4D142001D99E776C3BA85651CD7; // 0x0410(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CAF3D3D04D5E39396A8748B498AD2975; // 0x0480(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6EFEF2F447D66BBA70C5A089723A241E; // 0x04F0(0x00D0)
	bool                                               isWorking;                                                 // 0x05C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(74580);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_Oil_Craft_Skeleton_AnimBlueprint_AnimGraphNode_BlendListByBool_6EFEF2F447D66BBA70C5A089723A241E();
	void STATIC_ExecuteUbergraph_Oil_Craft_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
