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

// BlueprintGeneratedClass Cv3_SteamFunctionsAll.Cv3_SteamFunctionsAll_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCv3_SteamFunctionsAll_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(36461);
		return ptr;
	}



	void STATIC_GetFriendAvatar(const struct FBPUniqueNetId& UniqID, int AvatarSize, class UObject* __WorldContext, class UTexture2D** Texture);
	void STATIC_Convert_UniqID_ToString(const struct FBPUniqueNetId& SteamID, class UObject* __WorldContext, struct FString* String);
	void STATIC_ShowWebURL(const struct FString& WebURL, class UObject* __WorldContext);
	void STATIC_isAdmin(class UObject* __WorldContext);
	void STATIC_IsFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& UniqID, class UObject* __WorldContext, bool* IsFriend);
	void STATIC_GetUniqID_Classic(class APlayerController* PlayerController, class UObject* __WorldContext, struct FBPUniqueNetId* UniqID);
	void STATIC_IsDLC(int DLC, class UObject* __WorldContext, bool* IsDLC);
	void STATIC_isBanned(class APlayerController* PlayerController, class UObject* __WorldContext, bool* isBanned);
	void STATIC_SetStata_Client(const struct FName& StateName, int Value, class UObject* __WorldContext);
	void STATIC_GetStata_Client(const struct FName& StateName, class UObject* __WorldContext, int* Value, bool* IsOk);
	void STATIC_SetStata_Server(class APlayerState* PlayerState, const struct FName& NameState, int Value, class UObject* __WorldContext);
	void STATIC_GetStata_Server(class APlayerState* PlayerState, const struct FName& NameState, class UObject* __WorldContext, int* Value);
	void STATIC_GetUniqID_String(class APlayerController* PlayerController, class UObject* __WorldContext, struct FString* UniqID);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
