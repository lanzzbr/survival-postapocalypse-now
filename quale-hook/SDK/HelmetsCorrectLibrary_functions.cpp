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

// Function HelmetsCorrectLibrary.HelmetsCorrectLibrary_C.CorrectHelmetLocation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   Name_Model                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Scale                          (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHelmetsCorrectLibrary_C::STATIC_CorrectHelmetLocation(const struct FName& Name_Model, class UObject* __WorldContext, struct FVector* Location, struct FVector* Scale)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(57872);

	UHelmetsCorrectLibrary_C_CorrectHelmetLocation_Params params;
	params.Name_Model = Name_Model;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Scale != nullptr)
		*Scale = params.Scale;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
