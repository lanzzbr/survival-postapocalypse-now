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

// BlueprintGeneratedClass Surv_MI-8_Military.Surv_MI-8_Military_C
// 0x000A (FullSize[0x094A] - InheritedSize[0x0940])
class ASurv_MI_8_Military_C : public ACv2_BaseCar_4W_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0940(0x0008) (Transient, DuplicateTransient)
	bool                                               isBoom;                                                    // 0x0948(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               randomHeliFire;                                            // 0x0949(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(107725);
		return ptr;
	}



	void STATIC_CheckGroundDistance();
	void STATIC_HelicopterLogic();
	void STATIC_UserConstructionScript();
	void STATIC_InpActEvt_Fire_K2Node_InputActionEvent_1(const struct FKey& Key);
	void STATIC_ClientApplyDamageToServer();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ServerFireHelicopter();
	void STATIC_ServerFireHelicopterAll(const struct FVector_NetQuantize& Location, const struct FVector_NetQuantize& Rotation);
	void STATIC_ExecuteUbergraph_Surv_MI_8_Military(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
