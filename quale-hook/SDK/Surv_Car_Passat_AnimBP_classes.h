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

// AnimBlueprintGeneratedClass Surv_Car_Passat_AnimBP.Surv_Car_Passat_AnimBP_C
// 0x0150 (FullSize[0x0A00] - InheritedSize[0x08B0])
class USurv_Car_Passat_AnimBP_C : public UVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x08B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_54592BF74A963D3AB29004B516AE2D75;       // 0x08B8(0x0048)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_80E64B3C42A5BFF2E038C09BDB6308A1; // 0x0900(0x0088)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_CE393BE549531F6BAEEEC48E1794119B; // 0x0988(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_6E34F3E2440BBA797172EEAF4E893F91; // 0x09D0(0x0030)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(108115);
		return ptr;
	}



	void STATIC_ExecuteUbergraph_Surv_Car_Passat_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
