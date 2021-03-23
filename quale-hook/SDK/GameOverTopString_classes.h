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

// WidgetBlueprintGeneratedClass GameOverTopString.GameOverTopString_C
// 0x00A0 (FullSize[0x02A0] - InheritedSize[0x0200])
class UGameOverTopString_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            Show;                                                      // 0x0208(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Avatar;                                                    // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  NameText;                                                  // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ParametrText;                                              // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Place;                                                     // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ScoreText;                                                 // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Name;                                                      // 0x0238(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Parametr;                                                  // 0x0250(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Score;                                                     // 0x0268(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                                  Icon;                                                      // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       PlaceVar;                                                  // 0x0288(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(41718);
		return ptr;
	}



	void STATIC_Draw(const struct FText& Name, const struct FText& Parametr, const struct FText& Score, const struct FText& PlaceVar, class UTexture2D* AvatarTexture);
	void STATIC_ShowMe(float Duration);
	void STATIC_MiniDraw(const struct FText& Name, const struct FText& Score, class UTexture2D* Icon);
	void STATIC_ExecuteUbergraph_GameOverTopString(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
