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

// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   AchievementID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFoundID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Progress                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAchievementBlueprintLibrary::STATIC_GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementID, bool* bFoundID, float* Progress)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28107);

	UAchievementBlueprintLibrary_GetCachedAchievementProgress_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.AchievementID = AchievementID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bFoundID != nullptr)
		*bFoundID = params.bFoundID;
	if (Progress != nullptr)
		*Progress = params.Progress;

}


// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   AchievementID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFoundID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   Title                          (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FText                   LockedDescription              (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FText                   UnlockedDescription            (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           bHidden                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAchievementBlueprintLibrary::STATIC_GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementID, bool* bFoundID, struct FText* Title, struct FText* LockedDescription, struct FText* UnlockedDescription, bool* bHidden)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28098);

	UAchievementBlueprintLibrary_GetCachedAchievementDescription_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.AchievementID = AchievementID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bFoundID != nullptr)
		*bFoundID = params.bFoundID;
	if (Title != nullptr)
		*Title = params.Title;
	if (LockedDescription != nullptr)
		*LockedDescription = params.LockedDescription;
	if (UnlockedDescription != nullptr)
		*UnlockedDescription = params.UnlockedDescription;
	if (bHidden != nullptr)
		*bHidden = params.bHidden;

}


// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAchievementQueryCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAchievementQueryCallbackProxy* UAchievementQueryCallbackProxy::CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28117);

	UAchievementQueryCallbackProxy_CacheAchievements_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAchievementQueryCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAchievementQueryCallbackProxy* UAchievementQueryCallbackProxy::CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28113);

	UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   AchievementName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            UserTag                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAchievementWriteCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAchievementWriteCallbackProxy* UAchievementWriteCallbackProxy::WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementName, float Progress, int UserTag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28123);

	UAchievementWriteCallbackProxy_WriteAchievementProgress_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.AchievementName = AchievementName;
	params.Progress = Progress;
	params.UserTag = UserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UConnectionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UConnectionCallbackProxy* UConnectionCallbackProxy::ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28132);

	UConnectionCallbackProxy_ConnectToService_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
// (BlueprintCosmetic)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PublicConnections              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCreateSessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCreateSessionCallbackProxy* UCreateSessionCallbackProxy::CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int PublicConnections, bool bUseLAN)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28138);

	UCreateSessionCallbackProxy_CreateSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.PublicConnections = PublicConnections;
	params.bUseLAN = bUseLAN;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDestroySessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDestroySessionCallbackProxy* UDestroySessionCallbackProxy::DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28146);

	UDestroySessionCallbackProxy_DestroySession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
// (BlueprintCosmetic)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class UTurnBasedMatchInterface> MatchActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// struct FString                 MatchID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> LocalPlayerOutcome             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> OtherPlayersOutcome            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEndMatchCallbackProxy*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEndMatchCallbackProxy* UEndMatchCallbackProxy::EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const TScriptInterface<class UTurnBasedMatchInterface>& MatchActor, const struct FString& MatchID, TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> LocalPlayerOutcome, TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> OtherPlayersOutcome)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28152);

	UEndMatchCallbackProxy_EndMatch_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchActor = MatchActor;
	params.MatchID = MatchID;
	params.LocalPlayerOutcome = LocalPlayerOutcome;
	params.OtherPlayersOutcome = OtherPlayersOutcome;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class UTurnBasedMatchInterface> TurnBasedMatchInterface        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class UEndTurnCallbackProxy*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEndTurnCallbackProxy* UEndTurnCallbackProxy::EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, const TScriptInterface<class UTurnBasedMatchInterface>& TurnBasedMatchInterface)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28162);

	UEndTurnCallbackProxy_EndTurn_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchID = MatchID;
	params.TurnBasedMatchInterface = TurnBasedMatchInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FBlueprintSessionResult Result                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UFindSessionsCallbackProxy::GetServerName(const struct FBlueprintSessionResult& Result)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28185);

	UFindSessionsCallbackProxy_GetServerName_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FBlueprintSessionResult Result                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFindSessionsCallbackProxy::GetPingInMs(const struct FBlueprintSessionResult& Result)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28182);

	UFindSessionsCallbackProxy_GetPingInMs_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FBlueprintSessionResult Result                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFindSessionsCallbackProxy::GetMaxPlayers(const struct FBlueprintSessionResult& Result)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28179);

	UFindSessionsCallbackProxy_GetMaxPlayers_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FBlueprintSessionResult Result                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFindSessionsCallbackProxy::GetCurrentPlayers(const struct FBlueprintSessionResult& Result)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28176);

	UFindSessionsCallbackProxy_GetCurrentPlayers_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
