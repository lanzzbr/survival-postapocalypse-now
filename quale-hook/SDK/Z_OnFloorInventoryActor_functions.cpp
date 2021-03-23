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

// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_CONTROLLER_GetSlots
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_SlotStr>      Slots                          (Parm, OutParm, ZeroConstructor)
void AZ_OnFloorInventoryActor_C::STATIC_ZL_CONTROLLER_GetSlots(TArray<struct FZ_SlotStr>* Slots)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32701);

	AZ_OnFloorInventoryActor_C_ZL_CONTROLLER_GetSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Slots != nullptr)
		*Slots = params.Slots;

}


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.CreateLootNear
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AZ_OnFloorInventoryActor_C::STATIC_CreateLootNear()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32699);

	AZ_OnFloorInventoryActor_C_CreateLootNear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.DeleteLootActor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZ_OnFloorInventoryActor_C::STATIC_DeleteLootActor(int Index)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32697);

	AZ_OnFloorInventoryActor_C_DeleteLootActor_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.SetLootOnActor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AZ_OnFloorInventoryActor_C::STATIC_SetLootOnActor(int Index, const struct FZ_LootStr& Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32695);

	AZ_OnFloorInventoryActor_C_SetLootOnActor_Params params;
	params.Index = Index;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.RemoveLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AZ_LootActor_C*          LootActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZ_OnFloorInventoryActor_C::STATIC_RemoveLoot(class AZ_LootActor_C* LootActor)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32693);

	AZ_OnFloorInventoryActor_C_RemoveLoot_Params params;
	params.LootActor = LootActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.AddLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AZ_LootActor_C*          LootActors                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZ_OnFloorInventoryActor_C::STATIC_AddLoot(class AZ_LootActor_C* LootActors)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32691);

	AZ_OnFloorInventoryActor_C_AddLoot_Params params;
	params.LootActors = LootActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.CompareLoot
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<class AZ_LootActor_C*>  NewLootActors                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TMap<TEnumAsByte<Z_OnFloorActions_EZ_OnFloorActions>, class AZ_LootActor_C*> CompareActions                 (Parm, OutParm, ZeroConstructor)
void AZ_OnFloorInventoryActor_C::STATIC_CompareLoot(TArray<class AZ_LootActor_C*>* NewLootActors, TMap<TEnumAsByte<Z_OnFloorActions_EZ_OnFloorActions>, class AZ_LootActor_C*>* CompareActions)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32528);

	AZ_OnFloorInventoryActor_C_CompareLoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewLootActors != nullptr)
		*NewLootActors = params.NewLootActors;
	if (CompareActions != nullptr)
		*CompareActions = params.CompareActions;

}


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AZ_OnFloorInventoryActor_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32527);

	AZ_OnFloorInventoryActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_GUI_ConstructMenu
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_SlotStr>      Slots                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AZ_OnFloorInventoryActor_C::STATIC_ZL_GUI_ConstructMenu(TArray<struct FZ_SlotStr>* Slots)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32524);

	AZ_OnFloorInventoryActor_C_ZL_GUI_ConstructMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Slots != nullptr)
		*Slots = params.Slots;

}


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_GUI_Update
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_LootStr>      Inventori                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FZ_LootStr>      Container                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           IsOnFloorMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AZ_OnFloorInventoryActor_C::STATIC_ZL_GUI_Update(TArray<struct FZ_LootStr>* Inventori, TArray<struct FZ_LootStr>* Container, bool IsOnFloorMode)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32521);

	AZ_OnFloorInventoryActor_C_ZL_GUI_Update_Params params;
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


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_GUI_ShowInventory
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AZ_OnFloorInventoryActor_C::STATIC_ZL_GUI_ShowInventory()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32520);

	AZ_OnFloorInventoryActor_C_ZL_GUI_ShowInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_GUI_HideInventory
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AZ_OnFloorInventoryActor_C::STATIC_ZL_GUI_HideInventory()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32519);

	AZ_OnFloorInventoryActor_C_ZL_GUI_HideInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_GUI_Construkt_Container
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_LootStr>      ContainerInventory             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FZ_ContainerInfo        ContInform                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AZ_OnFloorInventoryActor_C::STATIC_ZL_GUI_Construkt_Container(TArray<struct FZ_LootStr>* ContainerInventory, const struct FZ_ContainerInfo& ContInform)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32516);

	AZ_OnFloorInventoryActor_C_ZL_GUI_Construkt_Container_Params params;
	params.ContInform = ContInform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ContainerInventory != nullptr)
		*ContainerInventory = params.ContainerInventory;

}


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_GUI_ClearContainer
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AZ_OnFloorInventoryActor_C::STATIC_ZL_GUI_ClearContainer()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32515);

	AZ_OnFloorInventoryActor_C_ZL_GUI_ClearContainer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_GUI_DnD_Drag
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UUserWidget*             DragSlot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZ_OnFloorInventoryActor_C::STATIC_ZL_GUI_DnD_Drag(class UUserWidget* DragSlot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32513);

	AZ_OnFloorInventoryActor_C_ZL_GUI_DnD_Drag_Params params;
	params.DragSlot = DragSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_GUI_DND_Drop
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AZ_OnFloorInventoryActor_C::STATIC_ZL_GUI_DND_Drop()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32512);

	AZ_OnFloorInventoryActor_C_ZL_GUI_DND_Drop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_CHARACTER_EquipThis(Server)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AZ_OnFloorInventoryActor_C::STATIC_ZL_CHARACTER_EquipThis_Server_(const struct FZ_LootStr& Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32510);

	AZ_OnFloorInventoryActor_C_ZL_CHARACTER_EquipThis_Server__Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_CHARACTER_DropThis(Server)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              LootStr                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AZ_OnFloorInventoryActor_C::STATIC_ZL_CHARACTER_DropThis_Server_(const struct FZ_LootStr& LootStr)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32508);

	AZ_OnFloorInventoryActor_C_ZL_CHARACTER_DropThis_Server__Params params;
	params.LootStr = LootStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_CHARACTER_USEThis(Server)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AZ_OnFloorInventoryActor_C::STATIC_ZL_CHARACTER_USEThis_Server_(const struct FZ_LootStr& Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32506);

	AZ_OnFloorInventoryActor_C_ZL_CHARACTER_USEThis_Server__Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_CHARACTER_Unequip(Serever)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AZ_OnFloorInventoryActor_C::STATIC_ZL_CHARACTER_Unequip_Serever_(const struct FZ_LootStr& Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32504);

	AZ_OnFloorInventoryActor_C_ZL_CHARACTER_Unequip_Serever__Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_GUI_SLOT_Hovered
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FZ_LootStr              Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AZ_OnFloorInventoryActor_C::STATIC_ZL_GUI_SLOT_Hovered(const struct FZ_LootStr& Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32502);

	AZ_OnFloorInventoryActor_C_ZL_GUI_SLOT_Hovered_Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_GUI_SLOT_Unhovered
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AZ_OnFloorInventoryActor_C::STATIC_ZL_GUI_SLOT_Unhovered()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32501);

	AZ_OnFloorInventoryActor_C_ZL_GUI_SLOT_Unhovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_CHARACTER_AttachToWeapon(Server)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TEnumAsByte<Z_WeaponScopes_EZ_WeaponScopes> Scopes                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Z_WeaponSilencer_EZ_WeaponSilencer> Silencer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZ_OnFloorInventoryActor_C::STATIC_ZL_CHARACTER_AttachToWeapon_Server_(TEnumAsByte<Z_WeaponScopes_EZ_WeaponScopes> Scopes, TEnumAsByte<Z_WeaponSilencer_EZ_WeaponSilencer> Silencer, const struct FName& Weapon)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32499);

	AZ_OnFloorInventoryActor_C_ZL_CHARACTER_AttachToWeapon_Server__Params params;
	params.Scopes = Scopes;
	params.Silencer = Silencer;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_GUI_DrawLootNear
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FZ_LootStr>      Loot                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AZ_OnFloorInventoryActor_C::STATIC_ZL_GUI_DrawLootNear(TArray<struct FZ_LootStr>* Loot)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32496);

	AZ_OnFloorInventoryActor_C_ZL_GUI_DrawLootNear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Loot != nullptr)
		*Loot = params.Loot;

}


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_CHARACTER_UNAttach(Server)
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZ_OnFloorInventoryActor_C::STATIC_ZL_CHARACTER_UNAttach_Server_(const struct FName& Weapon)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32494);

	AZ_OnFloorInventoryActor_C_ZL_CHARACTER_UNAttach_Server__Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_GUI_Overload
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          OverloadMass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZ_OnFloorInventoryActor_C::STATIC_ZL_GUI_Overload(float OverloadMass)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32492);

	AZ_OnFloorInventoryActor_C_ZL_GUI_Overload_Params params;
	params.OverloadMass = OverloadMass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ZL_GUI_InventoryRespawnMode
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AZ_OnFloorInventoryActor_C::STATIC_ZL_GUI_InventoryRespawnMode()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32491);

	AZ_OnFloorInventoryActor_C_ZL_GUI_InventoryRespawnMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AZ_OnFloorInventoryActor_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32490);

	AZ_OnFloorInventoryActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.UpdateInventory
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void AZ_OnFloorInventoryActor_C::STATIC_UpdateInventory()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32489);

	AZ_OnFloorInventoryActor_C_UpdateInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ReceiveTick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZ_OnFloorInventoryActor_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32487);

	AZ_OnFloorInventoryActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Z_OnFloorInventoryActor.Z_OnFloorInventoryActor_C.ExecuteUbergraph_Z_OnFloorInventoryActor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZ_OnFloorInventoryActor_C::STATIC_ExecuteUbergraph_Z_OnFloorInventoryActor(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(32485);

	AZ_OnFloorInventoryActor_C_ExecuteUbergraph_Z_OnFloorInventoryActor_Params params;
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
