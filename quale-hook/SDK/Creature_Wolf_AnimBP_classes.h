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

// AnimBlueprintGeneratedClass Creature_Wolf_AnimBP.Creature_Wolf_AnimBP_C
// 0x01F8 (FullSize[0x05B0] - InheritedSize[0x03B8])
class UCreature_Wolf_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_3ETC[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F8EDDEFF440AFC4D62BD4B8A068941C3;       // 0x03C8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_687A5EE04F1802652241CAAC7BC70031; // 0x0410(0x0128)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E0EAF14C48F562FE9E670B8BB32838F3;       // 0x0538(0x0068)
	float                                              Speed;                                                     // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AHR1[0x4];                                     // 0x05A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABOT_CreatureBase_C*                         Creature;                                                  // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(93325);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_Creature_Wolf_AnimBP_AnimGraphNode_BlendSpacePlayer_687A5EE04F1802652241CAAC7BC70031();
	void STATIC_BlueprintUpdateAnimation(float DeltaTimeX);
	void STATIC_BlueprintInitializeAnimation();
	void STATIC_ExecuteUbergraph_Creature_Wolf_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
