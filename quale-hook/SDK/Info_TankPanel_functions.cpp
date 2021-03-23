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

// Function Info_TankPanel.Info_TankPanel_C.GetText_1
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UInfo_TankPanel_C::GetText_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79907);

	UInfo_TankPanel_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Info_TankPanel.Info_TankPanel_C.CheckVariables
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfo_TankPanel_C::STATIC_CheckVariables()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79905);

	UInfo_TankPanel_C_CheckVariables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_TankPanel.Info_TankPanel_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfo_TankPanel_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79904);

	UInfo_TankPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_TankPanel.Info_TankPanel_C.Destruct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfo_TankPanel_C::STATIC_Destruct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79903);

	UInfo_TankPanel_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_TankPanel.Info_TankPanel_C.OnPanelBeginShow
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfo_TankPanel_C::STATIC_OnPanelBeginShow()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(81387);

	UInfo_TankPanel_C_OnPanelBeginShow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_TankPanel.Info_TankPanel_C.CheckALL
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfo_TankPanel_C::STATIC_CheckALL()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79902);

	UInfo_TankPanel_C_CheckALL_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_TankPanel.Info_TankPanel_C.ExecuteUbergraph_Info_TankPanel
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInfo_TankPanel_C::STATIC_ExecuteUbergraph_Info_TankPanel(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(79900);

	UInfo_TankPanel_C_ExecuteUbergraph_Info_TankPanel_Params params;
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
