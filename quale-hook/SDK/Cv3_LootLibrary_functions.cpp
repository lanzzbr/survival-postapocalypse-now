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

// Function Cv3_LootLibrary.Cv3_LootLibrary_C.CheckCountLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   LootName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OutCount                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv3_LootLibrary_C::STATIC_CheckCountLoot(const struct FName& LootName, class UObject* __WorldContext, int* OutCount)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34249);

	UCv3_LootLibrary_C_CheckCountLoot_Params params;
	params.LootName = LootName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutCount != nullptr)
		*OutCount = params.OutCount;

}


// Function Cv3_LootLibrary.Cv3_LootLibrary_C.GenerateLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv3_FurnitureLootType_ECv3_FurnitureLootType> LootType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   LootName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCv3_LootLibrary_C::STATIC_GenerateLoot(TEnumAsByte<Cv3_FurnitureLootType_ECv3_FurnitureLootType> LootType, class UObject* __WorldContext, struct FName* LootName, int* Count)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(34247);

	UCv3_LootLibrary_C_GenerateLoot_Params params;
	params.LootType = LootType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LootName != nullptr)
		*LootName = params.LootName;
	if (Count != nullptr)
		*Count = params.Count;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
