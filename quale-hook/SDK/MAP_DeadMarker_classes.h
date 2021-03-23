﻿#pragma once

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

// WidgetBlueprintGeneratedClass MAP_DeadMarker.MAP_DeadMarker_C
// 0x001A (FullSize[0x0250] - InheritedSize[0x0236])
class UMAP_DeadMarker_C : public UMapMarkerROOT_C
{
public:
	unsigned char                                      UnknownData_UB62[0x2];                                     // 0x0236(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            Show;                                                      // 0x0240(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(95602);
		return ptr;
	}



	void STATIC_Construct();
	void STATIC_SetBrushROOT(const struct FSlateBrush& Brush);
	void STATIC_SetColor(const struct FLinearColor& InColorAndOpacity);
	void STATIC_ExecuteUbergraph_MAP_DeadMarker(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
