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

// Function DamageDirectionBase.DamageDirectionBase_C.RotateImage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UDamageDirectionBase_C::STATIC_RotateImage()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58985);

	UDamageDirectionBase_C_RotateImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DamageDirectionBase.DamageDirectionBase_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UDamageDirectionBase_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58984);

	UDamageDirectionBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DamageDirectionBase.DamageDirectionBase_C.ShowDamage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDamageDirectionBase_C::STATIC_ShowDamage(const struct FVector& Direction)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58982);

	UDamageDirectionBase_C_ShowDamage_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DamageDirectionBase.DamageDirectionBase_C.ExecuteUbergraph_DamageDirectionBase
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDamageDirectionBase_C::STATIC_ExecuteUbergraph_DamageDirectionBase(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(58980);

	UDamageDirectionBase_C_ExecuteUbergraph_DamageDirectionBase_Params params;
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
