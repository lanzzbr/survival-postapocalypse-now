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

// Class Paper2D.MaterialExpressionSpriteTextureSampler
// 0x0020 (FullSize[0x01D8] - InheritedSize[0x01B8])
class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
{
public:
	bool                                               bSampleAdditionalTextures;                                 // 0x01B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VOX3[0x3];                                     // 0x01B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AdditionalSlotIndex;                                       // 0x01BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       SlotDisplayName;                                           // 0x01C0(0x0018) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1596);
		return ptr;
	}



};

// Class Paper2D.PaperCharacter
// 0x0010 (FullSize[0x0790] - InheritedSize[0x0780])
class APaperCharacter : public ACharacter
{
public:
	class UPaperFlipbookComponent*                     Sprite;                                                    // 0x0780(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EFDR[0x8];                                     // 0x0788(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1597);
		return ptr;
	}



};

// Class Paper2D.PaperFlipbook
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UPaperFlipbook : public UObject
{
public:
	float                                              FramesPerSecond;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SMYE[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPaperFlipbookKeyFrame>              KeyFrames;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          DefaultMaterial;                                           // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Paper2D_EFlipbookCollisionMode>        CollisionSource;                                           // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KNR4[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1598);
		return ptr;
	}



	bool IsValidKeyFrameIndex(int Index);
	float GetTotalDuration();
	class UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds);
	class UPaperSprite* GetSpriteAtFrame(int FrameIndex);
	int GetNumKeyFrames();
	int GetNumFrames();
	int GetKeyFrameIndexAtTime(float Time, bool bClampToEnds);
};

// Class Paper2D.PaperFlipbookActor
// 0x0008 (FullSize[0x0370] - InheritedSize[0x0368])
class APaperFlipbookActor : public AActor
{
public:
	class UPaperFlipbookComponent*                     RenderComponent;                                           // 0x0368(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1599);
		return ptr;
	}



};

// Class Paper2D.PaperFlipbookComponent
// 0x0048 (FullSize[0x0700] - InheritedSize[0x06B8])
class UPaperFlipbookComponent : public UMeshComponent
{
public:
	class UPaperFlipbook*                              SourceFlipbook;                                            // 0x06B8(0x0008) (Edit, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          Material;                                                  // 0x06C0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PlayRate;                                                  // 0x06C8(0x0004) (Edit, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bLooping : 1;                                              // 0x06CC(0x0001) BIT_FIELD (Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bReversePlayback : 1;                                      // 0x06CC(0x0001) BIT_FIELD (Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bPlaying : 1;                                              // 0x06CC(0x0001) BIT_FIELD (Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OQ59[0x3];                                     // 0x06CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AccumulatedTime;                                           // 0x06D0(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CachedFrameIndex;                                          // 0x06D4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                SpriteColor;                                               // 0x06D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBodySetup*                                  CachedBodySetup;                                           // 0x06E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnFinishedPlaying;                                         // 0x06F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1600);
		return ptr;
	}



	void STATIC_Stop();
	void STATIC_SetSpriteColor(const struct FLinearColor& NewColor);
	void STATIC_SetPlayRate(float NewRate);
	void STATIC_SetPlaybackPositionInFrames(int NewFramePosition, bool bFireEvents);
	void STATIC_SetPlaybackPosition(float NewPosition, bool bFireEvents);
	void STATIC_SetNewTime(float NewTime);
	void STATIC_SetLooping(bool bNewLooping);
	bool SetFlipbook(class UPaperFlipbook* NewFlipbook);
	void STATIC_ReverseFromEnd();
	void STATIC_Reverse();
	void STATIC_PlayFromStart();
	void STATIC_Play();
	void STATIC_OnRep_SourceFlipbook(class UPaperFlipbook* OldFlipbook);
	bool IsReversing();
	bool IsPlaying();
	bool IsLooping();
	float GetPlayRate();
	int GetPlaybackPositionInFrames();
	float GetPlaybackPosition();
	int GetFlipbookLengthInFrames();
	float GetFlipbookLength();
	float GetFlipbookFramerate();
	class UPaperFlipbook* GetFlipbook();
};

// Class Paper2D.PaperGroupedSpriteActor
// 0x0008 (FullSize[0x0370] - InheritedSize[0x0368])
class APaperGroupedSpriteActor : public AActor
{
public:
	class UPaperGroupedSpriteComponent*                RenderComponent;                                           // 0x0368(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1601);
		return ptr;
	}



};

