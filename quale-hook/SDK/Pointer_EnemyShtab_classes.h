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

// WidgetBlueprintGeneratedClass Pointer_EnemyShtab.Pointer_EnemyShtab_C
// 0x001F (FullSize[0x0240] - InheritedSize[0x0221])
class UPointer_EnemyShtab_C : public UPointer_Root_C
{
public:
	unsigned char                                      UnknownData_0D87[0x7];                                     // 0x0221(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (Transient, DuplicateTransient)
	class UBorder*                                     Border_3;                                                  // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_78;                                              // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(38861);
		return ptr;
	}



	struct FLinearColor GetContentColorAndOpacity_1();
	struct FText GetText_1();
	void STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void STATIC_Destruct();
	void STATIC_ExecuteUbergraph_Pointer_EnemyShtab(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
