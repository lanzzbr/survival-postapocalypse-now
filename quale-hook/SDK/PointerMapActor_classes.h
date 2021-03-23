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

// WidgetBlueprintGeneratedClass PointerMapActor.PointerMapActor_C
// 0x0017 (FullSize[0x0238] - InheritedSize[0x0221])
class UPointerMapActor_C : public UPointer_Root_C
{
public:
	unsigned char                                      UnknownData_5WKM[0x7];                                     // 0x0221(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Image_1;                                                   // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(72887);
		return ptr;
	}



	void STATIC_PreConstruct(bool IsDesignTime);
	void STATIC_ExecuteUbergraph_PointerMapActor(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
