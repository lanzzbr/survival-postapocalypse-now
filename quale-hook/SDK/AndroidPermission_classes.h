#pragma once

// Name: ANUSGAME, Version: 4.18


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class AndroidPermission.AndroidPermissionCallbackProxy
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UAndroidPermissionCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnPermissionsGrantedDynamicDelegate;                       // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1SWN[0x48];                                    // 0x0038(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1649);
		return ptr;
	}



};

// Class AndroidPermission.AndroidPermissionFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1650);
		return ptr;
	}



	bool CheckPermission(const struct FString& permission);
	class UAndroidPermissionCallbackProxy* AcquirePermissions(TArray<struct FString> Permissions);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
