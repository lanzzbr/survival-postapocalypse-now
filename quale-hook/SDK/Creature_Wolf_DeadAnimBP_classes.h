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

// AnimBlueprintGeneratedClass Creature_Wolf_DeadAnimBP.Creature_Wolf_DeadAnimBP_C
// 0x00D0 (FullSize[0x0488] - InheritedSize[0x03B8])
class UCreature_Wolf_DeadAnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_MWQM[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8CBE652B4D859C4F5EBFF0A0914A5FAA;       // 0x03C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FFC3602442968E0B6F87CBAD5F9ECA5C; // 0x0410(0x0070)
	class UAnimSequenceBase*                           RandomDeathAnim;                                           // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(108703);
		return ptr;
	}



	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_Creature_Wolf_DeadAnimBP_AnimGraphNode_SequencePlayer_FFC3602442968E0B6F87CBAD5F9ECA5C();
	void STATIC_BlueprintInitializeAnimation();
	void STATIC_ExecuteUbergraph_Creature_Wolf_DeadAnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
