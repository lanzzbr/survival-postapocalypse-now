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

// AnimBlueprintGeneratedClass Surv_Car_Zil130_AnimBP.Surv_Car_Zil130_AnimBP_C
// 0x0150 (FullSize[0x0A00] - InheritedSize[0x08B0])
class USurv_Car_Zil130_AnimBP_C : public UVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x08B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_7228026D41772AA0CE19C19E33E3F24F;       // 0x08B8(0x0048)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_E54F68044EE9A04EC408D09A3318DC15; // 0x0900(0x0088)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5F9290B34E8793B1C1FF729E385DCCF8; // 0x0988(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_0FB27A1E46A53D6CF34539A1E5BF04D5; // 0x09D0(0x0030)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(108137);
		return ptr;
	}



	void STATIC_ExecuteUbergraph_Surv_Car_Zil130_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
