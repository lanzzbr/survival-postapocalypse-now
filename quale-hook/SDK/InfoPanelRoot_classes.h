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

// WidgetBlueprintGeneratedClass InfoPanelRoot.InfoPanelRoot_C
// 0x0018 (FullSize[0x0218] - InheritedSize[0x0200])
class UInfoPanelRoot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	struct FTimerHandle                                RootCheckVarTimer;                                         // 0x0208(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UInfo_VehicleInfoBar_C*                      RootVehicleInfoPanel;                                      // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(79871);
		return ptr;
	}



	void STATIC_Root_Check();
	void STATIC_OnPanelEndShow();
	void STATIC_OnPanelBeginShow();
	void STATIC_ShowThisPanel();
	void STATIC_HideThisPanel();
	void STATIC_ExecuteUbergraph_InfoPanelRoot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
