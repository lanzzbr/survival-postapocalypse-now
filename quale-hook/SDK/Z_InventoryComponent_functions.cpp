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

// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_CONTROLLER_GetSlots
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_SlotStr>      Slots                          (Parm, OutParm, ZeroConstructor)
void UZ_InventoryComponent_C::STATIC_ZL_CONTROLLER_GetSlots(TArray<struct FZ_SlotStr>* Slots)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36327);

	UZ_InventoryComponent_C_ZL_CONTROLLER_GetSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Slots != nullptr)
		*Slots = params.Slots;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.CheckAmmo(ClientOnly)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   OldLootName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FZ_LootStr              NewLoo                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryComponent_C::STATIC_CheckAmmo_ClientOnly_(int Index, const struct FName& OldLootName, const struct FZ_LootStr& NewLoo)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36325);

	UZ_InventoryComponent_C_CheckAmmo_ClientOnly__Params params;
	params.Index = Index;
	params.OldLootName = OldLootName;
	params.NewLoo = NewLoo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.GetInventorySummaryCost
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Cost                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryComponent_C::STATIC_GetInventorySummaryCost(int* Cost)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36323);

	UZ_InventoryComponent_C_GetInventorySummaryCost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Cost != nullptr)
		*Cost = params.Cost;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.TrySetToInventoryIndex
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryComponent_C::STATIC_TrySetToInventoryIndex(int Index, const struct FZ_LootStr& Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36321);

	UZ_InventoryComponent_C_TrySetToInventoryIndex_Params params;
	params.Index = Index;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.InventoryClear(NoSync)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryComponent_C::STATIC_InventoryClear_NoSync_()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36319);

	UZ_InventoryComponent_C_InventoryClear_NoSync__Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.LootAddLootStr
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Z_LootStr                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           HaveReturn                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FZ_LootStr              Z_Loot                         (Parm, OutParm, HasGetValueTypeHash)
void UZ_InventoryComponent_C::STATIC_LootAddLootStr(const struct FZ_LootStr& Z_LootStr, bool* HaveReturn, struct FZ_LootStr* Z_Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36317);

	UZ_InventoryComponent_C_LootAddLootStr_Params params;
	params.Z_LootStr = Z_LootStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HaveReturn != nullptr)
		*HaveReturn = params.HaveReturn;
	if (Z_Loot != nullptr)
		*Z_Loot = params.Z_Loot;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.IsInventoryEmpty
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           IsEmpty                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_InventoryComponent_C::STATIC_IsInventoryEmpty(bool* IsEmpty)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36315);

	UZ_InventoryComponent_C_IsInventoryEmpty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsEmpty != nullptr)
		*IsEmpty = params.IsEmpty;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.LootDecrementLootCount(ServerOnly)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   LootName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryComponent_C::STATIC_LootDecrementLootCount_ServerOnly_(const struct FName& LootName, int Count)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36313);

	UZ_InventoryComponent_C_LootDecrementLootCount_ServerOnly__Params params;
	params.LootName = LootName;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.LootAddLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   LootName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           HaveReturn                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FZ_LootStr              Z_Loot                         (Parm, OutParm, HasGetValueTypeHash)
