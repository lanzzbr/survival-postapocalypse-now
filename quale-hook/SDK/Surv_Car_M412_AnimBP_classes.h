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

// AnimBlueprintGeneratedClass Surv_Car_M412_AnimBP.Surv_Car_M412_AnimBP_C
// 0x0150 (FullSize[0x0A00] - InheritedSize[0x08B0])
class USurv_Car_M412_AnimBP_C : public UVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x08B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_88D4E8E64498F94364674EAA6857C002;       // 0x08B8(0x0048)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_DEEAF46D42E6A9E260FD6EAE719BD9FD; // 0x0900(0x0088)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_40EFEF0F487C6749398828B186A76F31; // 0x0988(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_66577A92414EA00783A073AC7EEA510D; // 0x09D0(0x0030)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(107706);
		return ptr;
	}



	void STATIC_ExecuteUbergraph_Surv_Car_M412_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
