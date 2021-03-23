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

// AnimBlueprintGeneratedClass Surv_Car_Vaz-2109_AnimBP.Surv_Car_Vaz-2109_AnimBP_C
// 0x0150 (FullSize[0x0A00] - InheritedSize[0x08B0])
class USurv_Car_Vaz_2109_AnimBP_C : public UVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x08B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_FEFE440D4AC50EA2B92FF8ABD0B4F905;       // 0x08B8(0x0048)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_66F6FCEE42EC54EEA6F0A5A4CC2F4AC5; // 0x0900(0x0088)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F75BBDB14672D4D01F42CE9273A7DAD2; // 0x0988(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_D4204E144B8F2B1DBD13BD930E2EE3F9; // 0x09D0(0x0030)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(108090);
		return ptr;
	}



	void STATIC_ExecuteUbergraph_Surv_Car_Vaz_2109_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
