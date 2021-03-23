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

// Function Pointer_EnemyShtab.Pointer_EnemyShtab_C.GetContentColorAndOpacity_1
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UPointer_EnemyShtab_C::GetContentColorAndOpacity_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(38878);

	UPointer_EnemyShtab_C_GetContentColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Pointer_EnemyShtab.Pointer_EnemyShtab_C.GetText_1
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UPointer_EnemyShtab_C::GetText_1()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(38869);

	UPointer_EnemyShtab_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Pointer_EnemyShtab.Pointer_EnemyShtab_C.Tick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPointer_EnemyShtab_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(38867);

	UPointer_EnemyShtab_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pointer_EnemyShtab.Pointer_EnemyShtab_C.Destruct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UPointer_EnemyShtab_C::STATIC_Destruct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(38866);

	UPointer_EnemyShtab_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pointer_EnemyShtab.Pointer_EnemyShtab_C.ExecuteUbergraph_Pointer_EnemyShtab
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPointer_EnemyShtab_C::STATIC_ExecuteUbergraph_Pointer_EnemyShtab(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(38864);

	UPointer_EnemyShtab_C_ExecuteUbergraph_Pointer_EnemyShtab_Params params;
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
