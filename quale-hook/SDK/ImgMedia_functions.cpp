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

// Function ImgMedia.ImgMediaSource.SetSequencePath
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImgMediaSource::STATIC_SetSequencePath(const struct FString& Path)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29281);

	UImgMediaSource_SetSequencePath_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ImgMedia.ImgMediaSource.GetSequencePath
// ()
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UImgMediaSource::GetSequencePath()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29279);

	UImgMediaSource_GetSequencePath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ImgMedia.ImgMediaSource.GetProxies
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FString>         OutProxies                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UImgMediaSource::STATIC_GetProxies(TArray<struct FString>* OutProxies)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(29276);

	UImgMediaSource_GetProxies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutProxies != nullptr)
		*OutProxies = params.OutProxies;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
