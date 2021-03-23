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

// Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
// (Net)
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSoftObjectPath         ReturnValue                    (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSoftObjectPath UAssetRegistryHelpers::ToSoftObjectPath(const struct FAssetData& InAssetData)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15210);

	UAssetRegistryHelpers_ToSoftObjectPath_Params params;
	params.InAssetData = InAssetData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
// (BlueprintCosmetic, Net, NetReliable)
// Parameters:
// struct FARFilter               InFilter                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FTagAndValue>    InTagsAndValues                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FARFilter               ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FARFilter UAssetRegistryHelpers::SetFilterTagsAndValues(const struct FARFilter& InFilter, TArray<struct FTagAndValue> InTagsAndValues)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15205);

	UAssetRegistryHelpers_SetFilterTagsAndValues_Params params;
	params.InFilter = InFilter;
	params.InTagsAndValues = InTagsAndValues;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.IsValid
// (Net)
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAssetRegistryHelpers::IsValid(const struct FAssetData& InAssetData)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15202);

	UAssetRegistryHelpers_IsValid_Params params;
	params.InAssetData = InAssetData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.IsUAsset
// (Net)
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAssetRegistryHelpers::IsUAsset(const struct FAssetData& InAssetData)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15199);

	UAssetRegistryHelpers_IsUAsset_Params params;
	params.InAssetData = InAssetData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.IsRedirector
// (Net)
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAssetRegistryHelpers::IsRedirector(const struct FAssetData& InAssetData)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15196);

	UAssetRegistryHelpers_IsRedirector_Params params;
	params.InAssetData = InAssetData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
// (Net)
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAssetRegistryHelpers::IsAssetLoaded(const struct FAssetData& InAssetData)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15193);

	UAssetRegistryHelpers_IsAssetLoaded_Params params;
	params.InAssetData = InAssetData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetTagValue
// (BlueprintCosmetic, Net)
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   InTagName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OutTagValue                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAssetRegistryHelpers::GetTagValue(const struct FAssetData& InAssetData, const struct FName& InTagName, struct FString* OutTagValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15188);

	UAssetRegistryHelpers_GetTagValue_Params params;
	params.InAssetData = InAssetData;
	params.InTagName = InTagName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutTagValue != nullptr)
		*OutTagValue = params.OutTagValue;


	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetFullName
// (Net)
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAssetRegistryHelpers::GetFullName(const struct FAssetData& InAssetData)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15185);

	UAssetRegistryHelpers_GetFullName_Params params;
	params.InAssetData = InAssetData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetExportTextName
// (Net)
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAssetRegistryHelpers::GetExportTextName(const struct FAssetData& InAssetData)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15182);

	UAssetRegistryHelpers_GetExportTextName_Params params;
	params.InAssetData = InAssetData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetClass
// (Net)
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* UAssetRegistryHelpers::GetClass(const struct FAssetData& InAssetData)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15179);

	UAssetRegistryHelpers_GetClass_Params params;
	params.InAssetData = InAssetData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
// ()
// Parameters:
// TScriptInterface<class UAssetRegistry> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
TScriptInterface<class UAssetRegistry> UAssetRegistryHelpers::GetAssetRegistry()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15177);

	UAssetRegistryHelpers_GetAssetRegistry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetAsset
// (Net)
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UAssetRegistryHelpers::GetAsset(const struct FAssetData& InAssetData)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15174);

	UAssetRegistryHelpers_GetAsset_Params params;
	params.InAssetData = InAssetData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.CreateAssetData
// ()
// Parameters:
// class UObject*                 InAsset                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowBlueprintClass           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAssetData              ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAssetData UAssetRegistryHelpers::CreateAssetData(class UObject* InAsset, bool bAllowBlueprintClass)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15170);

	UAssetRegistryHelpers_CreateAssetData_Params params;
	params.InAsset = InAsset;
	params.bAllowBlueprintClass = bAllowBlueprintClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FAssetData>      AssetDataList                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FARFilter               Filter                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UAssetRegistry::STATIC_RunAssetsThroughFilter(TArray<struct FAssetData>* AssetDataList, const struct FARFilter& Filter)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15260);

	UAssetRegistry_RunAssetsThroughFilter_Params params;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AssetDataList != nullptr)
		*AssetDataList = params.AssetDataList;

}


