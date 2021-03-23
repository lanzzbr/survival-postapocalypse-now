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

// Function SurvBarigaBaseActor.SurvBarigaBaseActor_C.GetBariga
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASurvBarigaBaseActor_C*  BarigaActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvBarigaBaseActor_C::STATIC_GetBariga(int Index, class ASurvBarigaBaseActor_C** BarigaActor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49823);

	ASurvBarigaBaseActor_C_GetBariga_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BarigaActor != nullptr)
		*BarigaActor = params.BarigaActor;

}


// Function SurvBarigaBaseActor.SurvBarigaBaseActor_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurvBarigaBaseActor_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49822);

	ASurvBarigaBaseActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvBarigaBaseActor.SurvBarigaBaseActor_C.CreateBarigs
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurvBarigaBaseActor_C::STATIC_CreateBarigs()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49821);

	ASurvBarigaBaseActor_C_CreateBarigs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvBarigaBaseActor.SurvBarigaBaseActor_C.ini
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurvBarigaBaseActor_C::STATIC_ini()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49820);

	ASurvBarigaBaseActor_C_ini_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvBarigaBaseActor.SurvBarigaBaseActor_C.CreateAllTrade
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurvBarigaBaseActor_C::STATIC_CreateAllTrade()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49819);

	ASurvBarigaBaseActor_C_CreateAllTrade_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvBarigaBaseActor.SurvBarigaBaseActor_C.IniToAll
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void ASurvBarigaBaseActor_C::STATIC_IniToAll()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49818);

	ASurvBarigaBaseActor_C_IniToAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SurvBarigaBaseActor.SurvBarigaBaseActor_C.ExecuteUbergraph_SurvBarigaBaseActor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvBarigaBaseActor_C::STATIC_ExecuteUbergraph_SurvBarigaBaseActor(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(49797);

	ASurvBarigaBaseActor_C_ExecuteUbergraph_SurvBarigaBaseActor_Params params;
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
