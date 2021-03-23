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

// WidgetBlueprintGeneratedClass Pointer_Root.Pointer_Root_C
// 0x0021 (FullSize[0x0221] - InheritedSize[0x0200])
class UPointer_Root_C : public UUserWidget
{
public:
	struct FVector                                     ROOT_ActorLocation;                                        // 0x0200(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cv2_SidesEnum_ECv2_SidesEnum>          ROOT_ActorSide;                                            // 0x020C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6GUW[0x3];                                     // 0x020D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      ROOT_Actor;                                                // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   ROOTPosition;                                              // 0x0218(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<GUI_Pointer_Type_EGUI_Pointer_Type>    ROOT_PointerClass;                                         // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(38618);
		return ptr;
	}



	void STATIC_UpdateState();
	void STATIC_UpdatePositionInViewport();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
