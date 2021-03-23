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

// BlueprintGeneratedClass HelmetsCorrectLibrary.HelmetsCorrectLibrary_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UHelmetsCorrectLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(57871);
		return ptr;
	}



	void STATIC_CorrectHelmetLocation(const struct FName& Name_Model, class UObject* __WorldContext, struct FVector* Location, struct FVector* Scale);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