// Function AssetRegistry.AssetRegistry.IsLoadingAssets
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAssetRegistry::IsLoadingAssets()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15258);

	UAssetRegistry_IsLoadingAssets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.HasAssets
// (Final, BlueprintCosmetic)
// Parameters:
// struct FName                   PackagePath                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRecursive                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAssetRegistry::HasAssets(const struct FName& PackagePath, bool bRecursive)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15254);

	UAssetRegistry_HasAssets_Params params;
	params.PackagePath = PackagePath;
	params.bRecursive = bRecursive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetSubPaths
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 InBasePath                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         OutPathList                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           bInRecurse                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAssetRegistry::STATIC_GetSubPaths(const struct FString& InBasePath, TArray<struct FString>* OutPathList, bool bInRecurse)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15249);

	UAssetRegistry_GetSubPaths_Params params;
	params.InBasePath = InBasePath;
	params.bInRecurse = bInRecurse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPathList != nullptr)
		*OutPathList = params.OutPathList;

}


// Function AssetRegistry.AssetRegistry.GetAssetsByPath
// (RequiredAPI, BlueprintCosmetic)
// Parameters:
// struct FName                   PackagePath                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAssetData>      OutAssetData                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           bRecursive                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeOnlyOnDiskAssets       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAssetRegistry::GetAssetsByPath(const struct FName& PackagePath, TArray<struct FAssetData>* OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15242);

	UAssetRegistry_GetAssetsByPath_Params params;
	params.PackagePath = PackagePath;
	params.bRecursive = bRecursive;
	params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;


	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAssetsByPackageName
// (Final, BlueprintCosmetic)
// Parameters:
// struct FName                   PackageName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAssetData>      OutAssetData                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           bIncludeOnlyOnDiskAssets       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAssetRegistry::GetAssetsByPackageName(const struct FName& PackageName, TArray<struct FAssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15236);

	UAssetRegistry_GetAssetsByPackageName_Params params;
	params.PackageName = PackageName;
	params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;


	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAssetsByClass
// (Final, BlueprintCosmetic)
// Parameters:
// struct FName                   ClassName                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAssetData>      OutAssetData                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           bSearchSubClasses              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAssetRegistry::GetAssetsByClass(const struct FName& ClassName, TArray<struct FAssetData>* OutAssetData, bool bSearchSubClasses)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15230);

	UAssetRegistry_GetAssetsByClass_Params params;
	params.ClassName = ClassName;
	params.bSearchSubClasses = bSearchSubClasses;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;


	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAssets
// (BlueprintCosmetic, Net, NetReliable)
// Parameters:
// struct FARFilter               Filter                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FAssetData>      OutAssetData                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAssetRegistry::GetAssets(const struct FARFilter& Filter, TArray<struct FAssetData>* OutAssetData)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15225);

	UAssetRegistry_GetAssets_Params params;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;


	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAssetByObjectPath
// ()
// Parameters:
// struct FName                   ObjectPath                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeOnlyOnDiskAssets       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAssetData              ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAssetData UAssetRegistry::GetAssetByObjectPath(const struct FName& ObjectPath, bool bIncludeOnlyOnDiskAssets)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15221);

	UAssetRegistry_GetAssetByObjectPath_Params params;
	params.ObjectPath = ObjectPath;
	params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAllCachedPaths
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FString>         OutPathList                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UAssetRegistry::STATIC_GetAllCachedPaths(TArray<struct FString>* OutPathList)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15218);

	UAssetRegistry_GetAllCachedPaths_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPathList != nullptr)
		*OutPathList = params.OutPathList;

}


// Function AssetRegistry.AssetRegistry.GetAllAssets
// (Final)
// Parameters:
// TArray<struct FAssetData>      OutAssetData                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           bIncludeOnlyOnDiskAssets       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAssetRegistry::GetAllAssets(TArray<struct FAssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(15213);

	UAssetRegistry_GetAllAssets_Params params;
	params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
