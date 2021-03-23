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

// Function MP5_Base_Skeleton_AnimBlueprint.MP5_Base_Skeleton_AnimBlueprint_C.ExecuteUbergraph_MP5_Base_Skeleton_AnimBlueprint
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMP5_Base_Skeleton_AnimBlueprint_C::STATIC_ExecuteUbergraph_MP5_Base_Skeleton_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(92539);

	UMP5_Base_Skeleton_AnimBlueprint_C_ExecuteUbergraph_MP5_Base_Skeleton_AnimBlueprint_Params params;
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
