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

// AnimBlueprintGeneratedClass Surv_Car_GAZ-3321_AnimBP.Surv_Car_GAZ-3321_AnimBP_C
// 0x0150 (FullSize[0x0A00] - InheritedSize[0x08B0])
class USurv_Car_GAZ_3321_AnimBP_C : public UVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x08B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_930400F343B2A08E197F5BB06F7874A4;       // 0x08B8(0x0048)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_7BBEF8E145926F79A9940599EF6A2123; // 0x0900(0x0088)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_586D101B475D01CA1BE114BAA3A91F3D; // 0x0988(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_AB97D30C41F7F5A898AE85A405F2D02F; // 0x09D0(0x0030)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(107587);
		return ptr;
	}



	void STATIC_ExecuteUbergraph_Surv_Car_GAZ_3321_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
