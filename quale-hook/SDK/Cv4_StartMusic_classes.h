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

// BlueprintGeneratedClass Cv4_StartMusic.Cv4_StartMusic_C
// 0x0008 (FullSize[0x0378] - InheritedSize[0x0370])
class ACv4_StartMusic_C : public AAmbientSound
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0370(0x0008) (Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(31922);
		return ptr;
	}



	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_Cv4_StartMusic(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
