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

// BlueprintGeneratedClass LOBBY_GInstance_Interface.LOBBY_GInstance_Interface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULOBBY_GInstance_Interface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(55995);
		return ptr;
	}



	void STATIC_I_LOBBY_GINST_ConnectToSession(const struct FBlueprintSessionResult& Session);
	void STATIC_I_LOBBY_GINST_GetLobyyFriends(TArray<struct FString>* Friends);
	void STATIC_I_LOBBY_GINST_OnConnectionFail();
	void STATIC_I_LOBBY_GINST_SetPlayerCount(int PlayerCount);
	void STATIC_I_LOBBY_GINST_GetPlayersCount(int* PlayerCount);
	void STATIC_I_LOBBY_GINST_SetLobbyID(int LobbyID);
	void STATIC_I_LOBBY_GINST_GetLobbyID(int* LobbyID);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
