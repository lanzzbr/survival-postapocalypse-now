﻿// Name: ANUSGAME, Version: 4.18

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

// Function BENELLI_Base_Skeleton_AnimBP.BENELLI_Base_Skeleton_AnimBP_C.ExecuteUbergraph_BENELLI_Base_Skeleton_AnimBP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBENELLI_Base_Skeleton_AnimBP_C::STATIC_ExecuteUbergraph_BENELLI_Base_Skeleton_AnimBP(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(53653);

	UBENELLI_Base_Skeleton_AnimBP_C_ExecuteUbergraph_BENELLI_Base_Skeleton_AnimBP_Params params;
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
