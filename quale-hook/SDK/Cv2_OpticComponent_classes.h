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

// BlueprintGeneratedClass Cv2_OpticComponent.Cv2_OpticComponent_C
// 0x0008 (FullSize[0x00F8] - InheritedSize[0x00F0])
class UCv2_OpticComponent_C : public UActorComponent
{
public:
	class UOpticGUI_C*                                 OpticWidget;                                               // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(72961);
		return ptr;
	}



	void STATIC_HideOptic();
	void STATIC_ShowOptic();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
