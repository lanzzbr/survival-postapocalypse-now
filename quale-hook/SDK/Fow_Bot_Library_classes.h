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

// BlueprintGeneratedClass Fow_Bot_Library.Fow_Bot_Library_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFow_Bot_Library_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(34320);
		return ptr;
	}



	void STATIC_NameGeneration(class UObject* __WorldContext, struct FText* Name);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
