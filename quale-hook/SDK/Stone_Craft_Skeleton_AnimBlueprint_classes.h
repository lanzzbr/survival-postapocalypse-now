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

// AnimBlueprintGeneratedClass Stone_Craft_Skeleton_AnimBlueprint.Stone_Craft_Skeleton_AnimBlueprint_C
// 0x0209 (FullSize[0x05C1] - InheritedSize[0x03B8])
class UStone_Craft_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_9BCL[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_67EB7CE741E478CFF98BE2AB053EF0FD;       // 0x03C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6F2B19DA47CADC34596E90BB8ED9D60B; // 0x0410(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1A1E35404AE9FA4F2258AC8B748C17B2; // 0x0480(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1743764E44867E7BD8041BA064603ACC; // 0x04F0(0x00D0)
	bool                                               isWorking;                                                 // 0x05C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(74596);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_Stone_Craft_Skeleton_AnimBlueprint_AnimGraphNode_BlendListByBool_1743764E44867E7BD8041BA064603ACC();
	void STATIC_ExecuteUbergraph_Stone_Craft_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
