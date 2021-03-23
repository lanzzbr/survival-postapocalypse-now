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

// BlueprintGeneratedClass SURV_FPS_Base.SURV_FPS_Base_C
// 0x0008 (FullSize[0x0378] - InheritedSize[0x0370])
class ASURV_FPS_Base_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0370(0x0008) (Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(156046);
		return ptr;
	}



	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_SURV_FPS_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
