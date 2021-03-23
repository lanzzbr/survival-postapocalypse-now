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

// Function Info_SliderSlot.Info_SliderSlot_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfo_SliderSlot_C::STATIC_Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(42060);

	UInfo_SliderSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_SliderSlot.Info_SliderSlot_C.SetImage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInfo_SliderSlot_C::STATIC_SetImage(class UTexture2D* Texture)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(42069);

	UInfo_SliderSlot_C_SetImage_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_SliderSlot.Info_SliderSlot_C.SetSelected
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfo_SliderSlot_C::STATIC_SetSelected()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(42071);

	UInfo_SliderSlot_C_SetSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_SliderSlot.Info_SliderSlot_C.Set unselected
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UInfo_SliderSlot_C::STATIC_Set_unselected()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(42068);

	UInfo_SliderSlot_C_Set_unselected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Info_SliderSlot.Info_SliderSlot_C.ExecuteUbergraph_Info_SliderSlot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInfo_SliderSlot_C::STATIC_ExecuteUbergraph_Info_SliderSlot(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(42064);

	UInfo_SliderSlot_C_ExecuteUbergraph_Info_SliderSlot_Params params;
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
