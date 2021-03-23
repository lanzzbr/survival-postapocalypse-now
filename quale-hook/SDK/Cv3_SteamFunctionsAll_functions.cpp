// Name: ANUSGAME, Version: 4.18

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Cv3_SteamFunctionsAll.Cv3_SteamFunctionsAll_C.GetFriendAvatar
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBPUniqueNetId          UniqID                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            AvatarSize                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*              Texture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv3_SteamFunctionsAll_C::STATIC_GetFriendAvatar(const struct FBPUniqueNetId& UniqID, int AvatarSize, class UObject* __WorldContext, class UTexture2D** Texture)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36486);

	UCv3_SteamFunctionsAll_C_GetFriendAvatar_Params params;
	params.UniqID = UniqID;
	params.AvatarSize = AvatarSize;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Texture != nullptr)
		*Texture = params.Texture;

}


// Function Cv3_SteamFunctionsAll.Cv3_SteamFunctionsAll_C.Convert_UniqID_ToString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FBPUniqueNetId          SteamID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 String                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UCv3_SteamFunctionsAll_C::STATIC_Convert_UniqID_ToString(const struct FBPUniqueNetId& SteamID, class UObject* __WorldContext, struct FString* String)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36484);

	UCv3_SteamFunctionsAll_C_Convert_UniqID_ToString_Params params;
	params.SteamID = SteamID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;

}


// Function Cv3_SteamFunctionsAll.Cv3_SteamFunctionsAll_C.ShowWebURL
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 WebURL                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv3_SteamFunctionsAll_C::STATIC_ShowWebURL(const struct FString& WebURL, class UObject* __WorldContext)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36482);

	UCv3_SteamFunctionsAll_C_ShowWebURL_Params params;
	params.WebURL = WebURL;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv3_SteamFunctionsAll.Cv3_SteamFunctionsAll_C.isAdmin
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv3_SteamFunctionsAll_C::STATIC_isAdmin(class UObject* __WorldContext)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36480);

	UCv3_SteamFunctionsAll_C_isAdmin_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv3_SteamFunctionsAll.Cv3_SteamFunctionsAll_C.IsFriend
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBPUniqueNetId          UniqID                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsFriend                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCv3_SteamFunctionsAll_C::STATIC_IsFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& UniqID, class UObject* __WorldContext, bool* IsFriend)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36478);

	UCv3_SteamFunctionsAll_C_IsFriend_Params params;
	params.PlayerController = PlayerController;
	params.UniqID = UniqID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsFriend != nullptr)
		*IsFriend = params.IsFriend;

}


// Function Cv3_SteamFunctionsAll.Cv3_SteamFunctionsAll_C.GetUniqID_Classic
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBPUniqueNetId          UniqID                         (Parm, OutParm)
void UCv3_SteamFunctionsAll_C::STATIC_GetUniqID_Classic(class APlayerController* PlayerController, class UObject* __WorldContext, struct FBPUniqueNetId* UniqID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36476);

	UCv3_SteamFunctionsAll_C_GetUniqID_Classic_Params params;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UniqID != nullptr)
		*UniqID = params.UniqID;

}


// Function Cv3_SteamFunctionsAll.Cv3_SteamFunctionsAll_C.IsDLC
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            DLC                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsDLC                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCv3_SteamFunctionsAll_C::STATIC_IsDLC(int DLC, class UObject* __WorldContext, bool* IsDLC)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36474);

	UCv3_SteamFunctionsAll_C_IsDLC_Params params;
	params.DLC = DLC;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsDLC != nullptr)
		*IsDLC = params.IsDLC;

}


// Function Cv3_SteamFunctionsAll.Cv3_SteamFunctionsAll_C.isBanned
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           isBanned                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCv3_SteamFunctionsAll_C::STATIC_isBanned(class APlayerController* PlayerController, class UObject* __WorldContext, bool* isBanned)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36472);

	UCv3_SteamFunctionsAll_C_isBanned_Params params;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (isBanned != nullptr)
		*isBanned = params.isBanned;

}


// Function Cv3_SteamFunctionsAll.Cv3_SteamFunctionsAll_C.SetStata_Client
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   StateName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv3_SteamFunctionsAll_C::STATIC_SetStata_Client(const struct FName& StateName, int Value, class UObject* __WorldContext)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36470);

	UCv3_SteamFunctionsAll_C_SetStata_Client_Params params;
	params.StateName = StateName;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv3_SteamFunctionsAll.Cv3_SteamFunctionsAll_C.GetStata_Client
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   StateName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsOk                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCv3_SteamFunctionsAll_C::STATIC_GetStata_Client(const struct FName& StateName, class UObject* __WorldContext, int* Value, bool* IsOk)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36468);

	UCv3_SteamFunctionsAll_C_GetStata_Client_Params params;
	params.StateName = StateName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
	if (IsOk != nullptr)
		*IsOk = params.IsOk;

}


// Function Cv3_SteamFunctionsAll.Cv3_SteamFunctionsAll_C.SetStata_Server
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   NameState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv3_SteamFunctionsAll_C::STATIC_SetStata_Server(class APlayerState* PlayerState, const struct FName& NameState, int Value, class UObject* __WorldContext)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36466);

	UCv3_SteamFunctionsAll_C_SetStata_Server_Params params;
	params.PlayerState = PlayerState;
	params.NameState = NameState;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv3_SteamFunctionsAll.Cv3_SteamFunctionsAll_C.GetStata_Server
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   NameState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv3_SteamFunctionsAll_C::STATIC_GetStata_Server(class APlayerState* PlayerState, const struct FName& NameState, class UObject* __WorldContext, int* Value)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36464);

	UCv3_SteamFunctionsAll_C_GetStata_Server_Params params;
	params.PlayerState = PlayerState;
	params.NameState = NameState;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function Cv3_SteamFunctionsAll.Cv3_SteamFunctionsAll_C.GetUniqID_String
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 UniqID                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UCv3_SteamFunctionsAll_C::STATIC_GetUniqID_String(class APlayerController* PlayerController, class UObject* __WorldContext, struct FString* UniqID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36462);

	UCv3_SteamFunctionsAll_C_GetUniqID_String_Params params;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UniqID != nullptr)
		*UniqID = params.UniqID;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
