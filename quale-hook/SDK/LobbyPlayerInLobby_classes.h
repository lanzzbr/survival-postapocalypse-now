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

// WidgetBlueprintGeneratedClass LobbyPlayerInLobby.LobbyPlayerInLobby_C
// 0x0040 (FullSize[0x0240] - InheritedSize[0x0200])
class ULobbyPlayerInLobby_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Avatar;                                                    // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Plus;                                                      // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ready;                                                     // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FBPUniqueNetId                              PlayerId;                                                  // 0x0220(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(78251);
		return ptr;
	}



	void STATIC_Set_clear();
	void STATIC_Construct();
	void STATIC_Draw(const struct FBPUniqueNetId& UniqID, bool Is_ready);
	void STATIC_ExecuteUbergraph_LobbyPlayerInLobby(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
