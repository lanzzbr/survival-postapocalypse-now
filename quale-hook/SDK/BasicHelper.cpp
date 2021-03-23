// Sdk By IEX 
// Name: Mordhau, Version: 20

#ifdef _MSC_VER
#pragma pack(push, 0x01)
#endif

#include "../SDK.h"
#include <iostream>
#include <sstream>

namespace CG
{
TNameEntryArray* FName::GNames = nullptr;
TUObjectArray* UObject::GObjects = nullptr;
#if defined(EXTERNAL_PROPS)
MemoryManager* Mem = new MemoryManager();
#else
bool InitSdk(const std::string& moduleName, const uintptr_t gObjectsOffset, const uintptr_t gNamesOffset)
{
	auto mBaseAddress = reinterpret_cast<uintptr_t>(GetModuleHandleA(moduleName.c_str()));

	if (mBaseAddress == 0x00)
		return false;

	UObject::GObjects = reinterpret_cast<CG::TUObjectArray*>(mBaseAddress + gObjectsOffset);
	FName::GNames = reinterpret_cast<CG::TNameEntryArray*>(mBaseAddress + gNamesOffset);

	return true;
}
bool InitSdk()
{
	return InitSdk("Cv2_BaseClient_Shipping.exe", 0x2999950, 0x2990B28);
}
#endif
//---------------------------------------------------------------------------
#ifdef UE4
bool FWeakObjectPtr::IsValid() const
{
	if (ObjectSerialNumber == 0)
	{
		return false;
	}
	if (ObjectIndex < 0)
	{
		return false;
	}
	auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
	if (!ObjectItem)
	{
		return false;
	}
	if (!SerialNumbersMatch(ObjectItem))
	{
		return false;
	}
	return !(ObjectItem->IsUnreachable() || ObjectItem->IsPendingKill());
}
//---------------------------------------------------------------------------
UObject* FWeakObjectPtr::Get() const
{
	if (IsValid())
	{
		auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
		if (ObjectItem)
		{
			return ObjectItem->Object;
		}
	}
	return nullptr;
}
#endif
//---------------------------------------------------------------------------

}
//---------------------------------------------------------------------------

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
