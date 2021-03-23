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

// WidgetBlueprintGeneratedClass Info_TurrelPanel.Info_TurrelPanel_C
// 0x0028 (FullSize[0x0240] - InheritedSize[0x0218])
class UInfo_TurrelPanel_C : public UInfoPanelRoot_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0218(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            Show;                                                      // 0x0220(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     Border_3;                                                  // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInfo_LockedWidget_C*                        Info_LockedWidget;                                         // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInfo_VehicleInfoBar_C*                      Info_VehicleInfoBar;                                       // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(79875);
		return ptr;
	}



	void STATIC_CheckVariables();
	void STATIC_PreConstruct(bool IsDesignTime);
	void STATIC_Construct();
	void STATIC_Destruct();
	void STATIC_ExecuteUbergraph_Info_TurrelPanel(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
