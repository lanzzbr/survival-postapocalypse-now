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

// Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
// (BlueprintCosmetic)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTag            Tag                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::RemoveGameplayTag(struct FGameplayTagContainer* TagContainer, const struct FGameplayTag& Tag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15438);

	UBlueprintGameplayTagLibrary_RemoveGameplayTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TagContainer != nullptr)
		*TagContainer = params.TagContainer;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
// (BlueprintCosmetic)
// Parameters:
// struct FGameplayTag            A                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 B                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::NotEqual_TagTag(const struct FGameplayTag& A, const struct FString& B)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15434);

	UBlueprintGameplayTagLibrary_NotEqual_TagTag_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
// ()
// Parameters:
// struct FGameplayTagContainer   A                              (Parm, NativeAccessSpecifierPublic)
// struct FString                 B                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::NotEqual_TagContainerTagContainer(const struct FGameplayTagContainer& A, const struct FString& B)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15430);

	UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
// (Net)
// Parameters:
// struct FGameplayTagContainer   A                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   B                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::NotEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15426);

	UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
// ()
// Parameters:
// struct FGameplayTag            A                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag            B                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::NotEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15422);

	UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
// (Final)
// Parameters:
// struct FGameplayTag            TagOne                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag            TagTwo                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bExactMatch                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::MatchesTag(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, bool bExactMatch)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15417);

	UBlueprintGameplayTagLibrary_MatchesTag_Params params;
	params.TagOne = TagOne;
	params.TagTwo = TagTwo;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
// (Final, BlueprintCosmetic)
// Parameters:
// struct FGameplayTag            TagOne                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   OtherContainer                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bExactMatch                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::MatchesAnyTags(const struct FGameplayTag& TagOne, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15412);

	UBlueprintGameplayTagLibrary_MatchesAnyTags_Params params;
	params.TagOne = TagOne;
	params.OtherContainer = OtherContainer;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
// ()
// Parameters:
// struct FGameplayTagContainer   Value                          (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FGameplayTagContainer UBlueprintGameplayTagLibrary::MakeLiteralGameplayTagContainer(const struct FGameplayTagContainer& Value)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15409);

	UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
// (BlueprintCosmetic)
// Parameters:
// struct FGameplayTag            Value                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FGameplayTag UBlueprintGameplayTagLibrary::MakeLiteralGameplayTag(const struct FGameplayTag& Value)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15406);

	UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
// (BlueprintCosmetic, Net)
// Parameters:
// struct FGameplayTagQuery       TagQuery                       (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery       ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FGameplayTagQuery UBlueprintGameplayTagLibrary::MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15403);

	UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Params params;
	params.TagQuery = TagQuery;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
// (BlueprintCosmetic)
// Parameters:
// struct FGameplayTag            SingleTag                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FGameplayTagContainer UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromTag(const struct FGameplayTag& SingleTag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15400);

	UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Params params;
	params.SingleTag = SingleTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
// ()
// Parameters:
// TArray<struct FGameplayTag>    GameplayTags                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FGameplayTagContainer UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromArray(TArray<struct FGameplayTag> GameplayTags)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15396);

	UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Params params;
	params.GameplayTags = GameplayTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
// (BlueprintCosmetic)
// Parameters:
// struct FGameplayTag            GameplayTag                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::IsGameplayTagValid(const struct FGameplayTag& GameplayTag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15393);

	UBlueprintGameplayTagLibrary_IsGameplayTagValid_Params params;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasTag
// (Final, BlueprintCosmetic)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTag            Tag                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bExactMatch                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::HasTag(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag, bool bExactMatch)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15388);

	UBlueprintGameplayTagLibrary_HasTag_Params params;
	params.TagContainer = TagContainer;
	params.Tag = Tag;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
// (Final, Net)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   OtherContainer                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bExactMatch                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::HasAnyTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15383);

	UBlueprintGameplayTagLibrary_HasAnyTags_Params params;
	params.TagContainer = TagContainer;
	params.OtherContainer = OtherContainer;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
// (Final, Net)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   OtherContainer                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bExactMatch                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::HasAllTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15378);

	UBlueprintGameplayTagLibrary_HasAllTags_Params params;
	params.TagContainer = TagContainer;
	params.OtherContainer = OtherContainer;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
