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

// AnimBlueprintGeneratedClass SURV_KA-26_AnimBp.SURV_KA-26_AnimBp_C
// 0x0B5C (FullSize[0x140C] - InheritedSize[0x08B0])
class USURV_KA_26_AnimBp_C : public UVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x08B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_245FD57946C53056B19617872949899B;       // 0x08B8(0x0048)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_7CA7738D4D0C4E254F24189AB20C1E54; // 0x0900(0x0088)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_EE9FC96E463D8E2AC498D1973859D1B4; // 0x0988(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_257C4BA247DA2F134700539245DB7A46; // 0x09B8(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1A6B7B5B48898530A543A1B1772AA4F8; // 0x0A70(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_469A9F854201C3361E6FF9BB0B108C0C; // 0x0B28(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4D1E34554BA04668733F7B91BADB4CAF; // 0x0BF8(0x00A8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_97C2C2B645215A75E999A29BDA6931E2; // 0x0CA0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_173C11E64A575A0CFCF030967E5BFD1B; // 0x0CE8(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C8781CC54C56B0037C38BAB757BF01BF; // 0x0D38(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1193F5F647CB9CBEEA97A08EEA181997; // 0x0DF0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6C6647FB4FA1CB338E9A258B579080A6; // 0x0E38(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_10FE104D4D67AC768F2EE2B605FBD3E4; // 0x0E80(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FDEBA15846B8C9F6A73EB6A20006F7C7; // 0x0EC8(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_AAF7B5B240CF15854C9873898B693A1E; // 0x0F18(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F1438B874102A08E69A78798D5BFE34E; // 0x0F60(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4CC07AED4A367B244BDEF39C860069F6; // 0x1018(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_801AE1354AD8C550C0680880A8556436; // 0x10D0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_265E26394595B7919EB05A94293EAA66; // 0x1118(0x0048)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_622291DC4BEFBBE3A425BBB2EB5459BD;   // 0x1160(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_297EFC5B442BAF41E4997DB380B12947;   // 0x1208(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_760A720C4C32E868B87B3FB27A241B95;   // 0x12B0(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_F94E22084CDE7B3EE8B785ABB9BD199D;   // 0x1358(0x00A8)
	float                                              RotationFun;                                               // 0x1400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isOpenBackDoor;                                            // 0x1404(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WG08[0x3];                                     // 0x1405(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Steering;                                                  // 0x1408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(107622);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_SURV_KA_26_AnimBp_AnimGraphNode_ModifyBone_4CC07AED4A367B244BDEF39C860069F6();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_SURV_KA_26_AnimBp_AnimGraphNode_ModifyBone_F1438B874102A08E69A78798D5BFE34E();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_SURV_KA_26_AnimBp_AnimGraphNode_ModifyBone_C8781CC54C56B0037C38BAB757BF01BF();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_SURV_KA_26_AnimBp_AnimGraphNode_BlendListByBool_469A9F854201C3361E6FF9BB0B108C0C();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_SURV_KA_26_AnimBp_AnimGraphNode_ModifyBone_1A6B7B5B48898530A543A1B1772AA4F8();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_SURV_KA_26_AnimBp_AnimGraphNode_ModifyBone_257C4BA247DA2F134700539245DB7A46();
	void STATIC_BlueprintUpdateAnimation(float DeltaTimeX);
	void STATIC_ExecuteUbergraph_SURV_KA_26_AnimBp(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
