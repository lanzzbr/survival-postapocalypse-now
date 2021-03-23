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

// Function Message_Global.Message_Global_C.ShowMessageEvacuation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class ACv2_ScenarioZone_C*     ScenarioActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMessage_Global_C::STATIC_ShowMessageEvacuation(class ACv2_ScenarioZone_C* ScenarioActor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(73236);

	UMessage_Global_C_ShowMessageEvacuation_Params params;
	params.ScenarioActor = ScenarioActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Message_Global.Message_Global_C.ShowMyMessage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Speed_0_2_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMessage_Global_C::STATIC_ShowMyMessage(const struct FText& InText, float Speed_0_2_)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(73232);

	UMessage_Global_C_ShowMyMessage_Params params;
	params.InText = InText;
	params.Speed_0_2_ = Speed_0_2_;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Message_Global.Message_Global_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UMessage_Global_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(73231);

	UMessage_Global_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Message_Global.Message_Global_C.ExecuteUbergraph_Message_Global
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMessage_Global_C::STATIC_ExecuteUbergraph_Message_Global(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(73226);

	UMessage_Global_C_ExecuteUbergraph_Message_Global_Params params;
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
