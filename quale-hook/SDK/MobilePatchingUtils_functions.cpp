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

// Function MobilePatchingUtils.MobileInstalledContent.Mount
// (BlueprintCosmetic)
// Parameters:
// int                            PakOrder                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MountPoint                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMobileInstalledContent::Mount(int PakOrder, const struct FString& MountPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29451);

	UMobileInstalledContent_Mount_Params params;
	params.PakOrder = PakOrder;
	params.MountPoint = MountPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMobileInstalledContent::GetInstalledContentSize()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29449);

	UMobileInstalledContent_GetInstalledContentSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMobileInstalledContent::GetDiskFreeSpace()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29447);

	UMobileInstalledContent_GetDiskFreeSpace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.StartInstall
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FScriptDelegate         OnSucceeded                    (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnFailed                       (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UMobilePendingContent::STATIC_StartInstall(const struct FScriptDelegate& OnSucceeded, const struct FScriptDelegate& OnFailed)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29467);

	UMobilePendingContent_StartInstall_Params params;
	params.OnSucceeded = OnSucceeded;
	params.OnFailed = OnFailed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMobilePendingContent::GetTotalDownloadedSize()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29465);

	UMobilePendingContent_GetTotalDownloadedSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMobilePendingContent::GetRequiredDiskSpace()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29463);

	UMobilePendingContent_GetRequiredDiskSpace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMobilePendingContent::GetInstallProgress()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29461);

	UMobilePendingContent_GetInstallProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UMobilePendingContent::GetDownloadStatusText()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29459);

	UMobilePendingContent_GetDownloadStatusText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMobilePendingContent::GetDownloadSpeed()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29457);

	UMobilePendingContent_GetDownloadSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMobilePendingContent::GetDownloadSize()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29455);

	UMobilePendingContent_GetDownloadSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 RemoteManifestURL              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CloudURL                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InstallDirectory               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnSucceeded                    (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnFailed                       (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UMobilePatchingLibrary::STATIC_RequestContent(const struct FString& RemoteManifestURL, const struct FString& CloudURL, const struct FString& InstallDirectory, const struct FScriptDelegate& OnSucceeded, const struct FScriptDelegate& OnFailed)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29480);

	UMobilePatchingLibrary_RequestContent_Params params;
	params.RemoteManifestURL = RemoteManifestURL;
	params.CloudURL = CloudURL;
	params.InstallDirectory = InstallDirectory;
	params.OnSucceeded = OnSucceeded;
	params.OnFailed = OnFailed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMobilePatchingLibrary::HasActiveWiFiConnection()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29478);

	UMobilePatchingLibrary_HasActiveWiFiConnection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames
// ()
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UMobilePatchingLibrary::GetSupportedPlatformNames()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29475);

	UMobilePatchingLibrary_GetSupportedPlatformNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent
// ()
// Parameters:
// struct FString                 InstallDirectory               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMobileInstalledContent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMobileInstalledContent* UMobilePatchingLibrary::GetInstalledContent(const struct FString& InstallDirectory)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29472);

	UMobilePatchingLibrary_GetInstalledContent_Params params;
	params.InstallDirectory = InstallDirectory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMobilePatchingLibrary::GetActiveDeviceProfileName()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29470);

	UMobilePatchingLibrary_GetActiveDeviceProfileName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
