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

// BlueprintGeneratedClass WeatherPreset.WeatherPreset_C
// 0x0064 (FullSize[0x008C] - InheritedSize[0x0028])
class UWeatherPreset_C : public UObject
{
public:
	struct FWeatherData                                Data;                                                      // 0x0028(0x0064) (Edit, BlueprintVisible, Transient, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(40292);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
