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

// BlueprintGeneratedClass Cv3_Wolf_AI_Controller.Cv3_Wolf_AI_Controller_C
// 0x0010 (FullSize[0x0470] - InheritedSize[0x0460])
class ACv3_Wolf_AI_Controller_C : public AAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0460(0x0008) (Transient, DuplicateTransient)
	class ABP_AnimalsWolf_Wolf_C*                      Wolf;                                                      // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(92889);
		return ptr;
	}



	void STATIC_UserConstructionScript();
	void STATIC_MoveTo(const struct FVector& Location);
	void STATIC_ExecuteUbergraph_Cv3_Wolf_AI_Controller(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
