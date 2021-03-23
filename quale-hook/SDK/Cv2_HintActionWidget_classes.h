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

// WidgetBlueprintGeneratedClass Cv2_HintActionWidget.Cv2_HintActionWidget_C
// 0x0020 (FullSize[0x0220] - InheritedSize[0x0200])
class UCv2_HintActionWidget_C : public UUserWidget
{
public:
	class UTextBlock*                                  TextBlock_1;                                               // 0x0200(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0208(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(62824);
		return ptr;
	}



	struct FText GetText_1();
	void STATIC_SetText(const struct FText& Text);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
