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

// Function Z_Tooltip_Root.Z_Tooltip_Root_C.RootIni
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UImage*                  Root_Icon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*              Root_NameText                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*              Root_DescriptionText           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_Tooltip_Root_C::STATIC_RootIni(class UImage* Root_Icon, class UTextBlock* Root_NameText, class UTextBlock* Root_DescriptionText)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44329);

	UZ_Tooltip_Root_C_RootIni_Params params;
	params.Root_Icon = Root_Icon;
	params.Root_NameText = Root_NameText;
	params.Root_DescriptionText = Root_DescriptionText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Tooltip_Root.Z_Tooltip_Root_C.Root_DrawFromZLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_Tooltip_Root_C::STATIC_Root_DrawFromZLoot(const struct FName& Name)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44324);

	UZ_Tooltip_Root_C_Root_DrawFromZLoot_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Tooltip_Root.Z_Tooltip_Root_C.Root_Hide
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           Hide                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_Tooltip_Root_C::STATIC_Root_Hide(bool Hide)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44320);

	UZ_Tooltip_Root_C_Root_Hide_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Tooltip_Root.Z_Tooltip_Root_C.Root_DrawFromCraft
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   Root_Name                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_Tooltip_Root_C::STATIC_Root_DrawFromCraft(const struct FName& Root_Name)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44318);

	UZ_Tooltip_Root_C_Root_DrawFromCraft_Params params;
	params.Root_Name = Root_Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Tooltip_Root.Z_Tooltip_Root_C.Root_SetMass
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Mass                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_Tooltip_Root_C::STATIC_Root_SetMass(float Mass)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44316);

	UZ_Tooltip_Root_C_Root_SetMass_Params params;
	params.Mass = Mass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_Tooltip_Root.Z_Tooltip_Root_C.ExecuteUbergraph_Z_Tooltip_Root
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_Tooltip_Root_C::STATIC_ExecuteUbergraph_Z_Tooltip_Root(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(44313);

	UZ_Tooltip_Root_C_ExecuteUbergraph_Z_Tooltip_Root_Params params;
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
