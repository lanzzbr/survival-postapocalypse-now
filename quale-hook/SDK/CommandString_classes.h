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

// WidgetBlueprintGeneratedClass CommandString.CommandString_C
// 0x0059 (FullSize[0x0259] - InheritedSize[0x0200])
class UCommandString_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UTextBlock*                                  ActionText;                                                // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Fon;                                                       // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_27;                                                  // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  KeyName;                                                   // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       KeyNameText;                                               // 0x0228(0x0018) (Edit, BlueprintVisible)
	struct FText                                       ActionTextVar;                                             // 0x0240(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<Cv3_VoicesEnum_ECv3_VoicesEnum>        VoiceEnum;                                                 // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(43078);
		return ptr;
	}



	void STATIC_PreConstruct(bool IsDesignTime);
	void STATIC_DrawString(const struct FText& Key, const struct FText& Messge);
	void STATIC_ExecuteUbergraph_CommandString(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
