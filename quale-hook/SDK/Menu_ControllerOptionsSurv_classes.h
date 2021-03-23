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

// WidgetBlueprintGeneratedClass Menu_ControllerOptionsSurv.Menu_ControllerOptionsSurv_C
// 0x002F (FullSize[0x0240] - InheritedSize[0x0211])
class UMenu_ControllerOptionsSurv_C : public UMenu_InGame_Panel_ROOT_C
{
public:
	unsigned char                                      UnknownData_VRZ8[0x7];                                     // 0x0211(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0218(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Image_1;                                                   // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                   // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenu_InGame_Keyboard_options_C*             Menu_InGame_Keyboard_options;                              // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenu_InGame_Mouse_options_C*                Menu_InGame_Mouse_options;                                 // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(63338);
		return ptr;
	}



	void STATIC_On_Open();
	void STATIC_RestoreKeyboardDefault();
	void STATIC_RestoreAzerty();
	void STATIC_ExecuteUbergraph_Menu_ControllerOptionsSurv(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
