﻿#pragma once

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
// Enums
//---------------------------------------------------------------------------

// Enum ClothingSystemRuntime.EClothingWindMethod
enum class ClothingSystemRuntime_EClothingWindMethod : uint8_t
{
	EClothingWindMethod__Legacy    = 0,
	EClothingWindMethod__Accurate  = 1,
	EClothingWindMethod__EClothingWindMethod_MAX = 2,

};

// Enum ClothingSystemRuntime.MaskTarget_PhysMesh
enum class ClothingSystemRuntime_EMaskTarget_PhysMesh : uint8_t
{
	MaskTarget_PhysMesh__None      = 0,
	MaskTarget_PhysMesh__MaxDistance = 1,
	MaskTarget_PhysMesh__BackstopDistance = 2,
	MaskTarget_PhysMesh__BackstopRadius = 3,
	MaskTarget_PhysMesh__MaskTarget_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ClothingSystemRuntime.ClothVertBoneData
// 0x0034
struct FClothVertBoneData
{
	int                                                NumInfluences;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           BoneIndices[0x8];                                          // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BoneWeights[0x8];                                          // 0x0014(0x0020) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ClothingSystemRuntime.ClothParameterMask_PhysMesh
// 0x0030
struct FClothParameterMask_PhysMesh
{
	struct FName                                       MaskName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ClothingSystemRuntime_EMaskTarget_PhysMesh         CurrentTarget;                                             // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TPET[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxValue;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinValue;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XKP8[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      Values;                                                    // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HFEU[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct ClothingSystemRuntime.ClothPhysicalMeshData
// 0x0098
struct FClothPhysicalMeshData
{
	TArray<struct FVector>                             Vertices;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             Normals;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32_t>                                   Indices;                                                   // 0x0020(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      MaxDistances;                                              // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      BackstopDistances;                                         // 0x0040(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      BackstopRadiuses;                                          // 0x0050(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      InverseMasses;                                             // 0x0060(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FClothVertBoneData>                  BoneData;                                                  // 0x0070(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                MaxBoneWeights;                                            // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumFixedVerts;                                             // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint32_t>                                   SelfCollisionIndices;                                      // 0x0088(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct ClothingSystemRuntime.ClothConstraintSetup
// 0x0010
struct FClothConstraintSetup
{
	float                                              Stiffness;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StiffnessMultiplier;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StretchLimit;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CompressionLimit;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ClothingSystemRuntime.ClothConfig
// 0x00BC
struct FClothConfig
{
	ClothingSystemRuntime_EClothingWindMethod          WindMethod;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9JR5[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FClothConstraintSetup                       VerticalConstraintConfig;                                  // 0x0004(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup                       HorizontalConstraintConfig;                                // 0x0014(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup                       BendConstraintConfig;                                      // 0x0024(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup                       ShearConstraintConfig;                                     // 0x0034(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              SelfCollisionRadius;                                       // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SelfCollisionStiffness;                                    // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SelfCollisionCullScale;                                    // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Damping;                                                   // 0x0050(0x000C) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Friction;                                                  // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WindDragCoefficient;                                       // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WindLiftCoefficient;                                       // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LinearDrag;                                                // 0x0068(0x000C) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AngularDrag;                                               // 0x0074(0x000C) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LinearInertiaScale;                                        // 0x0080(0x000C) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AngularInertiaScale;                                       // 0x008C(0x000C) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CentrifugalInertiaScale;                                   // 0x0098(0x000C) (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SolverFrequency;                                           // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StiffnessFrequency;                                        // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GravityScale;                                              // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TetherStiffness;                                           // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TetherLimit;                                               // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionThickness;                                        // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ClothingSystemRuntime.ClothLODData
// 0x00E8
struct FClothLODData
{
	struct FClothPhysicalMeshData                      PhysicalMeshData;                                          // 0x0000(0x0098) (Edit, NativeAccessSpecifierPublic)
	struct FClothCollisionData                         CollisionData;                                             // 0x0098(0x0030) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DPWD[0x20];                                    // 0x00C8(0x0020) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