// (BlueprintCosmetic)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFindSessionsCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFindSessionsCallbackProxy* UFindSessionsCallbackProxy::FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28170);

	UFindSessionsCallbackProxy_FindSessions_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MaxResults = MaxResults;
	params.bUseLAN = bUseLAN;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class UTurnBasedMatchInterface> MatchActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// int                            MinPlayers                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxPlayers                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PlayerGroup                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ShowExistingMatches            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFindTurnBasedMatchCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFindTurnBasedMatchCallbackProxy* UFindTurnBasedMatchCallbackProxy::FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const TScriptInterface<class UTurnBasedMatchInterface>& MatchActor, int MinPlayers, int MaxPlayers, int PlayerGroup, bool ShowExistingMatches)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28190);

	UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchActor = MatchActor;
	params.MinPlayers = MinPlayers;
	params.MaxPlayers = MaxPlayers;
	params.PlayerGroup = PlayerGroup;
	params.ShowExistingMatches = ShowExistingMatches;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
// ()
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInAppPurchaseProductRequest ProductRequest                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UInAppPurchaseCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UInAppPurchaseCallbackProxy* UInAppPurchaseCallbackProxy::CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest& ProductRequest)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28201);

	UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Params params;
	params.PlayerController = PlayerController;
	params.ProductRequest = ProductRequest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
// (BlueprintCosmetic)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         ProductIdentifiers             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UInAppPurchaseQueryCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UInAppPurchaseQueryCallbackProxy* UInAppPurchaseQueryCallbackProxy::CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<struct FString> ProductIdentifiers)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28207);

	UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Params params;
	params.PlayerController = PlayerController;
	params.ProductIdentifiers = ProductIdentifiers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
// (BlueprintCosmetic)
// Parameters:
// TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInAppPurchaseRestoreCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UInAppPurchaseRestoreCallbackProxy* UInAppPurchaseRestoreCallbackProxy::CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags, class APlayerController* PlayerController)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28214);

	UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Params params;
	params.ConsumableProductFlags = ConsumableProductFlags;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
// (BlueprintCosmetic, Net, NetReliable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult SearchResult                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UJoinSessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UJoinSessionCallbackProxy* UJoinSessionCallbackProxy::JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28221);

	UJoinSessionCallbackProxy_JoinSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.SearchResult = SearchResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
// (BlueprintAuthorityOnly)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   StatName                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            StatValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULeaderboardBlueprintLibrary::WriteLeaderboardInteger(class APlayerController* PlayerController, const struct FName& StatName, int StatValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28228);

	ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Params params;
	params.PlayerController = PlayerController;
	params.StatName = StatName;
	params.StatValue = StatValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
// ()
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SessionName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULeaderboardFlushCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULeaderboardFlushCallbackProxy* ULeaderboardFlushCallbackProxy::CreateProxyObjectForFlush(class APlayerController* PlayerController, const struct FName& SessionName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28233);

	ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Params params;
	params.PlayerController = PlayerController;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
