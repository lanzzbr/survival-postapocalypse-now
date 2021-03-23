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

// BlueprintGeneratedClass Cv3_Hovel.Cv3_Hovel_C
// 0x0008 (FullSize[0x03F0] - InheritedSize[0x03E8])
class ACv3_Hovel_C : public ACv3_FireCamp_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03E8(0x0008) (Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(90815);
		return ptr;
	}



	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_Cv3_Hovel(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