// Class Paper2D.PaperGroupedSpriteComponent
// 0x0038 (FullSize[0x06F0] - InheritedSize[0x06B8])
class UPaperGroupedSpriteComponent : public UMeshComponent
{
public:
	TArray<class UMaterialInterface*>                  InstanceMaterials;                                         // 0x06B8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSpriteInstanceData>                 PerInstanceSpriteData;                                     // 0x06C8(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7TJS[0x18];                                    // 0x06D8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1602);
		return ptr;
	}



	bool UpdateInstanceTransform(int InstanceIndex, const struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
	bool UpdateInstanceColor(int InstanceIndex, const struct FLinearColor& NewInstanceColor, bool bMarkRenderStateDirty);
	void STATIC_SortInstancesAlongAxis(const struct FVector& WorldSpaceSortAxis);
	bool RemoveInstance(int InstanceIndex);
	bool GetInstanceTransform(int InstanceIndex, struct FTransform* OutInstanceTransform, bool bWorldSpace);
	int GetInstanceCount();
	void STATIC_ClearInstances();
	int AddInstance(const struct FTransform& Transform, class UPaperSprite* Sprite, bool bWorldSpace, const struct FLinearColor& Color);
};

// Class Paper2D.PaperRuntimeSettings
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UPaperRuntimeSettings : public UObject
{
public:
	bool                                               bEnableSpriteAtlasGroups;                                  // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableTerrainSplineEditing;                               // 0x0029(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bResizeSpriteDataToMatchTextures;                          // 0x002A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MU8I[0x5];                                     // 0x002B(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1603);
		return ptr;
	}



};

// Class Paper2D.PaperSprite
// 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
class UPaperSprite : public UObject
{
public:
	unsigned char                                      UnknownData_A5QV[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   SourceUV;                                                  // 0x0038(0x0008) (Edit, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                                   SourceDimension;                                           // 0x0040(0x0008) (Edit, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  SourceTexture;                                             // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UTexture*>                            AdditionalSourceTextures;                                  // 0x0050(0x0010) (Edit, ZeroConstructor, AssetRegistrySearchable, Protected, NativeAccessSpecifierProtected)
	struct FVector2D                                   BakedSourceUV;                                             // 0x0060(0x0008) (IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                                   BakedSourceDimension;                                      // 0x0068(0x0008) (IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  BakedSourceTexture;                                        // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          DefaultMaterial;                                           // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          AlternateMaterial;                                         // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FPaperSpriteSocket>                  Sockets;                                                   // 0x0088(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<Paper2D_ESpriteCollisionMode>          SpriteCollisionDomain;                                     // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_E8PO[0x3];                                     // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PixelsPerUnrealUnit;                                       // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBodySetup*                                  BodySetup;                                                 // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AlternateMaterialSplitIndex;                               // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NMKD[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector4>                            BakedRenderData;                                           // 0x00B0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1604);
		return ptr;
	}



};

// Class Paper2D.PaperSpriteActor
// 0x0008 (FullSize[0x0370] - InheritedSize[0x0368])
class APaperSpriteActor : public AActor
{
public:
	class UPaperSpriteComponent*                       RenderComponent;                                           // 0x0368(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1605);
		return ptr;
	}



};

// Class Paper2D.PaperSpriteAtlas
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPaperSpriteAtlas : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1606);
		return ptr;
	}



};

// Class Paper2D.PaperSpriteBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1607);
		return ptr;
	}



	struct FSlateBrush MakeBrushFromSprite(class UPaperSprite* Sprite, int Width, int Height);
};

// Class Paper2D.PaperSpriteComponent
// 0x0028 (FullSize[0x06E0] - InheritedSize[0x06B8])
class UPaperSpriteComponent : public UMeshComponent
{
public:
	class UPaperSprite*                                SourceSprite;                                              // 0x06B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          MaterialOverride;                                          // 0x06C0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                SpriteColor;                                               // 0x06C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_E9ID[0x8];                                     // 0x06D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1608);
		return ptr;
	}



	void STATIC_SetSpriteColor(const struct FLinearColor& NewColor);
	bool SetSprite(class UPaperSprite* NewSprite);
	class UPaperSprite* GetSprite();
};

