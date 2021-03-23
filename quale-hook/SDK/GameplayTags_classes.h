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

// Class GameplayTags.BlueprintGameplayTagLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(366);
		return ptr;
	}



	bool RemoveGameplayTag(struct FGameplayTagContainer* TagContainer, const struct FGameplayTag& Tag);
	bool NotEqual_TagTag(const struct FGameplayTag& A, const struct FString& B);
	bool NotEqual_TagContainerTagContainer(const struct FGameplayTagContainer& A, const struct FString& B);
	bool NotEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B);
	bool NotEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B);
	bool MatchesTag(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, bool bExactMatch);
	bool MatchesAnyTags(const struct FGameplayTag& TagOne, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
	struct FGameplayTagContainer MakeLiteralGameplayTagContainer(const struct FGameplayTagContainer& Value);
	struct FGameplayTag MakeLiteralGameplayTag(const struct FGameplayTag& Value);
	struct FGameplayTagQuery MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery);
	struct FGameplayTagContainer MakeGameplayTagContainerFromTag(const struct FGameplayTag& SingleTag);
	struct FGameplayTagContainer MakeGameplayTagContainerFromArray(TArray<struct FGameplayTag> GameplayTags);
	bool IsGameplayTagValid(const struct FGameplayTag& GameplayTag);
	bool HasTag(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag, bool bExactMatch);
	bool HasAnyTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
	bool HasAllTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
	bool HasAllMatchingGameplayTags(const TScriptInterface<class UGameplayTagAssetInterface>& TagContainerInterface, const struct FGameplayTagContainer& OtherContainer);
	struct FName GetTagName(const struct FGameplayTag& GameplayTag);
	int GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer);
	struct FString GetDebugStringFromGameplayTagContainer(const struct FGameplayTagContainer& TagContainer);
	struct FString GetDebugStringFromGameplayTag(const struct FGameplayTag& GameplayTag);
	void STATIC_GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, class UClass* ActorClass, const struct FGameplayTagQuery& GameplayTagQuery, TArray<class AActor*>* OutActors);
	bool EqualEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B);
	bool EqualEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B);
	bool DoesTagAssetInterfaceHaveTag(const TScriptInterface<class UGameplayTagAssetInterface>& TagContainerInterface, const struct FGameplayTag& Tag);
	bool DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagQuery& TagQuery);
	void STATIC_BreakGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer, TArray<struct FGameplayTag>* GameplayTags);
	void STATIC_AppendGameplayTagContainers(struct FGameplayTagContainer* InOutTagContainer, const struct FGameplayTagContainer& InTagContainer);
	void STATIC_AddGameplayTag(struct FGameplayTagContainer* TagContainer, const struct FGameplayTag& Tag);
};

// Class GameplayTags.GameplayTagAssetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGameplayTagAssetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(367);
		return ptr;
	}



	bool HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck);
	bool HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer);
	bool HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer);
	void STATIC_GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer);
};

// Class GameplayTags.EditableGameplayTagQuery
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
class UEditableGameplayTagQuery : public UObject
{
public:
	struct FString                                     UserDescription;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2X6D[0x10];                                    // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEditableGameplayTagQueryExpression*         RootExpression;                                            // 0x0048(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                           TagQueryExportText_Helper;                                 // 0x0050(0x0048) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(368);
		return ptr;
	}



};

// Class GameplayTags.EditableGameplayTagQueryExpression
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEditableGameplayTagQueryExpression : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(369);
		return ptr;
	}



};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                       Tags;                                                      // 0x0028(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(370);
		return ptr;
	}



};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                       Tags;                                                      // 0x0028(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(371);
		return ptr;
	}



};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                       Tags;                                                      // 0x0028(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(372);
		return ptr;
	}



};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                               // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(373);
		return ptr;
	}



};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                               // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(374);
		return ptr;
	}



};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                               // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(375);
		return ptr;
	}



};

// Class GameplayTags.GameplayTagsManager
// 0x0158 (FullSize[0x0180] - InheritedSize[0x0028])
class UGameplayTagsManager : public UObject
{
public:
	unsigned char                                      UnknownData_FK39[0x80];                                    // 0x0028(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGameplayTagSource>                  TagSources;                                                // 0x00A8(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Z2I3[0x68];                                    // 0x00B8(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UDataTable*>                          GameplayTagTables;                                         // 0x0120(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HMFW[0x50];                                    // 0x0130(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(376);
		return ptr;
	}



};

// Class GameplayTags.GameplayTagsList
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UGameplayTagsList : public UObject
{
public:
	struct FString                                     ConfigFileName;                                            // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagTableRow>                GameplayTagList;                                           // 0x0038(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(377);
		return ptr;
	}



};

// Class GameplayTags.GameplayTagsSettings
// 0x0058 (FullSize[0x00A0] - InheritedSize[0x0048])
class UGameplayTagsSettings : public UGameplayTagsList
{
public:
	bool                                               ImportTagsFromConfig;                                      // 0x0048(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               WarnOnInvalidTags;                                         // 0x0049(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YV4B[0x6];                                     // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGameplayTagCategoryRemap>           CategoryRemapping;                                         // 0x0050(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                               FastReplication;                                           // 0x0060(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9MP4[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSoftObjectPath>                     GameplayTagTableList;                                      // 0x0068(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagRedirect>                GameplayTagRedirects;                                      // 0x0078(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FName>                               CommonlyReplicatedTags;                                    // 0x0088(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	int                                                NumBitsForContainerSize;                                   // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NetIndexFirstBitSegment;                                   // 0x009C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(378);
		return ptr;
	}



};

// Class GameplayTags.GameplayTagsDeveloperSettings
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UGameplayTagsDeveloperSettings : public UObject
{
public:
	struct FString                                     DeveloperConfigName;                                       // 0x0028(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(379);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
