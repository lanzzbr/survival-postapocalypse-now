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

// Function CommandMessage.CommandMessage_C.ShowMessage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   InstigatorName                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UCommandMessage_C::STATIC_ShowMessage(const struct FText& Message, const struct FText& InstigatorName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43123);

	UCommandMessage_C_ShowMessage_Params params;
	params.Message = Message;
	params.InstigatorName = InstigatorName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CommandMessage.CommandMessage_C.ExecuteUbergraph_CommandMessage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCommandMessage_C::STATIC_ExecuteUbergraph_CommandMessage(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(43119);

	UCommandMessage_C_ExecuteUbergraph_CommandMessage_Params params;
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