// ()
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   StatName                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULeaderboardQueryCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULeaderboardQueryCallbackProxy* ULeaderboardQueryCallbackProxy::CreateProxyObjectForIntQuery(class APlayerController* PlayerController, const struct FName& StatName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28239);

	ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Params params;
	params.PlayerController = PlayerController;
	params.StatName = StatName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULogoutCallbackProxy*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULogoutCallbackProxy* ULogoutCallbackProxy::Logout(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28245);

	ULogoutCallbackProxy_Logout_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AOnlineBeaconClient::STATIC_ClientOnConnected()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28254);

	AOnlineBeaconClient_ClientOnConnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 SessionId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPartyReservation       ReservationUpdate              (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void APartyBeaconClient::STATIC_ServerUpdateReservationRequest(const struct FString& SessionId, const struct FPartyReservation& ReservationUpdate)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28284);

	APartyBeaconClient_ServerUpdateReservationRequest_Params params;
	params.SessionId = SessionId;
	params.ReservationUpdate = ReservationUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 SessionId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPartyReservation       Reservation                    (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void APartyBeaconClient::STATIC_ServerReservationRequest(const struct FString& SessionId, const struct FPartyReservation& Reservation)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28281);

	APartyBeaconClient_ServerReservationRequest_Params params;
	params.SessionId = SessionId;
	params.Reservation = Reservation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FUniqueNetIdRepl        PartyLeader                    (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APartyBeaconClient::STATIC_ServerCancelReservationRequest(const struct FUniqueNetIdRepl& PartyLeader)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28279);

	APartyBeaconClient_ServerCancelReservationRequest_Params params;
	params.PartyLeader = PartyLeader;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            NumRemainingReservations       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APartyBeaconClient::STATIC_ClientSendReservationUpdates(int NumRemainingReservations)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28277);

	APartyBeaconClient_ClientSendReservationUpdates_Params params;
	params.NumRemainingReservations = NumRemainingReservations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void APartyBeaconClient::STATIC_ClientSendReservationFull()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28276);

	APartyBeaconClient_ClientSendReservationFull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<OnlineSubsystemUtils_EPartyReservationResult> ReservationResponse            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APartyBeaconClient::STATIC_ClientReservationResponse(TEnumAsByte<OnlineSubsystemUtils_EPartyReservationResult> ReservationResponse)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28274);

	APartyBeaconClient_ClientReservationResponse_Params params;
	params.ReservationResponse = ReservationResponse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<OnlineSubsystemUtils_EPartyReservationResult> ReservationResponse            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APartyBeaconClient::STATIC_ClientCancelReservationResponse(TEnumAsByte<OnlineSubsystemUtils_EPartyReservationResult> ReservationResponse)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28272);

	APartyBeaconClient_ClientCancelReservationResponse_Params params;
	params.ReservationResponse = ReservationResponse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
// (BlueprintCosmetic)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> Outcome                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TurnTimeoutInSeconds           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UQuitMatchCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UQuitMatchCallbackProxy* UQuitMatchCallbackProxy::QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> Outcome, int TurnTimeoutInSeconds)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28307);

	UQuitMatchCallbackProxy_QuitMatch_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchID = MatchID;
	params.Outcome = Outcome;
	params.TurnTimeoutInSeconds = TurnTimeoutInSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       InPlayerController             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UShowLoginUICallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UShowLoginUICallbackProxy* UShowLoginUICallbackProxy::ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28316);

	UShowLoginUICallbackProxy_ShowExternalLoginUI_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InPlayerController = InPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.TestBeaconClient.ServerPong
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ATestBeaconClient::STATIC_ServerPong()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28323);

	ATestBeaconClient_ServerPong_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.TestBeaconClient.ClientPing
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ATestBeaconClient::STATIC_ClientPing()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28322);

	ATestBeaconClient_ClientPing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTurnBasedBlueprintLibrary::STATIC_RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28340);

	UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PlayerDisplayName              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTurnBasedBlueprintLibrary::STATIC_GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, int PlayerIndex, struct FString* PlayerDisplayName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28334);

	UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchID = MatchID;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerDisplayName != nullptr)
		*PlayerDisplayName = params.PlayerDisplayName;

}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PlayerIndex                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTurnBasedBlueprintLibrary::STATIC_GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, int* PlayerIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28329);

	UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchID = MatchID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerIndex != nullptr)
		*PlayerIndex = params.PlayerIndex;

}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsMyTurn                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTurnBasedBlueprintLibrary::STATIC_GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, bool* bIsMyTurn)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28324);

	UTurnBasedBlueprintLibrary_GetIsMyTurn_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchID = MatchID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsMyTurn != nullptr)
		*bIsMyTurn = params.bIsMyTurn;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
