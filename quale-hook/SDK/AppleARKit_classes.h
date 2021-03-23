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

// Class AppleARKit.AppleARKitAnchor
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UAppleARKitAnchor : public UObject
{
public:
	struct FGuid                                       Identifier;                                                // 0x0028(0x0010) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MBCJ[0x58];                                    // 0x0038(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1652);
		return ptr;
	}



	struct FTransform GetTransform();
};

// Class AppleARKit.AppleARKitBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAppleARKitBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1653);
		return ptr;
	}



	bool HitTestAtScreenPosition_TrackingSpace(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, AppleARKit_EAppleARKitHitTestResultType Types, TArray<struct FAppleARKitHitTestResult>* OutResults);
	bool GetCurrentFrame(class UObject* WorldContextObject, struct FAppleARKitFrame* OutCurrentFrame);
};

// Class AppleARKit.AppleARKitPlaneAnchor
// 0x0020 (FullSize[0x00B0] - InheritedSize[0x0090])
class UAppleARKitPlaneAnchor : public UAppleARKitAnchor
{
public:
	unsigned char                                      UnknownData_049R[0x20];                                    // 0x0090(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1654);
		return ptr;
	}



	struct FTransform GetTransformToCenter();
	struct FVector GetExtent();
	struct FVector GetCenter();
};

// Class AppleARKit.ARKitCameraOverlayMaterialLoader
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UARKitCameraOverlayMaterialLoader : public UObject
{
public:
	class UMaterialInterface*                          DefaultCameraOverlayMaterial;                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1655);
		return ptr;
	}



};

// Class AppleARKit.MaterialExpressionARKitPassthroughCamera
// 0x0040 (FullSize[0x00A0] - InheritedSize[0x0060])
class UMaterialExpressionARKitPassthroughCamera : public UMaterialExpression
{
public:
	struct FExpressionInput                            Coordinates;                                               // 0x0060(0x0038) (NativeAccessSpecifierPublic)
	uint32_t                                           ConstCoordinate;                                           // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AppleARKit_EARKitTextureType>          TextureType;                                               // 0x009C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PREB[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1656);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
