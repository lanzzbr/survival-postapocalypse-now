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

// WidgetBlueprintGeneratedClass Z_Tooltip_Root.Z_Tooltip_Root_C
// 0x0028 (FullSize[0x0228] - InheritedSize[0x0200])
class UZ_Tooltip_Root_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	struct FName                                       Root_Name;                                                 // 0x0208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      Root_Icon;                                                 // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  Root_NameText;                                             // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  Root_DescriptionText;                                      // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(44310);
		return ptr;
	}



	void STATIC_RootIni(class UImage* Root_Icon, class UTextBlock* Root_NameText, class UTextBlock* Root_DescriptionText);
	void STATIC_Root_DrawFromZLoot(const struct FName& Name);
	void STATIC_Root_Hide(bool Hide);
	void STATIC_Root_DrawFromCraft(const struct FName& Root_Name);
	void STATIC_Root_SetMass(float Mass);
	void STATIC_ExecuteUbergraph_Z_Tooltip_Root(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
