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

// Class AssetRegistry.AssetRegistryImpl
// 0x09F8 (FullSize[0x0A20] - InheritedSize[0x0028])
class UAssetRegistryImpl : public UObject
{
public:
	unsigned char                                      UnknownData_81GY[0x9F8];                                   // 0x0028(0x09F8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(354);
		return ptr;
	}



};

// Class AssetRegistry.AssetRegistryHelpers
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAssetRegistryHelpers : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(355);
		return ptr;
	}



	struct FSoftObjectPath ToSoftObjectPath(const struct FAssetData& InAssetData);
	struct FARFilter SetFilterTagsAndValues(const struct FARFilter& InFilter, TArray<struct FTagAndValue> InTagsAndValues);
	bool IsValid(const struct FAssetData& InAssetData);
	bool IsUAsset(const struct FAssetData& InAssetData);
	bool IsRedirector(const struct FAssetData& InAssetData);
	bool IsAssetLoaded(const struct FAssetData& InAssetData);
	bool GetTagValue(const struct FAssetData& InAssetData, const struct FName& InTagName, struct FString* OutTagValue);
	struct FString GetFullName(const struct FAssetData& InAssetData);
	struct FString GetExportTextName(const struct FAssetData& InAssetData);
	class UClass* GetClass(const struct FAssetData& InAssetData);
	TScriptInterface<class UAssetRegistry> GetAssetRegistry();
	class UObject* GetAsset(const struct FAssetData& InAssetData);
	struct FAssetData CreateAssetData(class UObject* InAsset, bool bAllowBlueprintClass);
};

// Class AssetRegistry.AssetRegistry
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAssetRegistry : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(356);
		return ptr;
	}



	void STATIC_RunAssetsThroughFilter(TArray<struct FAssetData>* AssetDataList, const struct FARFilter& Filter);
	bool IsLoadingAssets();
	bool HasAssets(const struct FName& PackagePath, bool bRecursive);
	void STATIC_GetSubPaths(const struct FString& InBasePath, TArray<struct FString>* OutPathList, bool bInRecurse);
	bool GetAssetsByPath(const struct FName& PackagePath, TArray<struct FAssetData>* OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets);
	bool GetAssetsByPackageName(const struct FName& PackageName, TArray<struct FAssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets);
	bool GetAssetsByClass(const struct FName& ClassName, TArray<struct FAssetData>* OutAssetData, bool bSearchSubClasses);
	bool GetAssets(const struct FARFilter& Filter, TArray<struct FAssetData>* OutAssetData);
	struct FAssetData GetAssetByObjectPath(const struct FName& ObjectPath, bool bIncludeOnlyOnDiskAssets);
	void STATIC_GetAllCachedPaths(TArray<struct FString>* OutPathList);
	bool GetAllAssets(TArray<struct FAssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