// Class Paper2D.PaperTerrainActor
// 0x0018 (FullSize[0x0380] - InheritedSize[0x0368])
class APaperTerrainActor : public AActor
{
public:
	class USceneComponent*                             DummyRoot;                                                 // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPaperTerrainSplineComponent*                SplineComponent;                                           // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPaperTerrainComponent*                      RenderComponent;                                           // 0x0378(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1609);
		return ptr;
	}



};

// Class Paper2D.PaperTerrainComponent
// 0x0060 (FullSize[0x06F0] - InheritedSize[0x0690])
class UPaperTerrainComponent : public UPrimitiveComponent
{
public:
	class UPaperTerrainMaterial*                       TerrainMaterial;                                           // 0x0690(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bClosedSpline;                                             // 0x0698(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFilledSpline;                                             // 0x0699(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A8BL[0x6];                                     // 0x069A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPaperTerrainSplineComponent*                AssociatedSpline;                                          // 0x06A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RandomSeed;                                                // 0x06A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SegmentOverlapAmount;                                      // 0x06AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                TerrainColor;                                              // 0x06B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ReparamStepsPerSegment;                                    // 0x06C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Paper2D_ESpriteCollisionMode>          SpriteCollisionDomain;                                     // 0x06C4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_68TP[0x3];                                     // 0x06C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CollisionThickness;                                        // 0x06C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YG4F[0x4];                                     // 0x06CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBodySetup*                                  CachedBodySetup;                                           // 0x06D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TE1E[0x18];                                    // 0x06D8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1610);
		return ptr;
	}



	void STATIC_SetTerrainColor(const struct FLinearColor& NewColor);
};

// Class Paper2D.PaperTerrainMaterial
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UPaperTerrainMaterial : public UDataAsset
{
public:
	TArray<struct FPaperTerrainMaterialRule>           Rules;                                                     // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPaperSprite*                                InteriorFill;                                              // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1611);
		return ptr;
	}



};

// Class Paper2D.PaperTerrainSplineComponent
// 0x0040 (FullSize[0x07C0] - InheritedSize[0x0780])
class UPaperTerrainSplineComponent : public USplineComponent
{
public:
	unsigned char                                      UnknownData_0H9J[0x40];                                    // 0x0780(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1612);
		return ptr;
	}



};

// Class Paper2D.PaperTileLayer
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
class UPaperTileLayer : public UObject
{
public:
	struct FText                                       LayerName;                                                 // 0x0028(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                LayerWidth;                                                // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                LayerHeight;                                               // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bHiddenInGame : 1;                                         // 0x0048(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bLayerCollides : 1;                                        // 0x0048(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bOverrideCollisionThickness : 1;                           // 0x0048(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bOverrideCollisionOffset : 1;                              // 0x0048(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_O7X8[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CollisionThicknessOverride;                                // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              CollisionOffsetOverride;                                   // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                                LayerColor;                                                // 0x0054(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                AllocatedWidth;                                            // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                AllocatedHeight;                                           // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TU9H[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPaperTileInfo>                      AllocatedCells;                                            // 0x0070(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	class UPaperTileSet*                               TileSet;                                                   // 0x0080(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<int>                                        AllocatedGrid;                                             // 0x0088(0x0010) (ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1613);
		return ptr;
	}



};

// Class Paper2D.PaperTileMap
// 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
class UPaperTileMap : public UObject
{
public:
	int                                                MapWidth;                                                  // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MapHeight;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TileWidth;                                                 // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TileHeight;                                                // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PixelsPerUnrealUnit;                                       // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SeparationPerTileX;                                        // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SeparationPerTileY;                                        // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SeparationPerLayer;                                        // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SelectedTileSet[0x28];                                     // 0x0048(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Paper2D.PaperTileMap.SelectedTileSet
	class UMaterialInterface*                          Material;                                                  // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPaperTileLayer*>                     TileLayers;                                                // 0x0078(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                              CollisionThickness;                                        // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Paper2D_ESpriteCollisionMode>          SpriteCollisionDomain;                                     // 0x008C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Paper2D_ETileMapProjectionMode>        ProjectionMode;                                            // 0x008D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q2PE[0x2];                                     // 0x008E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                HexSideLength;                                             // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5WME[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBodySetup*                                  BodySetup;                                                 // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LayerNameIndex;                                            // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZGJW[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1614);
		return ptr;
	}



};

