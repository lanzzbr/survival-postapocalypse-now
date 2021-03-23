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

// BlueprintGeneratedClass Cv3_GameMode.Cv3_GameMode_C
// 0x0011 (FullSize[0x0449] - InheritedSize[0x0438])
class ACv3_GameMode_C : public AGameMode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0438(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               IS_SINGLEMODE;                                             // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(34370);
		return ptr;
	}



	void STATIC_CheckRebootTimer();
	void STATIC_SpawnAirDrop_Ju88();
	void STATIC_isBanned(const struct FString& UniqID, bool* isBanned);
	void STATIC_isAdmin(const struct FString& UniqID, bool* isAdmin);
	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_RebootServerAfter(int TimeInseconds);
	void STATIC_ExecuteUbergraph_Cv3_GameMode(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
