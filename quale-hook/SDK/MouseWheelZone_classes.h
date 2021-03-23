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

// WidgetBlueprintGeneratedClass MouseWheelZone.MouseWheelZone_C
// 0x0011 (FullSize[0x0211] - InheritedSize[0x0200])
class UMouseWheelZone_C : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    MouseWheel;                                                // 0x0200(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               UnHandle;                                                  // 0x0210(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(103484);
		return ptr;
	}



	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
	void STATIC_MouseWheel__DelegateSignature(float Delta);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
