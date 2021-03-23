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

// BlueprintGeneratedClass LOBBY_HUD_Interface.LOBBY_HUD_Interface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULOBBY_HUD_Interface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(55988);
		return ptr;
	}



	void STATIC_I_LOBBY_HUD_StopConnection();
	void STATIC_I_LOBBY_HUD_StartConnection();
	void STATIC_I_LOBBY_HUD_ShowConfirm(const struct FString& LeaderID, const struct FString& LobbyInformation);
	void STATIC_I_LOBBY_HUD_UpdateLobbyInfo();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
