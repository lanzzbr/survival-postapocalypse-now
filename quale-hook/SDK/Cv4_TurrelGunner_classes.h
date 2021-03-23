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

// AnimBlueprintGeneratedClass Cv4_TurrelGunner.Cv4_TurrelGunner_C
// 0x034A (FullSize[0x0702] - InheritedSize[0x03B8])
class UCv4_TurrelGunner_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_5K9O[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A67DB493446CB7B1A6646090C88CCEAC;       // 0x03C8(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_81B67FE047C6A1F878CB7086BAE5F377; // 0x0410(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6A0209C640B1AF1493577A967D8E080B; // 0x04E0(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_71D5F8D34F4C522E13C7E6929F1C0647; // 0x05B0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FA045BB146493B3496A040B683E6E72F; // 0x0620(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E4EF6C17478DD959E55E8DAF8A35D7CE; // 0x0690(0x0070)
	bool                                               MoveLeft;                                                  // 0x0700(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               MoveRight;                                                 // 0x0701(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(88109);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_Cv4_TurrelGunner_AnimGraphNode_BlendListByBool_6A0209C640B1AF1493577A967D8E080B();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_Cv4_TurrelGunner_AnimGraphNode_BlendListByBool_81B67FE047C6A1F878CB7086BAE5F377();
	void STATIC_BlueprintUpdateAnimation(float DeltaTimeX);
	void STATIC_ExecuteUbergraph_Cv4_TurrelGunner(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
