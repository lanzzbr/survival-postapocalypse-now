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

// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.CheckRankLock
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChoseOfSidePlayerString_C::STATIC_CheckRankLock()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64004);

	UChoseOfSidePlayerString_C_CheckRankLock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.GetText_1
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UChoseOfSidePlayerString_C::GetText_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(64000);

	UChoseOfSidePlayerString_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.Get_TimeLock_Visibility_1
// ()
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UChoseOfSidePlayerString_C::Get_TimeLock_Visibility_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63997);

	UChoseOfSidePlayerString_C_Get_TimeLock_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.OnMouseButtonDown
// (BlueprintCosmetic, NetReliable)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UChoseOfSidePlayerString_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63995);

	UChoseOfSidePlayerString_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;


	return params.ReturnValue;
}


// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.SetSeletedStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChoseOfSidePlayerString_C::STATIC_SetSeletedStyle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63994);

	UChoseOfSidePlayerString_C_SetSeletedStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.SetUnselectedStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChoseOfSidePlayerString_C::STATIC_SetUnselectedStyle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63993);

	UChoseOfSidePlayerString_C_SetUnselectedStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.OnMouseEnter
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UChoseOfSidePlayerString_C::STATIC_OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63991);

	UChoseOfSidePlayerString_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.OnMouseLeave
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UChoseOfSidePlayerString_C::STATIC_OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63989);

	UChoseOfSidePlayerString_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.DrawString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FCV2_CharacterTypeStructure CharacterStr                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UChoseOfSidePlayerString_C::STATIC_DrawString(const struct FCV2_CharacterTypeStructure& CharacterStr)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63987);

	UChoseOfSidePlayerString_C_DrawString_Params params;
	params.CharacterStr = CharacterStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.Tick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChoseOfSidePlayerString_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63985);

	UChoseOfSidePlayerString_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.SetTimeLockStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Lock                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UChoseOfSidePlayerString_C::STATIC_SetTimeLockStyle(bool Lock)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63983);

	UChoseOfSidePlayerString_C_SetTimeLockStyle_Params params;
	params.Lock = Lock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.SetRankLockStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FCV2_CharacterTypeStructure CharacterStr                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UChoseOfSidePlayerString_C::STATIC_SetRankLockStyle(const struct FCV2_CharacterTypeStructure& CharacterStr)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63981);

	UChoseOfSidePlayerString_C_SetRankLockStyle_Params params;
	params.CharacterStr = CharacterStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChoseOfSidePlayerString_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63980);

	UChoseOfSidePlayerString_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.SetNormalStyle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UChoseOfSidePlayerString_C::STATIC_SetNormalStyle()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63979);

	UChoseOfSidePlayerString_C_SetNormalStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChoseOfSidePlayerString.ChoseOfSidePlayerString_C.ExecuteUbergraph_ChoseOfSidePlayerString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChoseOfSidePlayerString_C::STATIC_ExecuteUbergraph_ChoseOfSidePlayerString(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(63977);

	UChoseOfSidePlayerString_C_ExecuteUbergraph_ChoseOfSidePlayerString_Params params;
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
