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

// Function ShootingTargetPointWidget.ShootingTargetPointWidget_C.SetText
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Distance                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UShootingTargetPointWidget_C::STATIC_SetText(const struct FText& InText, const struct FText& Distance)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(90068);

	UShootingTargetPointWidget_C_SetText_Params params;
	params.InText = InText;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ShootingTargetPointWidget.ShootingTargetPointWidget_C.ExecuteUbergraph_ShootingTargetPointWidget
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShootingTargetPointWidget_C::STATIC_ExecuteUbergraph_ShootingTargetPointWidget(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(90062);

	UShootingTargetPointWidget_C_ExecuteUbergraph_ShootingTargetPointWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
