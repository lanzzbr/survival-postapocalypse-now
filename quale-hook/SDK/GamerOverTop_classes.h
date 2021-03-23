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

// WidgetBlueprintGeneratedClass GamerOverTop.GamerOverTop_C
// 0x0068 (FullSize[0x0268] - InheritedSize[0x0200])
class UGamerOverTop_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            Show;                                                      // 0x0208(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGameOverTopString_C*                        GameOverTopString;                                         // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGameOverTopString_C*                        GameOverTopString_1;                                       // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGameOverTopString_C*                        GameOverTopString_2;                                       // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  HeaderText;                                                // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Header;                                                    // 0x0238(0x0018) (Edit, BlueprintVisible)
	struct FText                                       ParametrName;                                              // 0x0250(0x0018) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(77885);
		return ptr;
	}



	void STATIC_PreConstruct(bool IsDesignTime);
	void STATIC_Construct();
	void STATIC_ShowMe();
	void STATIC_ExecuteUbergraph_GamerOverTop(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
