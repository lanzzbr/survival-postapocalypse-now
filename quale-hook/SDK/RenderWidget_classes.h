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

// WidgetBlueprintGeneratedClass RenderWidget.RenderWidget_C
// 0x0030 (FullSize[0x0230] - InheritedSize[0x0200])
class URenderWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Image_25;                                                  // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               MouseIsDown;                                               // 0x0210(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QPGX[0x7];                                     // 0x0211(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AInventoryCharacterRender_C*                 RenderCharacter;                                           // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TempMousePositionX;                                        // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7YE5[0x4];                                     // 0x0224(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     RenderTextureMaterial;                                     // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(38439);
		return ptr;
	}



	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
	void STATIC_Construct();
	void STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void STATIC_BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonPressedEvent__DelegateSignature();
	void STATIC_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
	void STATIC_OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void STATIC_Reset();
	void STATIC_ExecuteUbergraph_RenderWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
