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

// Function Tutorial_BASE.Tutorial_BASE_C.End
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UTutorial_BASE_C::STATIC_End()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58790);

	UTutorial_BASE_C_End_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tutorial_BASE.Tutorial_BASE_C.CheckPickAxe
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UTutorial_BASE_C::STATIC_CheckPickAxe()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58783);

	UTutorial_BASE_C_CheckPickAxe_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tutorial_BASE.Tutorial_BASE_C.CheckStone
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UTutorial_BASE_C::STATIC_CheckStone()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58780);

	UTutorial_BASE_C_CheckStone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tutorial_BASE.Tutorial_BASE_C.Frame
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UTutorial_BASE_C::STATIC_Frame()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58778);

	UTutorial_BASE_C_Frame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tutorial_BASE.Tutorial_BASE_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UTutorial_BASE_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58777);

	UTutorial_BASE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tutorial_BASE.Tutorial_BASE_C.Play_TutorialPlayer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FGUI_Tutorial_Message> Tut_Message                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UTutorial_BASE_C::STATIC_Play_TutorialPlayer(TArray<struct FGUI_Tutorial_Message> Tut_Message)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58774);

	UTutorial_BASE_C_Play_TutorialPlayer_Params params;
	params.Tut_Message = Tut_Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tutorial_BASE.Tutorial_BASE_C.Stop_TutorialPlayer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UTutorial_BASE_C::STATIC_Stop_TutorialPlayer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58773);

	UTutorial_BASE_C_Stop_TutorialPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tutorial_BASE.Tutorial_BASE_C.NextCheckers
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UTutorial_BASE_C::STATIC_NextCheckers()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58772);

	UTutorial_BASE_C_NextCheckers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tutorial_BASE.Tutorial_BASE_C.ExecuteUbergraph_Tutorial_BASE
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTutorial_BASE_C::STATIC_ExecuteUbergraph_Tutorial_BASE(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58770);

	UTutorial_BASE_C_ExecuteUbergraph_Tutorial_BASE_Params params;
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
