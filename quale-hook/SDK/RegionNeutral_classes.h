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

// WidgetBlueprintGeneratedClass RegionNeutral.RegionNeutral_C
// 0x0029 (FullSize[0x024A] - InheritedSize[0x0221])
class URegionNeutral_C : public UPointer_Root_C
{
public:
	unsigned char                                      UnknownData_SVIM[0x7];                                     // 0x0221(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (Transient, DuplicateTransient)
	class UBorder*                                     Border_3;                                                  // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Distance;                                                  // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextMarker;                                                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>          OwnerSide;                                                 // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isHidden;                                                  // 0x0249(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(38626);
		return ptr;
	}



	void STATIC_SetOwenerSideColor();
	void STATIC_SetHidden();
	struct FLinearColor SetDynamicColorAndOpacity();
	struct FText SetDistanceText();
	void STATIC_Destruct();
	void STATIC_CheckOnerSide();
	void STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void STATIC_Construct();
	void STATIC_ExecuteUbergraph_RegionNeutral(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
