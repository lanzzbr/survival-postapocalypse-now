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

// Function GameOverTopString.GameOverTopString_C.Draw
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Parametr                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Score                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   PlaceVar                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*              AvatarTexture                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameOverTopString_C::STATIC_Draw(const struct FText& Name, const struct FText& Parametr, const struct FText& Score, const struct FText& PlaceVar, class UTexture2D* AvatarTexture)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(41734);

	UGameOverTopString_C_Draw_Params params;
	params.Name = Name;
	params.Parametr = Parametr;
	params.Score = Score;
	params.PlaceVar = PlaceVar;
	params.AvatarTexture = AvatarTexture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverTopString.GameOverTopString_C.ShowMe
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameOverTopString_C::STATIC_ShowMe(float Duration)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(41727);

	UGameOverTopString_C_ShowMe_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverTopString.GameOverTopString_C.MiniDraw
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Score                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameOverTopString_C::STATIC_MiniDraw(const struct FText& Name, const struct FText& Score, class UTexture2D* Icon)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(41725);

	UGameOverTopString_C_MiniDraw_Params params;
	params.Name = Name;
	params.Score = Score;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameOverTopString.GameOverTopString_C.ExecuteUbergraph_GameOverTopString
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameOverTopString_C::STATIC_ExecuteUbergraph_GameOverTopString(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(41721);

	UGameOverTopString_C_ExecuteUbergraph_GameOverTopString_Params params;
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