void UZ_InventoryComponent_C::STATIC_LootAddLoot(const struct FName& LootName, int Count, bool* HaveReturn, struct FZ_LootStr* Z_Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36311);

	UZ_InventoryComponent_C_LootAddLoot_Params params;
	params.LootName = LootName;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HaveReturn != nullptr)
		*HaveReturn = params.HaveReturn;
	if (Z_Loot != nullptr)
		*Z_Loot = params.Z_Loot;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.Loot_IncrementLoot(ServerOnly)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   LootName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryComponent_C::STATIC_Loot_IncrementLoot_ServerOnly_(const struct FName& LootName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36309);

	UZ_InventoryComponent_C_Loot_IncrementLoot_ServerOnly__Params params;
	params.LootName = LootName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.LootGetLootCount
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   LootName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryComponent_C::STATIC_LootGetLootCount(const struct FName& LootName, int* Count)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36307);

	UZ_InventoryComponent_C_LootGetLootCount_Params params;
	params.LootName = LootName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.LootDecrementLoot(ServerOnly)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   LootName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryComponent_C::STATIC_LootDecrementLoot_ServerOnly_(const struct FName& LootName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36305);

	UZ_InventoryComponent_C_LootDecrementLoot_ServerOnly__Params params;
	params.LootName = LootName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.DisconnectManager
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UZ_InventoryManager_C*   Manager                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryComponent_C::STATIC_DisconnectManager(class UZ_InventoryManager_C** Manager)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36303);

	UZ_InventoryComponent_C_DisconnectManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Manager != nullptr)
		*Manager = params.Manager;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.ConnectManager
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UZ_InventoryManager_C*   Manager                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryComponent_C::STATIC_ConnectManager(class UZ_InventoryManager_C** Manager)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36301);

	UZ_InventoryComponent_C_ConnectManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Manager != nullptr)
		*Manager = params.Manager;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.UpdateInfo
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Z_InventoryActions_EZ_InventoryActions> Actions                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FZ_LootStr              OldLoot                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryComponent_C::STATIC_UpdateInfo(TEnumAsByte<Z_InventoryActions_EZ_InventoryActions> Actions, const struct FZ_LootStr& Loot, int Index, const struct FZ_LootStr& OldLoot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36299);

	UZ_InventoryComponent_C_UpdateInfo_Params params;
	params.Actions = Actions;
	params.Loot = Loot;
	params.Index = Index;
	params.OldLoot = OldLoot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.Slot_ClearLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryComponent_C::STATIC_Slot_ClearLoot(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36297);

	UZ_InventoryComponent_C_Slot_ClearLoot_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.Slot_GetEmpty(NoToEqpt)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           BackPackOnly                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsOk                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            EmptyIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryComponent_C::STATIC_Slot_GetEmpty_NoToEqpt_(bool BackPackOnly, bool* IsOk, int* EmptyIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36295);

	UZ_InventoryComponent_C_Slot_GetEmpty_NoToEqpt__Params params;
	params.BackPackOnly = BackPackOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsOk != nullptr)
		*IsOk = params.IsOk;
	if (EmptyIndex != nullptr)
		*EmptyIndex = params.EmptyIndex;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.Slot_GetLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FZ_LootStr              Loot                           (Parm, OutParm, HasGetValueTypeHash)