// ()
// Parameters:
// TScriptInterface<class UGameplayTagAssetInterface> TagContainerInterface          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   OtherContainer                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::HasAllMatchingGameplayTags(const TScriptInterface<class UGameplayTagAssetInterface>& TagContainerInterface, const struct FGameplayTagContainer& OtherContainer)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15374);

	UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Params params;
	params.TagContainerInterface = TagContainerInterface;
	params.OtherContainer = OtherContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName
// (BlueprintCosmetic)
// Parameters:
// struct FGameplayTag            GameplayTag                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UBlueprintGameplayTagLibrary::GetTagName(const struct FGameplayTag& GameplayTag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15371);

	UBlueprintGameplayTagLibrary_GetTagName_Params params;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
// ()
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UBlueprintGameplayTagLibrary::GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15368);

	UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Params params;
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
// ()
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTagContainer(const struct FGameplayTagContainer& TagContainer)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15365);

	UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Params params;
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
// (BlueprintCosmetic)
// Parameters:
// struct FGameplayTag            GameplayTag                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTag(const struct FGameplayTag& GameplayTag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15362);

	UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Params params;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery       GameplayTagQuery               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UBlueprintGameplayTagLibrary::STATIC_GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, class UClass* ActorClass, const struct FGameplayTagQuery& GameplayTagQuery, TArray<class AActor*>* OutActors)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15356);

	UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;
	params.GameplayTagQuery = GameplayTagQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
// (Net)
// Parameters:
// struct FGameplayTagContainer   A                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   B                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::EqualEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15352);

	UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
// ()
// Parameters:
// struct FGameplayTag            A                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag            B                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::EqualEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15348);

	UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
// (BlueprintCosmetic)
// Parameters:
// TScriptInterface<class UGameplayTagAssetInterface> TagContainerInterface          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// struct FGameplayTag            Tag                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::DoesTagAssetInterfaceHaveTag(const TScriptInterface<class UGameplayTagAssetInterface>& TagContainerInterface, const struct FGameplayTag& Tag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15344);

	UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Params params;
	params.TagContainerInterface = TagContainerInterface;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
// (BlueprintCosmetic, Net)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery       TagQuery                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagQuery& TagQuery)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15340);

	UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Params params;
	params.TagContainer = TagContainer;
	params.TagQuery = TagQuery;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FGameplayTag>    GameplayTags                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UBlueprintGameplayTagLibrary::STATIC_BreakGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer, TArray<struct FGameplayTag>* GameplayTags)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15336);

	UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Params params;
	params.GameplayTagContainer = GameplayTagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameplayTags != nullptr)
		*GameplayTags = params.GameplayTags;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGameplayTagContainer   InOutTagContainer              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   InTagContainer                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UBlueprintGameplayTagLibrary::STATIC_AppendGameplayTagContainers(struct FGameplayTagContainer* InOutTagContainer, const struct FGameplayTagContainer& InTagContainer)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15333);

	UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Params params;
	params.InTagContainer = InTagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InOutTagContainer != nullptr)
		*InOutTagContainer = params.InOutTagContainer;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTag            Tag                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlueprintGameplayTagLibrary::STATIC_AddGameplayTag(struct FGameplayTagContainer* TagContainer, const struct FGameplayTag& Tag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15330);

	UBlueprintGameplayTagLibrary_AddGameplayTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TagContainer != nullptr)
		*TagContainer = params.TagContainer;

}


// Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
// (BlueprintCosmetic)
// Parameters:
// struct FGameplayTag            TagToCheck                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameplayTagAssetInterface::HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15450);

	UGameplayTagAssetInterface_HasMatchingGameplayTag_Params params;
	params.TagToCheck = TagToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
// ()
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameplayTagAssetInterface::HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15447);

	UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params params;
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
// ()
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameplayTagAssetInterface::HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15444);

	UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Params params;
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (Parm, OutParm, NativeAccessSpecifierPublic)
void UGameplayTagAssetInterface::STATIC_GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15442);

	UGameplayTagAssetInterface_GetOwnedGameplayTags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TagContainer != nullptr)
		*TagContainer = params.TagContainer;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
