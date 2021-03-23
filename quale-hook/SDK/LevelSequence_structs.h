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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
// 0x0008
struct FLevelSequenceSnapshotSettings
{
	unsigned char                                      ZeroPadAmount;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O6MR[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FrameRate;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
// 0x0058
struct FLevelSequencePlayerSnapshot
{
	struct FText                                       MasterName;                                                // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	float                                              MasterTime;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J6FQ[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       CurrentShotName;                                           // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	float                                              CurrentShotLocalTime;                                      // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6JKV[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCameraComponent*                            CameraComponent;                                           // 0x0040(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLevelSequenceSnapshotSettings              Settings;                                                  // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FMovieSceneSequenceID                       ShotID;                                                    // 0x0050(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7TFH[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
// 0x0050
struct FLevelSequenceObjectReferenceMap
{
	unsigned char                                      UnknownData_209E[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
// 0x0020
struct FLevelSequenceLegacyObjectReference
{
	unsigned char                                      UnknownData_PPL7[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct LevelSequence.LevelSequenceObject
// 0x0038
struct FLevelSequenceObject
{
	TLazyObjectPtr<class UObject>                      ObjectOrOwner;                                             // 0x0000(0x001C) (IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_60H5[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ComponentName;                                             // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UObject>                      CachedComponent;                                           // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct LevelSequence.BoundActorProxy
// 0x0001
struct FBoundActorProxy
{
	unsigned char                                      UnknownData_D87C[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct LevelSequence.LevelSequenceBindingReference
// 0x0038
struct FLevelSequenceBindingReference
{
	struct FString                                     PackageName;                                               // 0x0000(0x0010) (ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                             ExternalObjectPath;                                        // 0x0010(0x0018) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     ObjectPath;                                                // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
// 0x0010
struct FLevelSequenceBindingReferenceArray
{
	TArray<struct FLevelSequenceBindingReference>      References;                                                // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct LevelSequence.LevelSequenceBindingReferences
// 0x0050
struct FLevelSequenceBindingReferences
{
	TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences;                                     // 0x0000(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
