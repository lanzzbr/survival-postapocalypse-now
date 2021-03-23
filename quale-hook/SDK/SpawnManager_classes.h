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

// BlueprintGeneratedClass SpawnManager.SpawnManager_C
// 0x0028 (FullSize[0x0118] - InheritedSize[0x00F0])
class USpawnManager_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00F0(0x0008) (Transient, DuplicateTransient)
	TArray<class ADMSpawnPoint_BP_C*>                  AllSpawnPoints;                                            // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ADMSpawnPoint_BP_C*>                  AvailableSpawnPoints;                                      // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(31882);
		return ptr;
	}



	void STATIC_GetSpawnTransform(struct FTransform* SpawnTransform);
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_SpawnManager(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
