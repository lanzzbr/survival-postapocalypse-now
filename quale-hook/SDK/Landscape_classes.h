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

// Class Landscape.ControlPointMeshComponent
// 0x0000 (FullSize[0x0720] - InheritedSize[0x0720])
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(125);
		return ptr;
	}



};

// Class Landscape.LandscapeProxy
// 0x0410 (FullSize[0x0778] - InheritedSize[0x0368])
class ALandscapeProxy : public AActor
{
public:
	class ULandscapeSplinesComponent*                  SplineComponent;                                           // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       LandscapeGuid;                                             // 0x0370(0x0010) (IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FIntPoint                                   LandscapeSectionOffset;                                    // 0x0380(0x0008) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLODLevel;                                               // 0x0388(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LODDistanceFactor;                                         // 0x038C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Landscape_ELandscapeLODFalloff>        LODFalloff;                                                // 0x0390(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I6DX[0x3];                                     // 0x0391(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                StaticLightingLOD;                                         // 0x0394(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                           DefaultPhysMaterial;                                       // 0x0398(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StreamingDistanceMultiplier;                               // 0x03A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3RFU[0x4];                                     // 0x03A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          LandscapeMaterial;                                         // 0x03A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          LandscapeHoleMaterial;                                     // 0x03B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NegativeZBoundsExtension;                                  // 0x03B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PositiveZBoundsExtension;                                  // 0x03BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ULandscapeComponent*>                 LandscapeComponents;                                       // 0x03C0(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                                       // 0x03D0(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                         // 0x03E0(0x0010) (ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZNLG[0x60];                                    // 0x03F0(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bHasLandscapeGrass;                                        // 0x0450(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VJI3[0x3];                                     // 0x0451(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StaticLightingResolution;                                  // 0x0454(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCastStaticShadow : 1;                                     // 0x0458(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                 // 0x0458(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCastFarShadow : 1;                                        // 0x0458(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SIR3[0x3];                                     // 0x0459(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLightingChannels                           LightingChannels;                                          // 0x045C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CWWQ[0x3];                                     // 0x045D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bUseMaterialPositionOffsetInStaticLighting : 1;            // 0x0460(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRenderCustomDepth : 1;                                    // 0x0460(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KCXO[0x3];                                     // 0x0461(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CustomDepthStencilValue;                                   // 0x0464(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLightmassPrimitiveSettings                 LightmassSettings;                                         // 0x0468(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	int                                                CollisionMipLevel;                                         // 0x0480(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SimpleCollisionMipLevel;                                   // 0x0484(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionThickness;                                        // 0x0488(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BZBG[0x4];                                     // 0x048C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBodyInstance                               BodyInstance;                                              // 0x0490(0x0230) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      bGenerateOverlapEvents : 1;                                // 0x06C0(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bBakeMaterialPositionOffsetIntoCollision : 1;              // 0x06C0(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VM46[0x3];                                     // 0x06C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ComponentSizeQuads;                                        // 0x06C4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SubsectionSizeQuads;                                       // 0x06C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumSubsections;                                            // 0x06CC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsedForNavigation : 1;                                    // 0x06D0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5AIL[0x3];                                     // 0x06D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Engine_ENavDataGatheringMode                       NavigationGeometryGatheringMode;                           // 0x06D4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseLandscapeForCullingInvisibleHLODVertices;              // 0x06D5(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QUFC[0xA2];                                    // 0x06D6(0x00A2) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(126);
		return ptr;
	}



	void STATIC_EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer);
	void STATIC_ChangeLODDistanceFactor(float InLODDistanceFactor);
};

// Class Landscape.Landscape
// 0x0008 (FullSize[0x0780] - InheritedSize[0x0778])
class ALandscape : public ALandscapeProxy
{
public:
	unsigned char                                      UnknownData_88WG[0x8];                                     // 0x0778(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(127);
		return ptr;
	}



};

