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

// AnimBlueprintGeneratedClass BaseHands_Default_AnimBlueprint.BaseHands_Default_AnimBlueprint_C
// 0x0140 (FullSize[0x04F8] - InheritedSize[0x03B8])
class UBaseHands_Default_AnimBlueprint_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_KBRP[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E25D01B7430D8BC647B4BE96F21781A5;       // 0x03C8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3C67BD5A4B59E18C7FA85483FF4A2110;       // 0x0410(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_98CC65134352BFCF19FA2CB387831CE9; // 0x0478(0x0070)
	TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum>      WeaponID;                                                  // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QU73[0x7];                                     // 0x04E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequenceBase*                           IdleAnim;                                                  // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(53482);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHands_Default_AnimBlueprint_AnimGraphNode_SequencePlayer_98CC65134352BFCF19FA2CB387831CE9();
	void STATIC_ExecuteUbergraph_BaseHands_Default_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
