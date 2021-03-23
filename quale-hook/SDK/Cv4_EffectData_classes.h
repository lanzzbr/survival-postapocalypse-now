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

// BlueprintGeneratedClass Cv4_EffectData.Cv4_EffectData_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCv4_EffectData_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(93366);
		return ptr;
	}



	void STATIC_CheckParticle(float Damage, class UPrimitiveComponent* Component, const struct FVector& Location, const struct FVector& Normal, const struct FName& BoneName, bool isMelee_, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
