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

// AnimBlueprintGeneratedClass MI-8_Military_AnimBP.MI-8_Military_AnimBP_C
// 0x0649 (FullSize[0x0EF9] - InheritedSize[0x08B0])
class UMI_8_Military_AnimBP_C : public UVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x08B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_68E10DFB47BB74A04A7C60B00AF54363;       // 0x08B8(0x0048)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_3FB4E9234FDCEFC4B7850B8E5E7D6A36; // 0x0900(0x0088)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_E8F6D87E4089AFAEE54C88A45FB21F2E; // 0x0988(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EB8E7631445C56FEFD42579E68E7F6E7; // 0x09B8(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E55F9FA243438360C1BAF29A08CAF56B; // 0x0A70(0x00A8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_AB4140514E7AF5A78A62C0BFB52CDEC2; // 0x0B18(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1F8B96FF4128705B22BF94A45FDF7A65; // 0x0B60(0x0048)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_47CF83A24BBAACDC2CE1AB8C77FC82BB;   // 0x0BA8(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_DA962C0D4ABC6FC45B0D6992ACF705AB;   // 0x0C50(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_F6079DB94739FB610CC413876CC65471;   // 0x0CF8(0x00A8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6E7C98324963B8075A6C45823F7565A7; // 0x0DA0(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3398EBAB4DD5163D72C125AC3BDF818F; // 0x0E58(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_70DF3F314573352457A528907A723895; // 0x0EA8(0x0048)
	float                                              Steering;                                                  // 0x0EF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RotationFun;                                               // 0x0EF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isOpenBackDoor;                                            // 0x0EF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(107900);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MI_8_Military_AnimBP_AnimGraphNode_ModifyBone_6E7C98324963B8075A6C45823F7565A7();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_MI_8_Military_AnimBP_AnimGraphNode_ModifyBone_EB8E7631445C56FEFD42579E68E7F6E7();
	void STATIC_BlueprintUpdateAnimation(float DeltaTimeX);
	void STATIC_ExecuteUbergraph_MI_8_Military_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
