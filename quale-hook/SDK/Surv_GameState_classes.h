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

// BlueprintGeneratedClass Surv_GameState.Surv_GameState_C
// 0x0058 (FullSize[0x0420] - InheritedSize[0x03C8])
class ASurv_GameState_C : public AGameState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C8(0x0008) (Transient, DuplicateTransient)
	class UCv4_DataBaseUpdateAndGet_C*                 Cv4_DataBaseUpdateAndGet;                                  // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVaRestFunctionsComponent_C*                 VaRestFunctionsComponent;                                  // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ASurvBarigaBaseActor_C*                      BarigaAll;                                                 // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FIntegerVector>                      TOP_GLOBAl_clientOnly_;                                    // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FIntegerVector>                      TOP_WEEK;                                                  // 0x0400(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify)
	struct FString                                     TopResponce;                                               // 0x0410(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(49828);
		return ptr;
	}



	void STATIC_OnRep_TopResponce();
	void STATIC_UpdateTop();
	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_Surv_GameState(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