// Class Landscape.LandscapeComponent
// 0x0180 (FullSize[0x0810] - InheritedSize[0x0690])
class ULandscapeComponent : public UPrimitiveComponent
{
public:
	int                                                SectionBaseX;                                              // 0x0690(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SectionBaseY;                                              // 0x0694(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ComponentSizeQuads;                                        // 0x0698(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SubsectionSizeQuads;                                       // 0x069C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumSubsections;                                            // 0x06A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W1NG[0x4];                                     // 0x06A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          OverrideMaterial;                                          // 0x06A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          OverrideHoleMaterial;                                      // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInstanceConstant*>           MaterialInstances;                                         // 0x06B8(0x0010) (ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic)
	TArray<struct FWeightmapLayerAllocationInfo>       WeightmapLayerAllocations;                                 // 0x06C8(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                          WeightmapTextures;                                         // 0x06D8(0x0010) (ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic)
	class UTexture2D*                                  XYOffsetmapTexture;                                        // 0x06E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    WeightmapScaleBias;                                        // 0x06F0(0x0010) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WeightmapSubsectionOffset;                                 // 0x0700(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZZ5S[0xC];                                     // 0x0704(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector4                                    HeightmapScaleBias;                                        // 0x0710(0x0010) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  HeightmapTexture;                                          // 0x0720(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                        CachedLocalBox;                                            // 0x0728(0x001C) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent;                                        // 0x0744(0x001C) (ExportObject, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       MapBuildDataId;                                            // 0x0760(0x0010) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                               IrrelevantLights;                                          // 0x0770(0x0010) (ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	int                                                CollisionMipLevel;                                         // 0x0780(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SimpleCollisionMipLevel;                                   // 0x0784(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NegativeZBoundsExtension;                                  // 0x0788(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PositiveZBoundsExtension;                                  // 0x078C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StaticLightingResolution;                                  // 0x0790(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ForcedLOD;                                                 // 0x0794(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LODBias;                                                   // 0x0798(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       StateId;                                                   // 0x079C(0x0010) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       BakedTextureMaterialGuid;                                  // 0x07AC(0x0010) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z84B[0x4];                                     // 0x07BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  GIBakedBaseColorTexture;                                   // 0x07C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MobileBlendableLayerMask;                                  // 0x07C8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DB2P[0x7];                                     // 0x07C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          MobileMaterialInterface;                                   // 0x07D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  MobileWeightNormalmapTexture;                              // 0x07D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TS58[0x30];                                    // 0x07E0(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(128);
		return ptr;
	}



};

// Class Landscape.LandscapeGizmoActor
// 0x0000 (FullSize[0x0368] - InheritedSize[0x0368])
class ALandscapeGizmoActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(129);
		return ptr;
	}



};

// Class Landscape.LandscapeGizmoActiveActor
// 0x0050 (FullSize[0x03B8] - InheritedSize[0x0368])
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
	unsigned char                                      UnknownData_2BCU[0x50];                                    // 0x0368(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(130);
		return ptr;
	}



};

// Class Landscape.LandscapeGizmoRenderComponent
// 0x0000 (FullSize[0x0690] - InheritedSize[0x0690])
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(131);
		return ptr;
	}



};

// Class Landscape.LandscapeGrassType
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class ULandscapeGrassType : public UObject
{
public:
	TArray<struct FGrassVariety>                       GrassVarieties;                                            // 0x0028(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 GrassMesh;                                                 // 0x0038(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GrassDensity;                                              // 0x0040(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlacementJitter;                                           // 0x0044(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartCullDistance;                                         // 0x0048(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndCullDistance;                                           // 0x004C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RandomRotation;                                            // 0x0050(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AlignToSurface;                                            // 0x0051(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CVQD[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(132);
		return ptr;
	}



};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// 0x00E0 (FullSize[0x0770] - InheritedSize[0x0690])
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeLayerInfoObject*>           ComponentLayerInfos;                                       // 0x0690(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                SectionBaseX;                                              // 0x06A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SectionBaseY;                                              // 0x06A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CollisionSizeQuads;                                        // 0x06A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionScale;                                            // 0x06AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SimpleCollisionSizeQuads;                                  // 0x06B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LIWN[0x4];                                     // 0x06B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              CollisionQuadFlags;                                        // 0x06B8(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGuid                                       HeightfieldGuid;                                           // 0x06C8(0x0010) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                        CachedLocalBox;                                            // 0x06D8(0x001C) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TLazyObjectPtr<class ULandscapeComponent>          RenderComponent;                                           // 0x06F4(0x001C) (ExportObject, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TAZB[0x10];                                    // 0x0710(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPhysicalMaterial*>                   CookedPhysicalMaterials;                                   // 0x0720(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FADE[0x40];                                    // 0x0730(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(133);
		return ptr;
	}



};

