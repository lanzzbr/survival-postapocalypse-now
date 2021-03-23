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

// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_VaresResponceToArray
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FIntegerVector>  IntegerArray                   (Parm, OutParm, ZeroConstructor)
void UZ_CV3_FunctionLybryary_C::STATIC_Z_CV3_VaresResponceToArray(const struct FString& String, class UObject* __WorldContext, TArray<struct FIntegerVector>* IntegerArray)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(52508);

	UZ_CV3_FunctionLybryary_C_Z_CV3_VaresResponceToArray_Params params;
	params.String = String;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IntegerArray != nullptr)
		*IntegerArray = params.IntegerArray;

}


// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_ConvertGetPlayerStateInfo
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 SourceString                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Hunger1                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Thirst1                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Tempirature1                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Health1                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_CV3_FunctionLybryary_C::STATIC_Z_CV3_ConvertGetPlayerStateInfo(const struct FString& SourceString, class UObject* __WorldContext, bool* Ok, int* Hunger1, int* Thirst1, float* Tempirature1, int* Health1)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(52506);

	UZ_CV3_FunctionLybryary_C_Z_CV3_ConvertGetPlayerStateInfo_Params params;
	params.SourceString = SourceString;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ok != nullptr)
		*Ok = params.Ok;
	if (Hunger1 != nullptr)
		*Hunger1 = params.Hunger1;
	if (Thirst1 != nullptr)
		*Thirst1 = params.Thirst1;
	if (Tempirature1 != nullptr)
		*Tempirature1 = params.Tempirature1;
	if (Health1 != nullptr)
		*Health1 = params.Health1;

}


// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_IsSingleMode
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSingle                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_CV3_FunctionLybryary_C::STATIC_Z_CV3_IsSingleMode(class UObject* __WorldContext, bool* IsSingle)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(52504);

	UZ_CV3_FunctionLybryary_C_Z_CV3_IsSingleMode_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSingle != nullptr)
		*IsSingle = params.IsSingle;

}


// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_SereverSetLootActorBP_GET_ON_GROUND(ServerOnly)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class ACv2_LootBP_C*           LootActorBP                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FZ_LootStr              Z_Loot                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_CV3_FunctionLybryary_C::STATIC_Z_CV3_SereverSetLootActorBP_GET_ON_GROUND_ServerOnly_(class ACv2_LootBP_C* LootActorBP, const struct FZ_LootStr& Z_Loot, class UObject* __WorldContext)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(52502);

	UZ_CV3_FunctionLybryary_C_Z_CV3_SereverSetLootActorBP_GET_ON_GROUND_ServerOnly__Params params;
	params.LootActorBP = LootActorBP;
	params.Z_Loot = Z_Loot;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_CharacterSwichWeapon
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Z_Socet                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_CV3_FunctionLybryary_C::STATIC_Z_CV3_CharacterSwichWeapon(class APlayerController* PlayerController, TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Z_Socet, class UObject* __WorldContext)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(52500);

	UZ_CV3_FunctionLybryary_C_Z_CV3_CharacterSwichWeapon_Params params;
	params.PlayerController = PlayerController;
	params.Z_Socet = Z_Socet;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_Name_To_ZLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   LootName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FZ_LootStr              ZLoot                          (Parm, OutParm, HasGetValueTypeHash)
void UZ_CV3_FunctionLybryary_C::STATIC_Z_CV3_Name_To_ZLoot(const struct FName& LootName, int Count, class UObject* __WorldContext, struct FZ_LootStr* ZLoot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(52498);

	UZ_CV3_FunctionLybryary_C_Z_CV3_Name_To_ZLoot_Params params;
	params.LootName = LootName;
	params.Count = Count;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ZLoot != nullptr)
		*ZLoot = params.ZLoot;

}


// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_ClearSplit
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_CV3_FunctionLybryary_C::STATIC_Z_CV3_ClearSplit(class UObject* __WorldContext)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(52496);

	UZ_CV3_FunctionLybryary_C_Z_CV3_ClearSplit_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_SetDebugMode
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           SetDebug                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_CV3_FunctionLybryary_C::STATIC_Z_CV3_SetDebugMode(bool SetDebug, class UObject* __WorldContext)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(52494);

	UZ_CV3_FunctionLybryary_C_Z_CV3_SetDebugMode_Params params;
	params.SetDebug = SetDebug;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_PrintDebugMessage(ClientOnly)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Param                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_CV3_FunctionLybryary_C::STATIC_Z_CV3_PrintDebugMessage_ClientOnly_(const struct FString& Name, const struct FString& Text, const struct FString& Param, float Time, class UObject* __WorldContext)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(52492);

	UZ_CV3_FunctionLybryary_C_Z_CV3_PrintDebugMessage_ClientOnly__Params params;
	params.Name = Name;
	params.Text = Text;
	params.Param = Param;
	params.Time = Time;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_GetDebugMode
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsDebugMode                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_CV3_FunctionLybryary_C::STATIC_Z_CV3_GetDebugMode(class UObject* __WorldContext, bool* IsDebugMode)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(52490);

	UZ_CV3_FunctionLybryary_C_Z_CV3_GetDebugMode_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsDebugMode != nullptr)
		*IsDebugMode = params.IsDebugMode;

}


// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_CheckCanSplit
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   LootName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CanSplit                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_CV3_FunctionLybryary_C::STATIC_Z_CV3_CheckCanSplit(const struct FName& LootName, class UObject* __WorldContext, bool* CanSplit)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(52488);

	UZ_CV3_FunctionLybryary_C_Z_CV3_CheckCanSplit_Params params;
	params.LootName = LootName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanSplit != nullptr)
		*CanSplit = params.CanSplit;

}


// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_UseAlcohol
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Effectivity                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_CV3_FunctionLybryary_C::STATIC_Z_CV3_UseAlcohol(float Effectivity, class UObject* PlayerController, class UObject* __WorldContext)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(52486);

	UZ_CV3_FunctionLybryary_C_Z_CV3_UseAlcohol_Params params;
	params.Effectivity = Effectivity;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_UseFood
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Effectivuty                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ChangeThirsty                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_CV3_FunctionLybryary_C::STATIC_Z_CV3_UseFood(float Effectivuty, class UObject* PlayerController, class UObject* __WorldContext, bool* ChangeThirsty)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(52484);

	UZ_CV3_FunctionLybryary_C_Z_CV3_UseFood_Params params;
	params.Effectivuty = Effectivuty;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ChangeThirsty != nullptr)
		*ChangeThirsty = params.ChangeThirsty;

}


// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_UseDrink
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Effectivuty                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ChangeThirsty                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_CV3_FunctionLybryary_C::STATIC_Z_CV3_UseDrink(float Effectivuty, class UObject* PlayerController, class UObject* __WorldContext, bool* ChangeThirsty)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(52482);

	UZ_CV3_FunctionLybryary_C_Z_CV3_UseDrink_Params params;
	params.Effectivuty = Effectivuty;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ChangeThirsty != nullptr)
		*ChangeThirsty = params.ChangeThirsty;

}


// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_UseUsable
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Z_Loot                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                 PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           WasUsefull                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_CV3_FunctionLybryary_C::STATIC_Z_CV3_UseUsable(const struct FZ_LootStr& Z_Loot, class UObject* PlayerController, class UObject* __WorldContext, bool* WasUsefull)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(52480);

	UZ_CV3_FunctionLybryary_C_Z_CV3_UseUsable_Params params;
	params.Z_Loot = Z_Loot;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WasUsefull != nullptr)
		*WasUsefull = params.WasUsefull;

}


// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_UseExplosive
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Z_Loot                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                 PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_CV3_FunctionLybryary_C::STATIC_Z_CV3_UseExplosive(const struct FZ_LootStr& Z_Loot, class UObject* PlayerController, class UObject* __WorldContext)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(52478);

	UZ_CV3_FunctionLybryary_C_Z_CV3_UseExplosive_Params params;
	params.Z_Loot = Z_Loot;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_UseMedicine
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Effectivuty                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ChangeHP                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_CV3_FunctionLybryary_C::STATIC_Z_CV3_UseMedicine(float Effectivuty, class UObject* PlayerController, class UObject* __WorldContext, bool* ChangeHP)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(52476);

	UZ_CV3_FunctionLybryary_C_Z_CV3_UseMedicine_Params params;
	params.Effectivuty = Effectivuty;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ChangeHP != nullptr)
		*ChangeHP = params.ChangeHP;

}


// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_GetEffectivity
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Effectivity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_CV3_FunctionLybryary_C::STATIC_Z_CV3_GetEffectivity(const struct FName& Name, class UObject* __WorldContext, float* Effectivity)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(52474);

	UZ_CV3_FunctionLybryary_C_Z_CV3_GetEffectivity_Params params;
	params.Name = Name;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Effectivity != nullptr)
		*Effectivity = params.Effectivity;

}


// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_SereverSetLootActorBP(ServerOnly)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class ACv2_LootBP_C*           LootActorBP                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FZ_LootStr              Z_Loot                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_CV3_FunctionLybryary_C::STATIC_Z_CV3_SereverSetLootActorBP_ServerOnly_(class ACv2_LootBP_C* LootActorBP, const struct FZ_LootStr& Z_Loot, class UObject* __WorldContext)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(52472);

	UZ_CV3_FunctionLybryary_C_Z_CV3_SereverSetLootActorBP_ServerOnly__Params params;
	params.LootActorBP = LootActorBP;
	params.Z_Loot = Z_Loot;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_CheckResourceForCraft
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class ACv2_playerController_C* Cv2_playerController           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> Craft                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_CV3_FunctionLybryary_C::STATIC_Z_CV3_CheckResourceForCraft(class ACv2_playerController_C* Cv2_playerController, TEnumAsByte<Cv2_CraftBuildings_ECv2_CraftBuildings> Craft, class UObject* __WorldContext, bool* Ok)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(52470);

	UZ_CV3_FunctionLybryary_C_Z_CV3_CheckResourceForCraft_Params params;
	params.Cv2_playerController = Cv2_playerController;
	params.Craft = Craft;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ok != nullptr)
		*Ok = params.Ok;

}


// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_Cv3LootType_ToZ_Equip_Socket
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_LootType_ECv2_LootType> LootType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Z_EquipSocket_EZ_EquipSocket> Z_EquipSocket                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_CV3_FunctionLybryary_C::STATIC_Z_CV3_Cv3LootType_ToZ_Equip_Socket(TEnumAsByte<Cv2_LootType_ECv2_LootType> LootType, class UObject* __WorldContext, TEnumAsByte<Z_EquipSocket_EZ_EquipSocket>* Z_EquipSocket)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(52468);

	UZ_CV3_FunctionLybryary_C_Z_CV3_Cv3LootType_ToZ_Equip_Socket_Params params;
	params.LootType = LootType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Z_EquipSocket != nullptr)
		*Z_EquipSocket = params.Z_EquipSocket;

}


// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.F_CV3_GetCv3Loot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_CV3_FunctionLybryary_C::STATIC_F_CV3_GetCv3Loot(class UObject* __WorldContext)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(52466);

	UZ_CV3_FunctionLybryary_C_F_CV3_GetCv3Loot_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_GetLootByType
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UZ_InventoryComponent_C* Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Cv2_LootType_ECv2_LootType> LootType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FZ_LootStr>      ZLoot                          (Parm, OutParm, ZeroConstructor)
void UZ_CV3_FunctionLybryary_C::STATIC_Z_CV3_GetLootByType(class UZ_InventoryComponent_C* Inventory, TEnumAsByte<Cv2_LootType_ECv2_LootType> LootType, class UObject* __WorldContext, TArray<struct FZ_LootStr>* ZLoot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(52464);

	UZ_CV3_FunctionLybryary_C_Z_CV3_GetLootByType_Params params;
	params.Inventory = Inventory;
	params.LootType = LootType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ZLoot != nullptr)
		*ZLoot = params.ZLoot;

}


// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_ZLoot_to_Loot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_LootStr>      Z_Loot                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCv2_LootStructure> Loot                           (Parm, OutParm, ZeroConstructor)
void UZ_CV3_FunctionLybryary_C::STATIC_Z_CV3_ZLoot_to_Loot(TArray<struct FZ_LootStr>* Z_Loot, class UObject* __WorldContext, TArray<struct FCv2_LootStructure>* Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(52461);

	UZ_CV3_FunctionLybryary_C_Z_CV3_ZLoot_to_Loot_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Z_Loot != nullptr)
		*Z_Loot = params.Z_Loot;
	if (Loot != nullptr)
		*Loot = params.Loot;

}


// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3Loot_To_Z_Loot_ONLYCARGO
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FCv2_LootStructure      CV3Loot                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FCv2_LootCargoStructure Cargo_Loot                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           IsCargo                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FZ_LootStr              Z_Loot                         (Parm, OutParm, HasGetValueTypeHash)
void UZ_CV3_FunctionLybryary_C::STATIC_Z_CV3Loot_To_Z_Loot_ONLYCARGO(const struct FCv2_LootStructure& CV3Loot, const struct FCv2_LootCargoStructure& Cargo_Loot, bool IsCargo, class UObject* __WorldContext, struct FZ_LootStr* Z_Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(52459);

	UZ_CV3_FunctionLybryary_C_Z_CV3Loot_To_Z_Loot_ONLYCARGO_Params params;
	params.CV3Loot = CV3Loot;
	params.Cargo_Loot = Cargo_Loot;
	params.IsCargo = IsCargo;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Z_Loot != nullptr)
		*Z_Loot = params.Z_Loot;

}


// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_WeaponToZLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum> Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FZ_LootStr              Out_Row                        (Parm, OutParm, HasGetValueTypeHash)
void UZ_CV3_FunctionLybryary_C::STATIC_Z_CV3_WeaponToZLoot(TEnumAsByte<Cv2_WeaponsEnum_ECv2_WeaponsEnum> Weapon, class UObject* __WorldContext, struct FZ_LootStr* Out_Row)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(52457);

	UZ_CV3_FunctionLybryary_C_Z_CV3_WeaponToZLoot_Params params;
	params.Weapon = Weapon;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out_Row != nullptr)
		*Out_Row = params.Out_Row;

}


// Function Z_CV3_FunctionLybryary.Z_CV3_FunctionLybryary_C.Z_CV3_CharacterToInventory
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UZ_InventoryManager_C*   Manager                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCV2_CharacterTypeStructure CV2_CharacterTypeStructure     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_CV3_FunctionLybryary_C::STATIC_Z_CV3_CharacterToInventory(class UZ_InventoryManager_C* Manager, struct FCV2_CharacterTypeStructure* CV2_CharacterTypeStructure, class UObject* __WorldContext)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(52455);

	UZ_CV3_FunctionLybryary_C_Z_CV3_CharacterToInventory_Params params;
	params.Manager = Manager;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CV2_CharacterTypeStructure != nullptr)
		*CV2_CharacterTypeStructure = params.CV2_CharacterTypeStructure;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
