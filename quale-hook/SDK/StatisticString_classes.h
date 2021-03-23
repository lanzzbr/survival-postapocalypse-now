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

// WidgetBlueprintGeneratedClass StatisticString.StatisticString_C
// 0x0098 (FullSize[0x0298] - InheritedSize[0x0200])
class UStatisticString_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Fon;                                                       // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  InGame;                                                    // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Name;                                                      // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_4;                                               // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Total;                                                     // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       TotalText;                                                 // 0x0230(0x0018) (Edit, BlueprintVisible)
	struct FText                                       InGameText;                                                // 0x0248(0x0018) (Edit, BlueprintVisible)
	struct FText                                       NameText;                                                  // 0x0260(0x0018) (Edit, BlueprintVisible)
	bool                                               IsHeader;                                                  // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WNL4[0x7];                                     // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       HeaderName;                                                // 0x0280(0x0018) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(44392);
		return ptr;
	}



	void STATIC_PreConstruct(bool IsDesignTime);
	void STATIC_Draw(const struct FText& TotalText, const struct FText& InGameText);
	void STATIC_ExecuteUbergraph_StatisticString(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