// Class Landscape.LandscapeInfo
// 0x01D8 (FullSize[0x0200] - InheritedSize[0x0028])
class ULandscapeInfo : public UObject
{
public:
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                            // 0x0028(0x001C) (IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       LandscapeGuid;                                             // 0x0044(0x0010) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ComponentSizeQuads;                                        // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SubsectionSizeQuads;                                       // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ComponentNumSubsections;                                   // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DrawScale;                                                 // 0x0060(0x000C) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JLFP[0x54];                                    // 0x006C(0x0054) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      Proxies[0x50];                                             // 0x006C(0x0050) UNKNOWN PROPERTY: SetProperty Landscape.LandscapeInfo.Proxies
	unsigned char                                      UnknownData_UOW8[0xF0];                                    // 0x0110(0x00F0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(134);
		return ptr;
	}



};

// Class Landscape.LandscapeInfoMap
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class ULandscapeInfoMap : public UObject
{
public:
	unsigned char                                      UnknownData_KEEQ[0x58];                                    // 0x0028(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(135);
		return ptr;
	}



};

// Class Landscape.LandscapeLayerInfoObject
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class ULandscapeLayerInfoObject : public UObject
{
public:
	struct FName                                       LayerName;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                           PhysMaterial;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Hardness;                                                  // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                LayerUsageDebugColor;                                      // 0x003C(0x0010) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_83QU[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(136);
		return ptr;
	}



};

// Class Landscape.LandscapeMaterialInstanceConstant
// 0x0008 (FullSize[0x01B8] - InheritedSize[0x01B0])
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:
	unsigned char                                      bIsLayerThumbnail : 1;                                     // 0x01B0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDisableTessellation : 1;                                  // 0x01B0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7QZT[0x7];                                     // 0x01B1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(140);
		return ptr;
	}



};

// Class Landscape.LandscapeMeshCollisionComponent
// 0x0020 (FullSize[0x0790] - InheritedSize[0x0770])
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	struct FGuid                                       MeshGuid;                                                  // 0x0770(0x0010) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0PEH[0x10];                                    // 0x0780(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(141);
		return ptr;
	}



};

// Class Landscape.LandscapeMeshProxyActor
// 0x0008 (FullSize[0x0370] - InheritedSize[0x0368])
class ALandscapeMeshProxyActor : public AActor
{
public:
	class ULandscapeMeshProxyComponent*                LandscapeMeshProxyComponent;                               // 0x0368(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(142);
		return ptr;
	}



};

// Class Landscape.LandscapeMeshProxyComponent
// 0x0030 (FullSize[0x0750] - InheritedSize[0x0720])
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	struct FGuid                                       LandscapeGuid;                                             // 0x0720(0x0010) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FIntPoint>                           ProxyComponentBases;                                       // 0x0730(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	int8_t                                             ProxyLOD;                                                  // 0x0740(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8M53[0xF];                                     // 0x0741(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(143);
		return ptr;
	}



};