// Class Paper2D.PaperTileMapActor
// 0x0008 (FullSize[0x0370] - InheritedSize[0x0368])
class APaperTileMapActor : public AActor
{
public:
	class UPaperTileMapComponent*                      RenderComponent;                                           // 0x0368(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1615);
		return ptr;
	}



};

// Class Paper2D.PaperTileMapComponent
// 0x0058 (FullSize[0x0710] - InheritedSize[0x06B8])
class UPaperTileMapComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData_WS0V[0x4];                                     // 0x06B8(0x0004) Fix Super Size
	int                                                MapHeight;                                                 // 0x06BC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                TileWidth;                                                 // 0x06C0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                TileHeight;                                                // 0x06C4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPaperTileSet*                               DefaultLayerTileSet;                                       // 0x06C8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                          Material;                                                  // 0x06D0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UPaperTileLayer*>                     TileLayers;                                                // 0x06D8(0x0010) (ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)
	struct FLinearColor                                TileMapColor;                                              // 0x06E8(0x0010) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                UseSingleLayerIndex;                                       // 0x06F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bUseSingleLayer;                                           // 0x06FC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LD1L[0x3];                                     // 0x06FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPaperTileMap*                               TileMap;                                                   // 0x0700(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8MGR[0x8];                                     // 0x0708(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1616);
		return ptr;
	}



	void STATIC_SetTileMapColor(const struct FLinearColor& NewColor);
	bool SetTileMap(class UPaperTileMap* NewTileMap);
	void STATIC_SetTile(int X, int Y, int Layer, const struct FPaperTileInfo& NewValue);
	void STATIC_SetLayerColor(const struct FLinearColor& NewColor, int Layer);
	void STATIC_SetLayerCollision(int Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision);
	void STATIC_SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision);
	void STATIC_ResizeMap(int NewWidthInTiles, int NewHeightInTiles);
	void STATIC_RebuildCollision();
	bool OwnsTileMap();
	void STATIC_MakeTileMapEditable();
	void STATIC_GetTilePolygon(int TileX, int TileY, TArray<struct FVector>* Points, int LayerIndex, bool bWorldSpace);
	struct FLinearColor GetTileMapColor();
	struct FVector GetTileCornerPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace);
	struct FVector GetTileCenterPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace);
	struct FPaperTileInfo GetTile(int X, int Y, int Layer);
	void STATIC_GetMapSize(int* MapWidth, int* MapHeight, int* NumLayers);
	struct FLinearColor GetLayerColor(int Layer);
	void STATIC_CreateNewTileMap(int MapWidth, int MapHeight, int TileWidth, int TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer);
	class UPaperTileLayer* AddNewLayer();
};

// Class Paper2D.PaperTileSet
// 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
class UPaperTileSet : public UObject
{
public:
	struct FIntPoint                                   TileSize;                                                  // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTexture2D*                                  TileSheet;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UTexture*>                            AdditionalSourceTextures;                                  // 0x0038(0x0010) (Edit, ZeroConstructor, AssetRegistrySearchable, NativeAccessSpecifierPrivate)
	struct FIntMargin                                  BorderMargin;                                              // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate)
	struct FIntPoint                                   PerTileSpacing;                                            // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FIntPoint                                   DrawingOffset;                                             // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                WidthInTiles;                                              // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                HeightInTiles;                                             // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                AllocatedWidth;                                            // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                AllocatedHeight;                                           // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FPaperTileMetadata>                  PerTileData;                                               // 0x0078(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FPaperTileSetTerrain>                Terrains;                                                  // 0x0088(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	int                                                TileWidth;                                                 // 0x0098(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                TileHeight;                                                // 0x009C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Margin;                                                    // 0x00A0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Spacing;                                                   // 0x00A4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1617);
		return ptr;
	}



};

// Class Paper2D.TileMapBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1618);
		return ptr;
	}



	struct FPaperTileInfo MakeTile(int TileIndex, class UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD);
	struct FName GetTileUserData(const struct FPaperTileInfo& Tile);
	struct FTransform GetTileTransform(const struct FPaperTileInfo& Tile);
	void STATIC_BreakTile(const struct FPaperTileInfo& Tile, int* TileIndex, class UPaperTileSet** TileSet, bool* bFlipH, bool* bFlipV, bool* bFlipD);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
