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

// WidgetBlueprintGeneratedClass BinocularGUI.BinocularGUI_C
// 0x0008 (FullSize[0x0208] - InheritedSize[0x0200])
class UBinocularGUI_C : public UUserWidget
{
public:
	class UImage*                                      OpticTexture;                                              // 0x0200(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(74565);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