// Class Landscape.LandscapeSplinesComponent
// 0x0030 (FullSize[0x06C0] - InheritedSize[0x0690])
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeSplineControlPoint*>        ControlPoints;                                             // 0x0690(0x0010) (ZeroConstructor, Protected, TextExportTransient, NativeAccessSpecifierProtected)
	TArray<class ULandscapeSplineSegment*>             Segments;                                                  // 0x06A0(0x0010) (ZeroConstructor, Protected, TextExportTransient, NativeAccessSpecifierProtected)
	TArray<class UMeshComponent*>                      CookedForeignMeshComponents;                               // 0x06B0(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, TextExportTransient, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(144);
		return ptr;
	}



};

// Class Landscape.LandscapeSplineControlPoint
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
class ULandscapeSplineControlPoint : public UObject
{
public:
	struct FVector                                     Location;                                                  // 0x0028(0x000C) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0034(0x000C) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Width;                                                     // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SideFalloff;                                               // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndFalloff;                                                // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6EX7[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FLandscapeSplineConnection>          ConnectedSegments;                                         // 0x0050(0x0010) (ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                    // 0x0060(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FBox                                        Bounds;                                                    // 0x0070(0x001C) (IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8VA4[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UControlPointMeshComponent*                  LocalMeshComponent;                                        // 0x0090(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(145);
		return ptr;
	}



};

// Class Landscape.LandscapeSplineSegment
// 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
class ULandscapeSplineSegment : public UObject
{
public:
	struct FLandscapeSplineSegmentConnection           Connections[0x2];                                          // 0x0028(0x0030) (Edit, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	struct FInterpCurveVector                          SplineInfo;                                                // 0x0058(0x0018) (Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                    // 0x0070(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FBox                                        Bounds;                                                    // 0x0080(0x001C) (IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5NCQ[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USplineMeshComponent*>                LocalMeshComponents;                                       // 0x00A0(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, TextExportTransient, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(146);
		return ptr;
	}



};

// Class Landscape.LandscapeStreamingProxy
// 0x0028 (FullSize[0x07A0] - InheritedSize[0x0778])
class ALandscapeStreamingProxy : public ALandscapeProxy
{
public:
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                            // 0x0778(0x001C) (Edit, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AUL0[0xC];                                     // 0x0794(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(147);
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FGrassInput>                         GrassTypes;                                                // 0x0060(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(150);
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	TArray<struct FLayerBlendInput>                    Layers;                                                    // 0x0060(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGuid                                       ExpressionGUID;                                            // 0x0070(0x0010) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(151);
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
	TEnumAsByte<Landscape_ETerrainCoordMappingType>    MappingType;                                               // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Landscape_ELandscapeCustomizedCoordType> CustomUVType;                                              // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WLD2[0x2];                                     // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MappingScale;                                              // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MappingRotation;                                           // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MappingPanU;                                               // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MappingPanV;                                               // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D04Q[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(152);
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerSample
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
	struct FName                                       ParameterName;                                             // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PreviewWeight;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ExpressionGUID;                                            // 0x006C(0x0010) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D2YS[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(153);
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// 0x0090 (FullSize[0x00F0] - InheritedSize[0x0060])
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                            LayerUsed;                                                 // 0x0060(0x0038) (NativeAccessSpecifierPublic)
	struct FExpressionInput                            LayerNotUsed;                                              // 0x0098(0x0038) (NativeAccessSpecifierPublic)
	struct FName                                       ParameterName;                                             // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PreviewUsed : 1;                                           // 0x00D8(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CHGL[0x3];                                     // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       ExpressionGUID;                                            // 0x00DC(0x0010) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V59V[0x4];                                     // 0x00EC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(154);
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// 0x0098 (FullSize[0x00F8] - InheritedSize[0x0060])
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	struct FExpressionInput                            base;                                                      // 0x0060(0x0038) (NativeAccessSpecifierPublic)
	struct FExpressionInput                            Layer;                                                     // 0x0098(0x0038) (NativeAccessSpecifierPublic)
	struct FName                                       ParameterName;                                             // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PreviewWeight;                                             // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ConstBase;                                                 // 0x00DC(0x000C) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ExpressionGUID;                                            // 0x00E8(0x0010) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(155);
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:
	struct FGuid                                       ExpressionGUID;                                            // 0x0060(0x0010) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(156);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