void UZ_InventoryComponent_C::STATIC_Slot_GetLoot(int Index, struct FZ_LootStr* Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36293);

	UZ_InventoryComponent_C_Slot_GetLoot_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Loot != nullptr)
		*Loot = params.Loot;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.Slot_SetLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UZ_InventoryComponent_C::STATIC_Slot_SetLoot(int Index, struct FZ_LootStr* Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36291);

	UZ_InventoryComponent_C_Slot_SetLoot_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Loot != nullptr)
		*Loot = params.Loot;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.InitializeInventory
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_SlotStr>      InventorySLOTS                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UZ_InventoryComponent_C::STATIC_InitializeInventory(TArray<struct FZ_SlotStr>* InventorySLOTS)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36282);

	UZ_InventoryComponent_C_InitializeInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InventorySLOTS != nullptr)
		*InventorySLOTS = params.InventorySLOTS;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_GUI_ConstructMenu
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_SlotStr>      Slots                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UZ_InventoryComponent_C::STATIC_ZL_GUI_ConstructMenu(TArray<struct FZ_SlotStr>* Slots)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36279);

	UZ_InventoryComponent_C_ZL_GUI_ConstructMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Slots != nullptr)
		*Slots = params.Slots;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_GUI_Update
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_LootStr>      Inventori                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FZ_LootStr>      Container                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           IsOnFloorMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UZ_InventoryComponent_C::STATIC_ZL_GUI_Update(TArray<struct FZ_LootStr>* Inventori, TArray<struct FZ_LootStr>* Container, bool IsOnFloorMode)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36276);

	UZ_InventoryComponent_C_ZL_GUI_Update_Params params;
	params.IsOnFloorMode = IsOnFloorMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Inventori != nullptr)
		*Inventori = params.Inventori;
	if (Container != nullptr)
		*Container = params.Container;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_GUI_ShowInventory
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryComponent_C::STATIC_ZL_GUI_ShowInventory()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36275);

	UZ_InventoryComponent_C_ZL_GUI_ShowInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_GUI_HideInventory
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryComponent_C::STATIC_ZL_GUI_HideInventory()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36274);

	UZ_InventoryComponent_C_ZL_GUI_HideInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_GUI_Construkt_Container
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_LootStr>      ContainerInventory             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FZ_ContainerInfo        ContInform                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryComponent_C::STATIC_ZL_GUI_Construkt_Container(TArray<struct FZ_LootStr>* ContainerInventory, const struct FZ_ContainerInfo& ContInform)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36271);

	UZ_InventoryComponent_C_ZL_GUI_Construkt_Container_Params params;
	params.ContInform = ContInform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ContainerInventory != nullptr)
		*ContainerInventory = params.ContainerInventory;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_GUI_ClearContainer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryComponent_C::STATIC_ZL_GUI_ClearContainer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36270);

	UZ_InventoryComponent_C_ZL_GUI_ClearContainer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_GUI_DnD_Drag
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UUserWidget*             DragSlot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryComponent_C::STATIC_ZL_GUI_DnD_Drag(class UUserWidget* DragSlot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36268);

	UZ_InventoryComponent_C_ZL_GUI_DnD_Drag_Params params;
	params.DragSlot = DragSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_GUI_DND_Drop
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryComponent_C::STATIC_ZL_GUI_DND_Drop()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36267);

	UZ_InventoryComponent_C_ZL_GUI_DND_Drop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_CHARACTER_EquipThis(Server)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryComponent_C::STATIC_ZL_CHARACTER_EquipThis_Server_(const struct FZ_LootStr& Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36265);

	UZ_InventoryComponent_C_ZL_CHARACTER_EquipThis_Server__Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_CHARACTER_DropThis(Server)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              LootStr                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryComponent_C::STATIC_ZL_CHARACTER_DropThis_Server_(const struct FZ_LootStr& LootStr)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36263);

	UZ_InventoryComponent_C_ZL_CHARACTER_DropThis_Server__Params params;
	params.LootStr = LootStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_CHARACTER_USEThis(Server)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryComponent_C::STATIC_ZL_CHARACTER_USEThis_Server_(const struct FZ_LootStr& Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36261);

	UZ_InventoryComponent_C_ZL_CHARACTER_USEThis_Server__Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_CHARACTER_Unequip(Serever)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryComponent_C::STATIC_ZL_CHARACTER_Unequip_Serever_(const struct FZ_LootStr& Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36259);

	UZ_InventoryComponent_C_ZL_CHARACTER_Unequip_Serever__Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_GUI_SLOT_Hovered
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryComponent_C::STATIC_ZL_GUI_SLOT_Hovered(const struct FZ_LootStr& Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36257);

	UZ_InventoryComponent_C_ZL_GUI_SLOT_Hovered_Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_GUI_SLOT_Unhovered
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryComponent_C::STATIC_ZL_GUI_SLOT_Unhovered()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36256);

	UZ_InventoryComponent_C_ZL_GUI_SLOT_Unhovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_CHARACTER_AttachToWeapon(Server)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Z_WeaponScopes_EZ_WeaponScopes> Scopes                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Z_WeaponSilencer_EZ_WeaponSilencer> Silencer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryComponent_C::STATIC_ZL_CHARACTER_AttachToWeapon_Server_(TEnumAsByte<Z_WeaponScopes_EZ_WeaponScopes> Scopes, TEnumAsByte<Z_WeaponSilencer_EZ_WeaponSilencer> Silencer, const struct FName& Weapon)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36254);

	UZ_InventoryComponent_C_ZL_CHARACTER_AttachToWeapon_Server__Params params;
	params.Scopes = Scopes;
	params.Silencer = Silencer;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_GUI_DrawLootNear
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_LootStr>      Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UZ_InventoryComponent_C::STATIC_ZL_GUI_DrawLootNear(TArray<struct FZ_LootStr>* Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36251);

	UZ_InventoryComponent_C_ZL_GUI_DrawLootNear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Loot != nullptr)
		*Loot = params.Loot;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_CHARACTER_UNAttach(Server)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryComponent_C::STATIC_ZL_CHARACTER_UNAttach_Server_(const struct FName& Weapon)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36249);

	UZ_InventoryComponent_C_ZL_CHARACTER_UNAttach_Server__Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_GUI_Overload
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          OverloadMass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryComponent_C::STATIC_ZL_GUI_Overload(float OverloadMass)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36247);

	UZ_InventoryComponent_C_ZL_GUI_Overload_Params params;
	params.OverloadMass = OverloadMass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.ZL_GUI_InventoryRespawnMode
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UZ_InventoryComponent_C::STATIC_ZL_GUI_InventoryRespawnMode()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36246);

	UZ_InventoryComponent_C_ZL_GUI_InventoryRespawnMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.ExecuteUbergraph_Z_InventoryComponent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZ_InventoryComponent_C::STATIC_ExecuteUbergraph_Z_InventoryComponent(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36234);

	UZ_InventoryComponent_C_ExecuteUbergraph_Z_InventoryComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.OnLootRemove__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              RemovedLoot                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryComponent_C::STATIC_OnLootRemove__DelegateSignature(const struct FZ_LootStr& RemovedLoot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36232);

	UZ_InventoryComponent_C_OnLootRemove__DelegateSignature_Params params;
	params.RemovedLoot = RemovedLoot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_InventoryComponent.Z_InventoryComponent_C.OnLootAdded(ServerOnly)__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Z_Loot                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UZ_InventoryComponent_C::STATIC_OnLootAdded_ServerOnly___DelegateSignature(const struct FZ_LootStr& Z_Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(36230);

	UZ_InventoryComponent_C_OnLootAdded_ServerOnly___DelegateSignature_Params params;
	params.Z_Loot = Z_Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
