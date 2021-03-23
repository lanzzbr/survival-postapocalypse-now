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

// Class AIModule.EnvQueryNode
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UEnvQueryNode : public UObject
{
public:
	int                                                VerNum;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S0K6[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(512);
		return ptr;
	}



};

// Class AIModule.EnvQueryTest
// 0x0190 (FullSize[0x01C0] - InheritedSize[0x0030])
class UEnvQueryTest : public UEnvQueryNode
{
public:
	int                                                TestOrder;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EEnvTestPurpose>              TestPurpose;                                               // 0x0034(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_46CT[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TestComment;                                               // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EEnvTestFilterOperator>       MultipleContextFilterOp;                                   // 0x0048(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EEnvTestScoreOperator>        MultipleContextScoreOp;                                    // 0x0049(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EEnvTestFilterType>           FilterType;                                                // 0x004A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9AXB[0x5];                                     // 0x004B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIDataProviderBoolValue                    BoolValue;                                                 // 0x0050(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   FloatValueMin;                                             // 0x0080(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   FloatValueMax;                                             // 0x00B0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QEJK[0x1];                                     // 0x00E0(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<AIModule_EEnvTestScoreEquation>        ScoringEquation;                                           // 0x00E1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EEnvQueryTestClamping>        ClampMinType;                                              // 0x00E2(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EEnvQueryTestClamping>        ClampMaxType;                                              // 0x00E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AIModule_EEQSNormalizationType                     NormalizationType;                                         // 0x00E4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IJR2[0x3];                                     // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIDataProviderFloatValue                   ScoreClampMin;                                             // 0x00E8(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ScoreClampMax;                                             // 0x0118(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ScoringFactor;                                             // 0x0148(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ReferenceValue;                                            // 0x0178(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bDefineReferenceValue;                                     // 0x01A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4RLR[0xF];                                     // 0x01A9(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bWorkOnFloatValues : 1;                                    // 0x01B8(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Y4A6[0x7];                                     // 0x01B9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(533);
		return ptr;
	}



};

// Class AIModule.EnvQueryTest_Pathfinding
// 0x0078 (FullSize[0x0238] - InheritedSize[0x01C0])
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{
public:
	TEnumAsByte<AIModule_EEnvTestPathfinding>          TestMode;                                                  // 0x01C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FEOA[0x7];                                     // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Context;                                                   // 0x01C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDataProviderBoolValue                    PathFromContext;                                           // 0x01D0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderBoolValue                    SkipUnreachable;                                           // 0x0200(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
	class UClass*                                      FilterClass;                                               // 0x0230(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(538);
		return ptr;
	}



};

// Class AIModule.EnvQueryTest_PathfindingBatch
// 0x0030 (FullSize[0x0268] - InheritedSize[0x0238])
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{
public:
	struct FAIDataProviderFloatValue                   ScanRangeMultiplier;                                       // 0x0238(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(539);
		return ptr;
	}



};

// Class AIModule.EnvQueryTest_Project
// 0x0030 (FullSize[0x01F0] - InheritedSize[0x01C0])
class UEnvQueryTest_Project : public UEnvQueryTest
{
public:
	struct FEnvTraceData                               ProjectionData;                                            // 0x01C0(0x0030) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(540);
		return ptr;
	}



};

// Class AIModule.EnvQueryTest_Random
// 0x0000 (FullSize[0x01C0] - InheritedSize[0x01C0])
class UEnvQueryTest_Random : public UEnvQueryTest
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(541);
		return ptr;
	}



};

// Class AIModule.EnvQueryTest_Trace
// 0x00C8 (FullSize[0x0288] - InheritedSize[0x01C0])
class UEnvQueryTest_Trace : public UEnvQueryTest
{
public:
	struct FEnvTraceData                               TraceData;                                                 // 0x01C0(0x0030) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FAIDataProviderBoolValue                    TraceFromContext;                                          // 0x01F0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ItemHeightOffset;                                          // 0x0220(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ContextHeightOffset;                                       // 0x0250(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
	class UClass*                                      Context;                                                   // 0x0280(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(542);
		return ptr;
	}



};

// Class AIModule.EnvQueryTypes
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryTypes : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(543);
		return ptr;
	}



};

// Class AIModule.EQSQueryResultSourceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEQSQueryResultSourceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(544);
		return ptr;
	}



};

// Class AIModule.EQSRenderingComponent
// 0x0040 (FullSize[0x06D0] - InheritedSize[0x0690])
class UEQSRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData_38XB[0x40];                                    // 0x0690(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(545);
		return ptr;
	}



};

// Class AIModule.EQSTestingPawn
// 0x0070 (FullSize[0x07F0] - InheritedSize[0x0780])
class AEQSTestingPawn : public ACharacter
{
public:
	unsigned char                                      UnknownData_PK7P[0x8];                                     // 0x0780(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEnvQuery*                                   QueryTemplate;                                             // 0x0788(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEnvNamedValue>                      QueryParams;                                               // 0x0790(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FAIDynamicParam>                     QueryConfig;                                               // 0x07A0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              TimeLimitPerStep;                                          // 0x07B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StepToDebugDraw;                                           // 0x07B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AIModule_EEnvQueryHightlightMode                   HighlightMode;                                             // 0x07B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X052[0x3];                                     // 0x07B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bDrawLabels : 1;                                           // 0x07BC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawFailedItems : 1;                                      // 0x07BC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReRunQueryOnlyOnFinishedMove : 1;                         // 0x07BC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShouldBeVisibleInGame : 1;                                // 0x07BC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bTickDuringGame : 1;                                       // 0x07BC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G93A[0x3];                                     // 0x07BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<AIModule_EEnvQueryRunMode>             QueryingMode;                                              // 0x07C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4CMC[0x2F];                                    // 0x07C1(0x002F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(546);
		return ptr;
	}



};

// Class AIModule.GenericTeamAgentInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGenericTeamAgentInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(547);
		return ptr;
	}



};

// Class AIModule.AIController
// 0x0090 (FullSize[0x0460] - InheritedSize[0x03D0])
class AAIController : public AController
{
public:
	unsigned char                                      UnknownData_UGM7[0x38];                                    // 0x03D0(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bStopAILogicOnUnposses : 1;                                // 0x0408(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bLOSflag : 1;                                              // 0x0408(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSkipExtraLOSChecks : 1;                                   // 0x0408(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowStrafe : 1;                                          // 0x0408(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bWantsPlayerState : 1;                                     // 0x0408(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSetControlRotationFromPawnOrientation : 1;                // 0x0408(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N1YW[0x7];                                     // 0x0409(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPathFollowingComponent*                     PathFollowingComponent;                                    // 0x0410(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBrainComponent*                             BrainComponent;                                            // 0x0418(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIPerceptionComponent*                      PerceptionComponent;                                       // 0x0420(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPawnActionsComponent*                       ActionsComp;                                               // 0x0428(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlackboardComponent*                        Blackboard;                                                // 0x0430(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGameplayTasksComponent*                     CachedGameplayTasksComponent;                              // 0x0438(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      DefaultNavigationFilterClass;                              // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    ReceiveMoveCompleted;                                      // 0x0448(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MAUO[0x8];                                     // 0x0458(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(392);
		return ptr;
	}



	bool UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent);
	void STATIC_UnclaimTaskResource(class UClass* ResourceClass);
	void STATIC_SetMoveBlockDetection(bool bEnable);
	bool RunBehaviorTree(class UBehaviorTree* BTAsset);
	void STATIC_OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset);
	void STATIC_OnUnpossess(class APawn* UnpossessedPawn);
	void STATIC_OnPossess(class APawn* PossessedPawn);
	void STATIC_OnGameplayTaskResourcesClaimed(const struct FGameplayResourceSet& NewlyClaimed, const struct FGameplayResourceSet& FreshlyReleased);
	TEnumAsByte<AIModule_EPathFollowingRequestResult> MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	TEnumAsByte<AIModule_EPathFollowingRequestResult> MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	void STATIC_K2_SetFocus(class AActor* NewFocus);
	void STATIC_K2_SetFocalPoint(const struct FVector& FP);
	void STATIC_K2_ClearFocus();
	bool HasPartialPath();
	class UPathFollowingComponent* GetPathFollowingComponent();
	TEnumAsByte<AIModule_EPathFollowingStatus> GetMoveStatus();
	struct FVector GetImmediateMoveDestination();
	class AActor* GetFocusActor();
	struct FVector GetFocalPointOnActor(class AActor* Actor);
	struct FVector GetFocalPoint();
	class UAIPerceptionComponent* GetAIPerceptionComponent();
	void STATIC_ClaimTaskResource(class UClass* ResourceClass);
};

// Class AIModule.GridPathAIController
// 0x0000 (FullSize[0x0460] - InheritedSize[0x0460])
class AGridPathAIController : public AAIController
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(548);
		return ptr;
	}



};

// Class AIModule.PathFollowingComponent
// 0x02B8 (FullSize[0x03A8] - InheritedSize[0x00F0])
class UPathFollowingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_4R4P[0x130];                                   // 0x00F0(0x0130) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UNavMovementComponent*                       MovementComp;                                              // 0x0220(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MACR[0x8];                                     // 0x0228(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ANavigationData*                             MyNavData;                                                 // 0x0230(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LKPH[0x170];                                   // 0x0238(0x0170) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(501);
		return ptr;
	}



	void STATIC_OnNavDataRegistered(class ANavigationData* NavData);
	void STATIC_OnActorBump(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	struct FVector GetPathDestination();
	TEnumAsByte<AIModule_EPathFollowingAction> GetPathActionType();
};

// Class AIModule.GridPathFollowingComponent
// 0x0038 (FullSize[0x03E0] - InheritedSize[0x03A8])
class UGridPathFollowingComponent : public UPathFollowingComponent
{
public:
	class UNavLocalGridManager*                        GridManager;                                               // 0x03A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SSDQ[0x30];                                    // 0x03B0(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(549);
		return ptr;
	}



};

// Class AIModule.NavFilter_AIControllerDefault
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UNavFilter_AIControllerDefault : public UNavigationQueryFilter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(551);
		return ptr;
	}



};

// Class AIModule.NavLocalGridManager
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UNavLocalGridManager : public UObject
{
public:
	unsigned char                                      UnknownData_73PM[0x30];                                    // 0x0028(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(552);
		return ptr;
	}



	bool SetLocalNavigationGridDensity(class UObject* WorldContextObject, float CellSize);
	void STATIC_RemoveLocalNavigationGrid(class UObject* WorldContextObject, int GridId, bool bRebuildGrids);
	bool FindLocalNavigationGridPath(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<struct FVector>* PathPoints);
	int AddLocalNavigationGridForPoints(class UObject* WorldContextObject, TArray<struct FVector> Locations, int Radius2D, float Height, bool bRebuildGrids);
	int AddLocalNavigationGridForPoint(class UObject* WorldContextObject, const struct FVector& Location, int Radius2D, float Height, bool bRebuildGrids);
	int AddLocalNavigationGridForCapsule(class UObject* WorldContextObject, const struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int Radius2D, float Height, bool bRebuildGrids);
	int AddLocalNavigationGridForBox(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent, const struct FRotator& Rotation, int Radius2D, float Height, bool bRebuildGrids);
};

// Class AIModule.PawnAction
// 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
class UPawnAction : public UObject
{
public:
	class UPawnAction*                                 ChildAction;                                               // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPawnAction*                                 ParentAction;                                              // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPawnActionsComponent*                       OwnerComponent;                                            // 0x0038(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UObject*                                     Instigator;                                                // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBrainComponent*                             BrainComp;                                                 // 0x0048(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_M06I[0x68];                                    // 0x0050(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bAllowNewSameClassInstance : 1;                            // 0x00B8(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bReplaceActiveSameClassInstance : 1;                       // 0x00B8(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bShouldPauseMovement : 1;                                  // 0x00B8(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bAlwaysNotifyOnFinished : 1;                               // 0x00B8(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_C65E[0x17];                                    // 0x00B9(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(553);
		return ptr;
	}



	TEnumAsByte<AIModule_EAIRequestPriority> GetActionPriority();
	void STATIC_Finish(TEnumAsByte<AIModule_EPawnActionResult> WithResult);
	class UPawnAction* CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass);
};

// Class AIModule.PawnAction_BlueprintBase
// 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
class UPawnAction_BlueprintBase : public UPawnAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(554);
		return ptr;
	}



	void STATIC_ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void STATIC_ActionStart(class APawn* ControlledPawn);
	void STATIC_ActionResume(class APawn* ControlledPawn);
	void STATIC_ActionPause(class APawn* ControlledPawn);
	void STATIC_ActionFinished(class APawn* ControlledPawn, TEnumAsByte<AIModule_EPawnActionResult> WithResult);
};

// Class AIModule.PawnAction_Move
// 0x0050 (FullSize[0x0120] - InheritedSize[0x00D0])
class UPawnAction_Move : public UPawnAction
{
public:
	class AActor*                                      GoalActor;                                                 // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     GoalLocation;                                              // 0x00D8(0x000C) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              AcceptableRadius;                                          // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      FilterClass;                                               // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bAllowStrafe : 1;                                          // 0x00F0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bFinishOnOverlap : 1;                                      // 0x00F0(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bUsePathfinding : 1;                                       // 0x00F0(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bAllowPartialPath : 1;                                     // 0x00F0(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bProjectGoalToNavigation : 1;                              // 0x00F0(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bUpdatePathToGoal : 1;                                     // 0x00F0(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bAbortChildActionOnPathChange : 1;                         // 0x00F0(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BY1W[0x2F];                                    // 0x00F1(0x002F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(555);
		return ptr;
	}



};

// Class AIModule.PawnAction_Repeat
// 0x0020 (FullSize[0x00F0] - InheritedSize[0x00D0])
class UPawnAction_Repeat : public UPawnAction
{
public:
	class UPawnAction*                                 ActionToRepeat;                                            // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPawnAction*                                 RecentActionCopy;                                          // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EPawnActionFailHandling>      ChildFailureHandlingMode;                                  // 0x00E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LBHO[0xF];                                     // 0x00E1(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(556);
		return ptr;
	}



};

// Class AIModule.PawnAction_Sequence
// 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
class UPawnAction_Sequence : public UPawnAction
{
public:
	TArray<class UPawnAction*>                         ActionSequence;                                            // 0x00D0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EPawnActionFailHandling>      ChildFailureHandlingMode;                                  // 0x00E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VQNU[0x7];                                     // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPawnAction*                                 RecentActionCopy;                                          // 0x00E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C1GL[0x10];                                    // 0x00F0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(557);
		return ptr;
	}



};

// Class AIModule.PawnAction_Wait
// 0x0010 (FullSize[0x00E0] - InheritedSize[0x00D0])
class UPawnAction_Wait : public UPawnAction
{
public:
	float                                              TimeToWait;                                                // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YWCE[0xC];                                     // 0x00D4(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(558);
		return ptr;
	}



};

// Class AIModule.PawnActionsComponent
// 0x0038 (FullSize[0x0128] - InheritedSize[0x00F0])
class UPawnActionsComponent : public UActorComponent
{
public:
	class APawn*                                       ControlledPawn;                                            // 0x00F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FPawnActionStack>                    ActionStacks;                                              // 0x00F8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FPawnActionEvent>                    ActionEvents;                                              // 0x0108(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UPawnAction*                                 CurrentAction;                                             // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CM9T[0x8];                                     // 0x0120(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(559);
		return ptr;
	}



	bool K2_PushAction(class UPawnAction* NewAction, TEnumAsByte<AIModule_EAIRequestPriority> Priority, class UObject* Instigator);
	bool K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, TEnumAsByte<AIModule_EAIRequestPriority> Priority);
	TEnumAsByte<AIModule_EPawnActionAbortState> K2_ForceAbortAction(class UPawnAction* ActionToAbort);
	TEnumAsByte<AIModule_EPawnActionAbortState> K2_AbortAction(class UPawnAction* ActionToAbort);
};

// Class AIModule.PawnSensingComponent
// 0x0048 (FullSize[0x0138] - InheritedSize[0x00F0])
class UPawnSensingComponent : public UActorComponent
{
public:
	float                                              HearingThreshold;                                          // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LOSHearingThreshold;                                       // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SightRadius;                                               // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SensingInterval;                                           // 0x00FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HearingMaxSoundAge;                                        // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableSensingUpdates : 1;                                 // 0x0104(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOnlySensePlayers : 1;                                     // 0x0104(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSeePawns : 1;                                             // 0x0104(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHearNoises : 1;                                           // 0x0104(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UHP1[0xB];                                     // 0x0105(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnSeePawn;                                                 // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnHearNoise;                                               // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                              PeripheralVisionAngle;                                     // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PeripheralVisionCosine;                                    // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(560);
		return ptr;
	}



	void STATIC_SetSensingUpdatesEnabled(bool bEnabled);
	void STATIC_SetSensingInterval(float NewSensingInterval);
	void STATIC_SetPeripheralVisionAngle(float NewPeripheralVisionAngle);
	void STATIC_SeePawnDelegate__DelegateSignature(class APawn* Pawn);
	void STATIC_HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume);
	float GetPeripheralVisionCosine();
	float GetPeripheralVisionAngle();
};

// Class AIModule.VisualLoggerExtension
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVisualLoggerExtension : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(561);
		return ptr;
	}



};

// Class AIModule.AIAsyncTaskBlueprintProxy
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UAIAsyncTaskBlueprintProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFail;                                                    // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QZKK[0x20];                                    // 0x0048(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(390);
		return ptr;
	}



	void STATIC_OnMoveCompleted(const struct FAIRequestID& RequestID, TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
};

// Class AIModule.AIBlueprintHelperLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(391);
		return ptr;
	}



	void STATIC_UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);
	class APawn* SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail);
	void STATIC_SendAIMessage(class APawn* Target, const struct FName& Message, class UObject* MessageSource, bool bSuccess);
	void STATIC_LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
	bool IsValidAIRotation(const struct FRotator& Rotation);
	bool IsValidAILocation(const struct FVector& Location);
	bool IsValidAIDirection(const struct FVector& DirectionVector);
	class UNavigationPath* GetCurrentPath(class AController* Controller);
	class UBlackboardComponent* GetBlackboard(class AActor* Target);
	class AAIController* GetAIController(class AActor* ControlledActor);
	class UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
};

// Class AIModule.AIDataProvider
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIDataProvider : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(393);
		return ptr;
	}



};

// Class AIModule.AIDataProvider_QueryParams
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAIDataProvider_QueryParams : public UAIDataProvider
{
public:
	struct FName                                       ParamName;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FloatValue;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IntValue;                                                  // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               BoolValue;                                                 // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NJ7V[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(394);
		return ptr;
	}



};

// Class AIModule.AIDataProvider_Random
// 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{
public:
	float                                              Min;                                                       // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Max;                                                       // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bInteger : 1;                                              // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9CRZ[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(395);
		return ptr;
	}



};

// Class AIModule.AIHotSpotManager
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIHotSpotManager : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(396);
		return ptr;
	}



};

// Class AIModule.AIPerceptionComponent
// 0x00D8 (FullSize[0x01C8] - InheritedSize[0x00F0])
class UAIPerceptionComponent : public UActorComponent
{
public:
	TArray<class UAISenseConfig*>                      SensesConfig;                                              // 0x00F0(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      DominantSense;                                             // 0x0100(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WYQ1[0x10];                                    // 0x0108(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AAIController*                               AIOwner;                                                   // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_08KO[0x80];                                    // 0x0120(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPerceptionUpdated;                                       // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTargetPerceptionUpdated;                                 // 0x01B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CIZA[0x8];                                     // 0x01C0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(397);
		return ptr;
	}



	void STATIC_SetSenseEnabled(class UClass* SenseClass, bool bEnable);
	void STATIC_RequestStimuliListenerUpdate();
	void STATIC_OnOwnerEndPlay(class AActor* Actor, TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void STATIC_GetPerceivedHostileActors(TArray<class AActor*>* OutActors);
	void STATIC_GetPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	void STATIC_GetKnownPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	void STATIC_GetCurrentlyPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	bool GetActorsPerception(class AActor* Actor, struct FActorPerceptionBlueprintInfo* Info);
};

// Class AIModule.AIPerceptionListenerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIPerceptionListenerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(398);
		return ptr;
	}



};

// Class AIModule.AIPerceptionStimuliSourceComponent
// 0x0018 (FullSize[0x0108] - InheritedSize[0x00F0])
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{
public:
	unsigned char                                      bAutoRegisterAsSource : 1;                                 // 0x00F0(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XJQ6[0x7];                                     // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              RegisterAsSourceForSenses;                                 // 0x00F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(399);
		return ptr;
	}



	void STATIC_UnregisterFromSense(class UClass* SenseClass);
	void STATIC_UnregisterFromPerceptionSystem();
	void STATIC_RegisterWithPerceptionSystem();
	void STATIC_RegisterForSense(class UClass* SenseClass);
};

// Class AIModule.AIPerceptionSystem
// 0x0108 (FullSize[0x0130] - InheritedSize[0x0028])
class UAIPerceptionSystem : public UObject
{
public:
	unsigned char                                      UnknownData_U6D1[0x58];                                    // 0x0028(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UAISense*>                            Senses;                                                    // 0x0080(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                              PerceptionAgingRate;                                       // 0x0090(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RPPW[0x9C];                                    // 0x0094(0x009C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(400);
		return ptr;
	}



	void STATIC_ReportPerceptionEvent(class UObject* WorldContextObject, class UAISenseEvent* PerceptionEvent);
	void STATIC_ReportEvent(class UAISenseEvent* PerceptionEvent);
	bool RegisterPerceptionStimuliSource(class UObject* WorldContextObject, class UClass* Sense, class AActor* Target);
	void STATIC_OnPerceptionStimuliSourceEndPlay(class AActor* Actor, TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	class UClass* GetSenseClassForStimulus(class UObject* WorldContextObject, const struct FAIStimulus& Stimulus);
};

// Class AIModule.AIResourceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIResourceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(401);
		return ptr;
	}



};

// Class AIModule.AIResource_Movement
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UAIResource_Movement : public UGameplayTaskResource
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(402);
		return ptr;
	}



};

// Class AIModule.AIResource_Logic
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UAIResource_Logic : public UGameplayTaskResource
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(403);
		return ptr;
	}



};

// Class AIModule.AISense
// 0x00F8 (FullSize[0x0120] - InheritedSize[0x0028])
class UAISense : public UObject
{
public:
	float                                              DefaultExpirationAge;                                      // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	AIModule_EAISenseNotifyType                        NotifyType;                                                // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1B1J[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bWantsNewPawnNotification : 1;                             // 0x0030(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bAutoRegisterAllPawnsAsSources : 1;                        // 0x0030(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5IZA[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAIPerceptionSystem*                         PerceptionSystemInstance;                                  // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5GHK[0xE0];                                    // 0x0040(0x00E0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(404);
		return ptr;
	}



};

// Class AIModule.AISense_Blueprint
// 0x0030 (FullSize[0x0150] - InheritedSize[0x0120])
class UAISense_Blueprint : public UAISense
{
public:
	class UClass*                                      ListenerDataType;                                          // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAIPerceptionComponent*>              ListenerContainer;                                         // 0x0128(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UAISenseEvent*>                       UnprocessedEvents;                                         // 0x0138(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_S7M4[0x8];                                     // 0x0148(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(405);
		return ptr;
	}



	float OnUpdate(TArray<class UAISenseEvent*> EventsToProcess);
	void STATIC_OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void STATIC_OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void STATIC_OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void STATIC_K2_OnNewPawn(class APawn* NewPawn);
	void STATIC_GetAllListenerComponents(TArray<class UAIPerceptionComponent*>* ListenerComponents);
	void STATIC_GetAllListenerActors(TArray<class AActor*>* ListenerActors);
};

// Class AIModule.AISense_Damage
// 0x0010 (FullSize[0x0130] - InheritedSize[0x0120])
class UAISense_Damage : public UAISense
{
public:
	TArray<struct FAIDamageEvent>                      RegisteredEvents;                                          // 0x0120(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(406);
		return ptr;
	}



	void STATIC_ReportDamageEvent(class UObject* WorldContextObject, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, const struct FVector& EventLocation, const struct FVector& HitLocation);
};

// Class AIModule.AISense_Hearing
// 0x0070 (FullSize[0x0190] - InheritedSize[0x0120])
class UAISense_Hearing : public UAISense
{
public:
	TArray<struct FAINoiseEvent>                       NoiseEvents;                                               // 0x0120(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                              SpeedOfSoundSq;                                            // 0x0130(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JZ3N[0x5C];                                    // 0x0134(0x005C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(407);
		return ptr;
	}



	void STATIC_ReportNoiseEvent(class UObject* WorldContextObject, const struct FVector& NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, const struct FName& Tag);
};

// Class AIModule.AISense_Prediction
// 0x0010 (FullSize[0x0130] - InheritedSize[0x0120])
class UAISense_Prediction : public UAISense
{
public:
	TArray<struct FAIPredictionEvent>                  RegisteredEvents;                                          // 0x0120(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(408);
		return ptr;
	}



	void STATIC_RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime);
	void STATIC_RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime);
};

// Class AIModule.AISense_Sight
// 0x00E0 (FullSize[0x0200] - InheritedSize[0x0120])
class UAISense_Sight : public UAISense
{
public:
	unsigned char                                      UnknownData_LA88[0xB0];                                    // 0x0120(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxTracesPerTick;                                          // 0x01D0(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MinQueriesPerTimeSliceCheck;                               // 0x01D4(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                             MaxTimeSlicePerTick;                                       // 0x01D8(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HighImportanceQueryDistanceThreshold;                      // 0x01E0(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CRU9[0x4];                                     // 0x01E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxQueryImportance;                                        // 0x01E8(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SightLimitQueryImportance;                                 // 0x01EC(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GNZH[0x10];                                    // 0x01F0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(409);
		return ptr;
	}



};

// Class AIModule.AISense_Team
// 0x0010 (FullSize[0x0130] - InheritedSize[0x0120])
class UAISense_Team : public UAISense
{
public:
	TArray<struct FAITeamStimulusEvent>                RegisteredEvents;                                          // 0x0120(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(410);
		return ptr;
	}



};

// Class AIModule.AISense_Touch
// 0x0010 (FullSize[0x0130] - InheritedSize[0x0120])
class UAISense_Touch : public UAISense
{
public:
	TArray<struct FAITouchEvent>                       RegisteredEvents;                                          // 0x0120(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(411);
		return ptr;
	}



};

// Class AIModule.AISenseBlueprintListener
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UAISenseBlueprintListener : public UUserDefinedStruct
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(413);
		return ptr;
	}



};

// Class AIModule.AISenseConfig
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UAISenseConfig : public UObject
{
public:
	struct FColor                                      DebugColor;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxAge;                                                    // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bStartsEnabled : 1;                                        // 0x0030(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZPQ1[0x17];                                    // 0x0031(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(414);
		return ptr;
	}



};

// Class AIModule.AISenseConfig_Blueprint
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UAISenseConfig_Blueprint : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                            // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(415);
		return ptr;
	}



};

// Class AIModule.AISenseConfig_Damage
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UAISenseConfig_Damage : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                            // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(416);
		return ptr;
	}



};

// Class AIModule.AISenseConfig_Hearing
// 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
class UAISenseConfig_Hearing : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                            // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HearingRange;                                              // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LoSHearingRange;                                           // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseLoSHearing : 1;                                        // 0x0058(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C2T9[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                    // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(417);
		return ptr;
	}



};

// Class AIModule.AISenseConfig_Prediction
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UAISenseConfig_Prediction : public UAISenseConfig
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(418);
		return ptr;
	}



};

// Class AIModule.AISenseConfig_Sight
// 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
class UAISenseConfig_Sight : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                            // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SightRadius;                                               // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LoseSightRadius;                                           // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PeripheralVisionAngleDegrees;                              // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                    // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              AutoSuccessRangeFromLastSeenLocation;                      // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RRMP[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(419);
		return ptr;
	}



};

// Class AIModule.AISenseConfig_Team
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UAISenseConfig_Team : public UAISenseConfig
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(420);
		return ptr;
	}



};

// Class AIModule.AISenseConfig_Touch
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UAISenseConfig_Touch : public UAISenseConfig
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(421);
		return ptr;
	}



};

// Class AIModule.AISenseEvent
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAISenseEvent : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(422);
		return ptr;
	}



};

// Class AIModule.AISenseEvent_Damage
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UAISenseEvent_Damage : public UAISenseEvent
{
public:
	struct FAIDamageEvent                              Event;                                                     // 0x0028(0x0030) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(423);
		return ptr;
	}



};

// Class AIModule.AISenseEvent_Hearing
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UAISenseEvent_Hearing : public UAISenseEvent
{
public:
	struct FAINoiseEvent                               Event;                                                     // 0x0028(0x0030) (Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(424);
		return ptr;
	}



};

// Class AIModule.AISightTargetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAISightTargetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(425);
		return ptr;
	}



};

// Class AIModule.AISystem
// 0x00D8 (FullSize[0x0128] - InheritedSize[0x0050])
class UAISystem : public UAISystemBase
{
public:
	struct FSoftClassPath                              PerceptionSystemClassName;                                 // 0x0050(0x0018) (Edit, Config, GlobalConfig, Protected, NativeAccessSpecifierProtected)
	struct FSoftClassPath                              HotSpotManagerClassName;                                   // 0x0068(0x0018) (Edit, Config, GlobalConfig, Protected, NativeAccessSpecifierProtected)
	float                                              AcceptanceRadius;                                          // 0x0080(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PathfollowingRegularPathPointAcceptanceRadius;             // 0x0084(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PathfollowingNavLinkAcceptanceRadius;                      // 0x0088(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFinishMoveOnGoalOverlap;                                  // 0x008C(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAcceptPartialPaths;                                       // 0x008D(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowStrafing;                                            // 0x008E(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableBTAITasks;                                          // 0x008F(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowControllersAsEQSQuerier;                             // 0x0090(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableDebuggerPlugin;                                     // 0x0091(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              DefaultSightCollisionChannel;                              // 0x0092(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DV1B[0x5];                                     // 0x0093(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBehaviorTreeManager*                        BehaviorTreeManager;                                       // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEnvQueryManager*                            EnvironmentQueryManager;                                   // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAIPerceptionSystem*                         PerceptionSystem;                                          // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAIAsyncTaskBlueprintProxy*>          AllProxyObjects;                                           // 0x00B0(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UAIHotSpotManager*                           HotSpotManager;                                            // 0x00C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNavLocalGridManager*                        NavLocalGrids;                                             // 0x00C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_B65G[0x58];                                    // 0x00D0(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(427);
		return ptr;
	}



	void STATIC_AILoggingVerbose();
	void STATIC_AIIgnorePlayers();
};

// Class AIModule.AITask
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UAITask : public UGameplayTask
{
public:
	class AAIController*                               OwnerController;                                           // 0x0068(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(428);
		return ptr;
	}



};

// Class AIModule.AITask_LockLogic
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UAITask_LockLogic : public UAITask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(429);
		return ptr;
	}



};

// Class AIModule.AITask_MoveTo
// 0x00A0 (FullSize[0x0110] - InheritedSize[0x0070])
class UAITask_MoveTo : public UAITask
{
public:
	struct FScriptMulticastDelegate                    OnRequestFailed;                                           // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnMoveFinished;                                            // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FAIMoveRequest                              MoveRequest;                                               // 0x0090(0x0040) (Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_T4NX[0x40];                                    // 0x00D0(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(430);
		return ptr;
	}



	class UAITask_MoveTo* AIMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, class AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<AIModule_EAIOptionFlag> StopOnOverlap, TEnumAsByte<AIModule_EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking);
};

// Class AIModule.AITask_RunEQS
// 0x00E0 (FullSize[0x0150] - InheritedSize[0x0070])
class UAITask_RunEQS : public UAITask
{
public:
	unsigned char                                      UnknownData_5FVU[0xE0];                                    // 0x0070(0x00E0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(431);
		return ptr;
	}



	class UAITask_RunEQS* RunEQS(class AAIController* Controller, class UEnvQuery* QueryTemplate);
};

// Class AIModule.BehaviorTree
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UBehaviorTree : public UObject
{
public:
	class UBTCompositeNode*                            RootNode;                                                  // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlackboardData*                             BlackboardAsset;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UBTDecorator*>                        RootDecorators;                                            // 0x0038(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBTDecoratorLogic>                   RootDecoratorOps;                                          // 0x0048(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BD5I[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(432);
		return ptr;
	}



};

// Class AIModule.BrainComponent
// 0x0060 (FullSize[0x0150] - InheritedSize[0x00F0])
class UBrainComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_U3VH[0x8];                                     // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBlackboardComponent*                        BlackboardComp;                                            // 0x00F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AAIController*                               AIOwner;                                                   // 0x0100(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_O54U[0x48];                                    // 0x0108(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(433);
		return ptr;
	}



	void STATIC_StopLogic(const struct FString& Reason);
	void STATIC_RestartLogic();
	bool IsRunning();
	bool IsPaused();
};

// Class AIModule.BehaviorTreeComponent
// 0x0138 (FullSize[0x0288] - InheritedSize[0x0150])
class UBehaviorTreeComponent : public UBrainComponent
{
public:
	unsigned char                                      UnknownData_533W[0x20];                                    // 0x0150(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UBTNode*>                             NodeInstances;                                             // 0x0170(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WT21[0x108];                                   // 0x0180(0x0108) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(434);
		return ptr;
	}



	void STATIC_SetDynamicSubtree(const struct FGameplayTag& InjectTag, class UBehaviorTree* BehaviorAsset);
	float GetTagCooldownEndTime(const struct FGameplayTag& CooldownTag);
	void STATIC_AddCooldownTagDuration(const struct FGameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
};

// Class AIModule.BehaviorTreeManager
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UBehaviorTreeManager : public UObject
{
public:
	int                                                MaxDebuggerSteps;                                          // 0x0028(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E9XN[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBehaviorTreeTemplateInfo>           LoadedTemplates;                                           // 0x0030(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UBehaviorTreeComponent*>              ActiveComponents;                                          // 0x0040(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(435);
		return ptr;
	}



};

// Class AIModule.BehaviorTreeTypes
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBehaviorTreeTypes : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(436);
		return ptr;
	}



};

// Class AIModule.BlackboardComponent
// 0x00F8 (FullSize[0x01E8] - InheritedSize[0x00F0])
class UBlackboardComponent : public UActorComponent
{
public:
	class UBrainComponent*                             BrainComp;                                                 // 0x00F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlackboardData*                             BlackboardAsset;                                           // 0x00F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_78HS[0x20];                                    // 0x0100(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UBlackboardKeyType*>                  KeyInstances;                                              // 0x0120(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RIS6[0xB8];                                    // 0x0130(0x00B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(437);
		return ptr;
	}



	void STATIC_SetValueAsVector(const struct FName& KeyName, const struct FVector& VectorValue);
	void STATIC_SetValueAsString(const struct FName& KeyName, const struct FString& StringValue);
	void STATIC_SetValueAsRotator(const struct FName& KeyName, const struct FRotator& VectorValue);
	void STATIC_SetValueAsObject(const struct FName& KeyName, class UObject* ObjectValue);
	void STATIC_SetValueAsName(const struct FName& KeyName, const struct FName& NameValue);
	void STATIC_SetValueAsInt(const struct FName& KeyName, int IntValue);
	void STATIC_SetValueAsFloat(const struct FName& KeyName, float FloatValue);
	void STATIC_SetValueAsEnum(const struct FName& KeyName, unsigned char EnumValue);
	void STATIC_SetValueAsClass(const struct FName& KeyName, class UClass* ClassValue);
	void STATIC_SetValueAsBool(const struct FName& KeyName, bool BoolValue);
	bool IsVectorValueSet(const struct FName& KeyName);
	struct FVector GetValueAsVector(const struct FName& KeyName);
	struct FString GetValueAsString(const struct FName& KeyName);
	struct FRotator GetValueAsRotator(const struct FName& KeyName);
	class UObject* GetValueAsObject(const struct FName& KeyName);
	struct FName GetValueAsName(const struct FName& KeyName);
	int GetValueAsInt(const struct FName& KeyName);
	float GetValueAsFloat(const struct FName& KeyName);
	unsigned char GetValueAsEnum(const struct FName& KeyName);
	class UClass* GetValueAsClass(const struct FName& KeyName);
	bool GetValueAsBool(const struct FName& KeyName);
	bool GetRotationFromEntry(const struct FName& KeyName, struct FRotator* ResultRotation);
	bool GetLocationFromEntry(const struct FName& KeyName, struct FVector* ResultLocation);
	void STATIC_ClearValue(const struct FName& KeyName);
};

// Class AIModule.BlackboardData
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UBlackboardData : public UDataAsset
{
public:
	class UBlackboardData*                             Parent;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBlackboardEntry>                    Keys;                                                      // 0x0038(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      bHasSynchronizedKeys : 1;                                  // 0x0048(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0Y3Q[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(438);
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UBlackboardKeyType : public UObject
{
public:
	unsigned char                                      UnknownData_TIBE[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(439);
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_Bool
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBlackboardKeyType_Bool : public UBlackboardKeyType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(440);
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_Class
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UBlackboardKeyType_Class : public UBlackboardKeyType
{
public:
	class UClass*                                      BaseClass;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(441);
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_Enum
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{
public:
	class UEnum*                                       EnumType;                                                  // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EnumName;                                                  // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsEnumNameValid : 1;                                      // 0x0048(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8NSH[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(442);
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_Float
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBlackboardKeyType_Float : public UBlackboardKeyType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(443);
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_Int
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBlackboardKeyType_Int : public UBlackboardKeyType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(444);
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_Name
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBlackboardKeyType_Name : public UBlackboardKeyType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(445);
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_NativeEnum
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{
public:
	struct FString                                     EnumName;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEnum*                                       EnumType;                                                  // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(446);
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_Object
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UBlackboardKeyType_Object : public UBlackboardKeyType
{
public:
	class UClass*                                      BaseClass;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(447);
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_Rotator
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBlackboardKeyType_Rotator : public UBlackboardKeyType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(448);
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_String
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UBlackboardKeyType_String : public UBlackboardKeyType
{
public:
	struct FString                                     StringValue;                                               // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(449);
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_Vector
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBlackboardKeyType_Vector : public UBlackboardKeyType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(450);
		return ptr;
	}



};

// Class AIModule.BTNode
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UBTNode : public UObject
{
public:
	unsigned char                                      UnknownData_K977[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     NodeName;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBehaviorTree*                               TreeAsset;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBTCompositeNode*                            ParentNode;                                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NFCA[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(451);
		return ptr;
	}



};

// Class AIModule.BTAuxiliaryNode
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UBTAuxiliaryNode : public UBTNode
{
public:
	unsigned char                                      UnknownData_YSJH[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(452);
		return ptr;
	}



};

// Class AIModule.BTCompositeNode
// 0x0078 (FullSize[0x00D0] - InheritedSize[0x0058])
class UBTCompositeNode : public UBTNode
{
public:
	TArray<struct FBTCompositeChild>                   Children;                                                  // 0x0058(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UBTService*>                          Services;                                                  // 0x0068(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_32J1[0x58];                                    // 0x0078(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(453);
		return ptr;
	}



};

// Class AIModule.BTComposite_Selector
// 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
class UBTComposite_Selector : public UBTCompositeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(454);
		return ptr;
	}



};

// Class AIModule.BTComposite_Sequence
// 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
class UBTComposite_Sequence : public UBTCompositeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(455);
		return ptr;
	}



};

// Class AIModule.BTComposite_SimpleParallel
// 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
class UBTComposite_SimpleParallel : public UBTCompositeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(456);
		return ptr;
	}



};

// Class AIModule.BTDecorator
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTDecorator : public UBTAuxiliaryNode
{
public:
	unsigned char                                      UnknownData_VTBY : 7;                                      // 0x0060(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bInverseCondition : 1;                                     // 0x0060(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0980[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<AIModule_EBTFlowAbortMode>             FlowAbortMode;                                             // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UPZB[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(457);
		return ptr;
	}



};

// Class AIModule.BTDecorator_BlackboardBase
// 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
class UBTDecorator_BlackboardBase : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                             // 0x0068(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(458);
		return ptr;
	}



};

// Class AIModule.BTDecorator_Blackboard
// 0x0030 (FullSize[0x00C0] - InheritedSize[0x0090])
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{
public:
	int                                                IntValue;                                                  // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FloatValue;                                                // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     StringValue;                                               // 0x0098(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     CachedDescription;                                         // 0x00A8(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      OperationType;                                             // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<AIModule_EBTBlackboardRestart>         NotifyObserver;                                            // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WRXC[0x6];                                     // 0x00BA(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(459);
		return ptr;
	}



};

// Class AIModule.BTDecorator_BlueprintBase
// 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
class UBTDecorator_BlueprintBase : public UBTDecorator
{
public:
	class AAIController*                               AIOwner;                                                   // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      ActorOwner;                                                // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FName>                               ObservedKeyNames;                                          // 0x0078(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NGFB[0x10];                                    // 0x0088(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bShowPropertyDetails : 1;                                  // 0x0098(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bCheckConditionOnlyBlackBoardChanges : 1;                  // 0x0098(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bIsObservingBB : 1;                                        // 0x0098(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4JKU[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(460);
		return ptr;
	}



	void STATIC_ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void STATIC_ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void STATIC_ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void STATIC_ReceiveObserverDeactivated(class AActor* OwnerActor);
	void STATIC_ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void STATIC_ReceiveObserverActivated(class AActor* OwnerActor);
	void STATIC_ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void STATIC_ReceiveExecutionStart(class AActor* OwnerActor);
	void STATIC_ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<AIModule_EBTNodeResult> NodeResult);
	void STATIC_ReceiveExecutionFinish(class AActor* OwnerActor, TEnumAsByte<AIModule_EBTNodeResult> NodeResult);
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	bool PerformConditionCheck(class AActor* OwnerActor);
	bool IsDecoratorObserverActive();
	bool IsDecoratorExecutionActive();
};

// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// 0x0060 (FullSize[0x00C8] - InheritedSize[0x0068])
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      ActorToCheck;                                              // 0x0068(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)
	GameplayTags_EGameplayContainerMatchType           TagsToMatch;                                               // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CMPM[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       GameplayTags;                                              // 0x0098(0x0020) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FString                                     CachedDescription;                                         // 0x00B8(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(461);
		return ptr;
	}



};

// Class AIModule.BTDecorator_CompareBBEntries
// 0x0058 (FullSize[0x00C0] - InheritedSize[0x0068])
class UBTDecorator_CompareBBEntries : public UBTDecorator
{
public:
	TEnumAsByte<AIModule_EBlackBoardEntryComparison>   Operator;                                                  // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OQM2[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      BlackboardKeyA;                                            // 0x0070(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FBlackboardKeySelector                      BlackboardKeyB;                                            // 0x0098(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(462);
		return ptr;
	}



};

// Class AIModule.BTDecorator_ConditionalLoop
// 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(463);
		return ptr;
	}



};

// Class AIModule.BTDecorator_ConeCheck
// 0x0088 (FullSize[0x00F0] - InheritedSize[0x0068])
class UBTDecorator_ConeCheck : public UBTDecorator
{
public:
	float                                              ConeHalfAngle;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F93U[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      ConeOrigin;                                                // 0x0070(0x0028) (Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      ConeDirection;                                             // 0x0098(0x0028) (Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      Observed;                                                  // 0x00C0(0x0028) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z73D[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(464);
		return ptr;
	}



};

// Class AIModule.BTDecorator_Cooldown
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UBTDecorator_Cooldown : public UBTDecorator
{
public:
	float                                              CoolDownTime;                                              // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UKN8[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(465);
		return ptr;
	}



};

// Class AIModule.BTDecorator_DoesPathExist
// 0x0060 (FullSize[0x00C8] - InheritedSize[0x0068])
class UBTDecorator_DoesPathExist : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKeyA;                                            // 0x0068(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FBlackboardKeySelector                      BlackboardKeyB;                                            // 0x0090(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bUseSelf : 1;                                              // 0x00B8(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZZGX[0x3];                                     // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<AIModule_EPathExistanceQueryType>      PathQueryType;                                             // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1IN3[0x3];                                     // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      FilterClass;                                               // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(466);
		return ptr;
	}



};

// Class AIModule.BTDecorator_ForceSuccess
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UBTDecorator_ForceSuccess : public UBTDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(467);
		return ptr;
	}



};

// Class AIModule.BTDecorator_IsAtLocation
// 0x0040 (FullSize[0x00D0] - InheritedSize[0x0090])
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                          // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_367O[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIDataProviderFloatValue                   ParametrizedAcceptableRadius;                              // 0x0098(0x0030) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	AIModule_EFAIDistanceType                          GeometricDistanceType;                                     // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JSPD[0x3];                                     // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bUseParametrizedRadius : 1;                                // 0x00CC(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseNavAgentGoalLocation : 1;                              // 0x00CC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPathFindingBasedTest : 1;                                 // 0x00CC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HXJR[0x3];                                     // 0x00CD(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(468);
		return ptr;
	}



};

// Class AIModule.BTDecorator_IsBBEntryOfClass
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{
public:
	class UClass*                                      TestClass;                                                 // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(469);
		return ptr;
	}



};

// Class AIModule.BTDecorator_KeepInCone
// 0x0060 (FullSize[0x00C8] - InheritedSize[0x0068])
class UBTDecorator_KeepInCone : public UBTDecorator
{
public:
	float                                              ConeHalfAngle;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H2M7[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      ConeOrigin;                                                // 0x0070(0x0028) (Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      Observed;                                                  // 0x0098(0x0028) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      bUseSelfAsOrigin : 1;                                      // 0x00C0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseSelfAsObserved : 1;                                    // 0x00C0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8JA2[0x7];                                     // 0x00C1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(470);
		return ptr;
	}



};

// Class AIModule.BTDecorator_Loop
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UBTDecorator_Loop : public UBTDecorator
{
public:
	int                                                NumLoops;                                                  // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInfiniteLoop;                                             // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_56IR[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InfiniteLoopTimeoutTime;                                   // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F3M8[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(471);
		return ptr;
	}



};

// Class AIModule.BTDecorator_ReachedMoveGoal
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UBTDecorator_ReachedMoveGoal : public UBTDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(472);
		return ptr;
	}



};

// Class AIModule.BTDecorator_SetTagCooldown
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UBTDecorator_SetTagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                                CooldownTag;                                               // 0x0068(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CooldownDuration;                                          // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAddToExistingDuration;                                    // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MN2V[0x3];                                     // 0x0075(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(473);
		return ptr;
	}



};

// Class AIModule.BTDecorator_TagCooldown
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UBTDecorator_TagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                                CooldownTag;                                               // 0x0068(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CooldownDuration;                                          // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAddToExistingDuration;                                    // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bActivatesCooldown;                                        // 0x0075(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X344[0x2];                                     // 0x0076(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(474);
		return ptr;
	}



};

// Class AIModule.BTDecorator_TimeLimit
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UBTDecorator_TimeLimit : public UBTDecorator
{
public:
	float                                              TimeLimit;                                                 // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L8TX[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(475);
		return ptr;
	}



};

// Class AIModule.BTFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(476);
		return ptr;
	}



	void STATIC_StopUsingExternalEvent(class UBTNode* NodeOwner);
	void STATIC_StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor);
	void STATIC_SetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FVector& Value);
	void STATIC_SetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FString& Value);
	void STATIC_SetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FRotator& Value);
	void STATIC_SetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UObject* Value);
	void STATIC_SetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FName& Value);
	void STATIC_SetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int Value);
	void STATIC_SetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float Value);
	void STATIC_SetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, unsigned char Value);
	void STATIC_SetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UClass* Value);
	void STATIC_SetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool Value);
	class UBlackboardComponent* GetOwnersBlackboard(class UBTNode* NodeOwner);
	class UBehaviorTreeComponent* GetOwnerComponent(class UBTNode* NodeOwner);
	struct FVector GetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	struct FString GetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	struct FRotator GetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	class UObject* GetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	struct FName GetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	int GetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	float GetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	unsigned char GetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	class UClass* GetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	bool GetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	class AActor* GetBlackboardValueAsActor(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	void STATIC_ClearBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	void STATIC_ClearBlackboardValue(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
};

// Class AIModule.BTService
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UBTService : public UBTAuxiliaryNode
{
public:
	float                                              Interval;                                                  // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RandomDeviation;                                           // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bCallTickOnSearchStart : 1;                                // 0x0068(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bRestartTimerOnEachActivation : 1;                         // 0x0068(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_M4W5[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(477);
		return ptr;
	}



};

// Class AIModule.BTService_BlackboardBase
// 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
class UBTService_BlackboardBase : public UBTService
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                             // 0x0070(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(478);
		return ptr;
	}



};

// Class AIModule.BTService_BlueprintBase
// 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
class UBTService_BlueprintBase : public UBTService
{
public:
	class AAIController*                               AIOwner;                                                   // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      ActorOwner;                                                // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_J7RO[0x10];                                    // 0x0080(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bShowPropertyDetails : 1;                                  // 0x0090(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bShowEventDetails : 1;                                     // 0x0090(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_K7G6[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(479);
		return ptr;
	}



	void STATIC_ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void STATIC_ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void STATIC_ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void STATIC_ReceiveSearchStart(class AActor* OwnerActor);
	void STATIC_ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void STATIC_ReceiveDeactivation(class AActor* OwnerActor);
	void STATIC_ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void STATIC_ReceiveActivation(class AActor* OwnerActor);
	bool IsServiceActive();
};

// Class AIModule.BTService_DefaultFocus
// 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{
public:
	unsigned char                                      FocusPriority;                                             // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YDRO[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(480);
		return ptr;
	}



};

// Class AIModule.BTService_RunEQS
// 0x0088 (FullSize[0x0120] - InheritedSize[0x0098])
class UBTService_RunEQS : public UBTService_BlackboardBase
{
public:
	struct FEQSParametrizedQueryExecutionRequest       EQSRequest;                                                // 0x0098(0x0048) (Edit, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JJTI[0x40];                                    // 0x00E0(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(481);
		return ptr;
	}



};

// Class AIModule.BTTaskNode
// 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
class UBTTaskNode : public UBTNode
{
public:
	TArray<class UBTService*>                          Services;                                                  // 0x0058(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      bIgnoreRestartSelf : 1;                                    // 0x0068(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_33DL[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(482);
		return ptr;
	}



};

// Class AIModule.BTTask_BlackboardBase
// 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
class UBTTask_BlackboardBase : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                             // 0x0070(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(483);
		return ptr;
	}



};

// Class AIModule.BTTask_BlueprintBase
// 0x0030 (FullSize[0x00A0] - InheritedSize[0x0070])
class UBTTask_BlueprintBase : public UBTTaskNode
{
public:
	class AAIController*                               AIOwner;                                                   // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      ActorOwner;                                                // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GODA[0x18];                                    // 0x0080(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bShowPropertyDetails : 1;                                  // 0x0098(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LZLW[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(484);
		return ptr;
	}



	void STATIC_SetFinishOnMessageWithId(const struct FName& MessageName, int RequestID);
	void STATIC_SetFinishOnMessage(const struct FName& MessageName);
	void STATIC_ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void STATIC_ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void STATIC_ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void STATIC_ReceiveExecute(class AActor* OwnerActor);
	void STATIC_ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void STATIC_ReceiveAbort(class AActor* OwnerActor);
	bool IsTaskExecuting();
	bool IsTaskAborting();
	void STATIC_FinishExecute(bool bSuccess);
	void STATIC_FinishAbort();
};

// Class AIModule.BTTask_GameplayTaskBase
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UBTTask_GameplayTaskBase : public UBTTaskNode
{
public:
	unsigned char                                      bWaitForGameplayTask : 1;                                  // 0x0070(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5TVU[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(485);
		return ptr;
	}



};

// Class AIModule.BTTask_MakeNoise
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UBTTask_MakeNoise : public UBTTaskNode
{
public:
	float                                              Loudnes;                                                   // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KNUK[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(486);
		return ptr;
	}



};

// Class AIModule.BTTask_MoveTo
// 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                          // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4MC5[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      FilterClass;                                               // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ObservedBlackboardValueTolerance;                          // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bObserveBlackboardValue : 1;                               // 0x00AC(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowStrafe : 1;                                          // 0x00AC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowPartialPath : 1;                                     // 0x00AC(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bTrackMovingGoal : 1;                                      // 0x00AC(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bProjectGoalLocation : 1;                                  // 0x00AC(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReachTestIncludesAgentRadius : 1;                         // 0x00AC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReachTestIncludesGoalRadius : 1;                          // 0x00AC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bStopOnOverlap : 1;                                        // 0x00AC(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bStopOnOverlapNeedsUpdate : 1;                             // 0x00AD(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2S52[0x2];                                     // 0x00AE(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(487);
		return ptr;
	}



};

// Class AIModule.BTTask_MoveDirectlyToward
// 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{
public:
	unsigned char                                      bDisablePathUpdateOnGoalLocationChange : 1;                // 0x00B0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bProjectVectorGoalToNavigation : 1;                        // 0x00B0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUpdatedDeprecatedProperties : 1;                          // 0x00B0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BTSQ[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(488);
		return ptr;
	}



};

// Class AIModule.BTTask_PawnActionBase
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UBTTask_PawnActionBase : public UBTTaskNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(489);
		return ptr;
	}



};

// Class AIModule.BTTask_PlayAnimation
// 0x0080 (FullSize[0x00F0] - InheritedSize[0x0070])
class UBTTask_PlayAnimation : public UBTTaskNode
{
public:
	class UAnimationAsset*                             AnimationToPlay;                                           // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLooping : 1;                                              // 0x0078(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNonBlocking : 1;                                          // 0x0078(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I2AD[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBehaviorTreeComponent*                      MyOwnerComp;                                               // 0x0080(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      CachedSkelMesh;                                            // 0x0088(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6QFO[0x60];                                    // 0x0090(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(490);
		return ptr;
	}



};

// Class AIModule.BTTask_PlaySound
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UBTTask_PlaySound : public UBTTaskNode
{
public:
	class USoundCue*                                   SoundToPlay;                                               // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(491);
		return ptr;
	}



};

// Class AIModule.BTTask_PushPawnAction
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{
public:
	class UPawnAction*                                 Action;                                                    // 0x0070(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(492);
		return ptr;
	}



};

// Class AIModule.BTTask_RotateToFaceBBEntry
// 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{
public:
	float                                              Precision;                                                 // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MURL[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(493);
		return ptr;
	}



};

// Class AIModule.BTTask_RunBehavior
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UBTTask_RunBehavior : public UBTTaskNode
{
public:
	class UBehaviorTree*                               BehaviorAsset;                                             // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(494);
		return ptr;
	}



};

// Class AIModule.BTTask_RunBehaviorDynamic
// 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{
public:
	struct FGameplayTag                                InjectionTag;                                              // 0x0070(0x0008) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBehaviorTree*                               DefaultBehaviorAsset;                                      // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBehaviorTree*                               BehaviorAsset;                                             // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(495);
		return ptr;
	}



};

// Class AIModule.BTTask_RunEQSQuery
// 0x00E8 (FullSize[0x0180] - InheritedSize[0x0098])
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{
public:
	class UEnvQuery*                                   QueryTemplate;                                             // 0x0098(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEnvNamedValue>                      QueryParams;                                               // 0x00A0(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FAIDynamicParam>                     QueryConfig;                                               // 0x00B0(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EEnvQueryRunMode>             RunMode;                                                   // 0x00C0(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5F33[0x7];                                     // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      EQSQueryBlackboardKey;                                     // 0x00C8(0x0028) (Edit, EditConst, NativeAccessSpecifierPublic)
	bool                                               bUseBBKey;                                                 // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X4FE[0x7];                                     // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEQSParametrizedQueryExecutionRequest       EQSRequest;                                                // 0x00F8(0x0048) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PH5C[0x40];                                    // 0x0140(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(496);
		return ptr;
	}



};

// Class AIModule.BTTask_SetTagCooldown
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UBTTask_SetTagCooldown : public UBTTaskNode
{
public:
	struct FGameplayTag                                CooldownTag;                                               // 0x0070(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAddToExistingDuration;                                    // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D6SB[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CooldownDuration;                                          // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(497);
		return ptr;
	}



};

// Class AIModule.BTTask_Wait
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UBTTask_Wait : public UBTTaskNode
{
public:
	float                                              WaitTime;                                                  // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RandomDeviation;                                           // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(498);
		return ptr;
	}



};

// Class AIModule.BTTask_WaitBlackboardTime
// 0x0028 (FullSize[0x00A0] - InheritedSize[0x0078])
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                             // 0x0078(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(499);
		return ptr;
	}



};

// Class AIModule.CrowdAgentInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCrowdAgentInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(500);
		return ptr;
	}



};

// Class AIModule.CrowdFollowingComponent
// 0x0058 (FullSize[0x0400] - InheritedSize[0x03A8])
class UCrowdFollowingComponent : public UPathFollowingComponent
{
public:
	unsigned char                                      UnknownData_GAZJ[0x8];                                     // 0x03A8(0x0008) Fix Super Size
	struct FVector                                     CrowdAgentMoveDirection;                                   // 0x03B0(0x000C) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1J0C[0x4];                                     // 0x03BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCharacterMovementComponent*                 CharacterMovement;                                         // 0x03C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNavAvoidanceMask                           AvoidanceGroup;                                            // 0x03C8(0x0004) (Deprecated, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FNavAvoidanceMask                           GroupsToAvoid;                                             // 0x03CC(0x0004) (Deprecated, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FNavAvoidanceMask                           GroupsToIgnore;                                            // 0x03D0(0x0004) (Deprecated, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_S2TA[0x2C];                                    // 0x03D4(0x002C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(502);
		return ptr;
	}



	void STATIC_SuspendCrowdSteering(bool bSuspend);
};

// Class AIModule.CrowdManager
// 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
class UCrowdManager : public UCrowdManagerBase
{
public:
	class ANavigationData*                             MyNavData;                                                 // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FCrowdAvoidanceConfig>               AvoidanceConfig;                                           // 0x0030(0x0010) (Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCrowdAvoidanceSamplingPattern>      SamplingPatterns;                                          // 0x0040(0x0010) (Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	int                                                MaxAgents;                                                 // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxAgentRadius;                                            // 0x0054(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxAvoidedAgents;                                          // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxAvoidedWalls;                                           // 0x005C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              NavmeshCheckInterval;                                      // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PathOptimizationInterval;                                  // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SeparationDirClamp;                                        // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PathOffsetRadiusMultiplier;                                // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FFVM : 4;                                      // 0x0070(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bResolveCollisions : 1;                                    // 0x0070(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WW7K[0x7F];                                    // 0x0071(0x007F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(504);
		return ptr;
	}



};

// Class AIModule.DetourCrowdAIController
// 0x0000 (FullSize[0x0460] - InheritedSize[0x0460])
class ADetourCrowdAIController : public AAIController
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(505);
		return ptr;
	}



};

// Class AIModule.EnvQuery
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UEnvQuery : public UDataAsset
{
public:
	struct FName                                       QueryName;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UEnvQueryOption*>                     Options;                                                   // 0x0038(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(506);
		return ptr;
	}



};

// Class AIModule.EnvQueryContext
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(507);
		return ptr;
	}



};

// Class AIModule.EnvQueryContext_BlueprintBase
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{
public:
	unsigned char                                      UnknownData_TWT5[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(508);
		return ptr;
	}



	void STATIC_ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation);
	void STATIC_ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor);
	void STATIC_ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet);
	void STATIC_ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet);
};

// Class AIModule.EnvQueryContext_Item
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_Item : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(509);
		return ptr;
	}



};

// Class AIModule.EnvQueryContext_Querier
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_Querier : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(510);
		return ptr;
	}



};

// Class AIModule.EnvQueryDebugHelpers
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryDebugHelpers : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(511);
		return ptr;
	}



};

// Class AIModule.EnvQueryGenerator
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UEnvQueryGenerator : public UEnvQueryNode
{
public:
	struct FString                                     OptionName;                                                // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ItemType;                                                  // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAutoSortTests : 1;                                        // 0x0048(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YCBL[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(513);
		return ptr;
	}



};

// Class AIModule.EnvQueryGenerator_ActorsOfClass
// 0x0070 (FullSize[0x00C0] - InheritedSize[0x0050])
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{
public:
	class UClass*                                      SearchedActorClass;                                        // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDataProviderBoolValue                    GenerateOnlyActorsInRadius;                                // 0x0058(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   SearchRadius;                                              // 0x0088(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UClass*                                      SearchCenter;                                              // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(514);
		return ptr;
	}



};

// Class AIModule.EnvQueryGenerator_BlueprintBase
// 0x0030 (FullSize[0x0080] - InheritedSize[0x0050])
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{
public:
	struct FText                                       GeneratorsActionDescription;                               // 0x0050(0x0018) (Edit, NativeAccessSpecifierPublic)
	class UClass*                                      Context;                                                   // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      GeneratedItemType;                                         // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4E49[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(515);
		return ptr;
	}



	class UObject* GetQuerier();
	void STATIC_DoItemGeneration(TArray<struct FVector> ContextLocations);
	void STATIC_AddGeneratedVector(const struct FVector& GeneratedVector);
	void STATIC_AddGeneratedActor(class AActor* GeneratedActor);
};

// Class AIModule.EnvQueryGenerator_Composite
// 0x0020 (FullSize[0x0070] - InheritedSize[0x0050])
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{
public:
	TArray<class UEnvQueryGenerator*>                  Generators;                                                // 0x0050(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowDifferentItemTypes : 1;                              // 0x0060(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHasMatchingItemType : 1;                                  // 0x0060(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VHKQ[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ForcedItemType;                                            // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(516);
		return ptr;
	}



};

// Class AIModule.EnvQueryGenerator_ProjectedPoints
// 0x0030 (FullSize[0x0080] - InheritedSize[0x0050])
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{
public:
	struct FEnvTraceData                               ProjectionData;                                            // 0x0050(0x0030) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(517);
		return ptr;
	}



};

// Class AIModule.EnvQueryGenerator_Cone
// 0x00D0 (FullSize[0x0150] - InheritedSize[0x0080])
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   AlignedPointsDistance;                                     // 0x0080(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue                   ConeDegrees;                                               // 0x00B0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue                   AngleStep;                                                 // 0x00E0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue                   Range;                                                     // 0x0110(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      CenterActor;                                               // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bIncludeContextLocation : 1;                               // 0x0148(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3LI4[0x7];                                     // 0x0149(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(518);
		return ptr;
	}



};

// Class AIModule.EnvQueryGenerator_CurrentLocation
// 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{
public:
	class UClass*                                      QueryContext;                                              // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(519);
		return ptr;
	}



};

// Class AIModule.EnvQueryGenerator_Donut
// 0x0128 (FullSize[0x01A8] - InheritedSize[0x0080])
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   InnerRadius;                                               // 0x0080(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   OuterRadius;                                               // 0x00B0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderIntValue                     NumberOfRings;                                             // 0x00E0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderIntValue                     PointsPerRing;                                             // 0x0110(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FEnvDirection                               ArcDirection;                                              // 0x0140(0x0020) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                  // 0x0160(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bUseSpiralPattern;                                         // 0x0190(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2DTT[0x7];                                     // 0x0191(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Center;                                                    // 0x0198(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDefineArc : 1;                                            // 0x01A0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SPEQ[0x7];                                     // 0x01A1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(520);
		return ptr;
	}



};

// Class AIModule.EnvQueryGenerator_OnCircle
// 0x0168 (FullSize[0x01E8] - InheritedSize[0x0080])
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   CircleRadius;                                              // 0x0080(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   SpaceBetween;                                              // 0x00B0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderIntValue                     NumberOfPoints;                                            // 0x00E0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	AIModule_EPointOnCircleSpacingMethod               PointOnCircleSpacingMethod;                                // 0x0110(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_50A8[0x7];                                     // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEnvDirection                               ArcDirection;                                              // 0x0118(0x0020) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                  // 0x0138(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                              AngleRadians;                                              // 0x0168(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9X8Y[0x4];                                     // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CircleCenter;                                              // 0x0170(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreAnyContextActorsWhenGeneratingCircle;               // 0x0178(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S6ZQ[0x7];                                     // 0x0179(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIDataProviderFloatValue                   CircleCenterZOffset;                                       // 0x0180(0x0030) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FEnvTraceData                               TraceData;                                                 // 0x01B0(0x0030) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bDefineArc : 1;                                            // 0x01E0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VKWF[0x7];                                     // 0x01E1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(521);
		return ptr;
	}



};

// Class AIModule.EnvQueryGenerator_SimpleGrid
// 0x0068 (FullSize[0x00E8] - InheritedSize[0x0080])
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   GridSize;                                                  // 0x0080(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   SpaceBetween;                                              // 0x00B0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UClass*                                      GenerateAround;                                            // 0x00E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(522);
		return ptr;
	}



};

// Class AIModule.EnvQueryGenerator_PathingGrid
// 0x0068 (FullSize[0x0150] - InheritedSize[0x00E8])
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{
public:
	struct FAIDataProviderBoolValue                    PathToItem;                                                // 0x00E8(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UClass*                                      NavigationFilter;                                          // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ScanRangeMultiplier;                                       // 0x0120(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(523);
		return ptr;
	}



};

// Class AIModule.EnvQueryInstanceBlueprintWrapper
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UEnvQueryInstanceBlueprintWrapper : public UObject
{
public:
	unsigned char                                      UnknownData_RB3R[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                QueryID;                                                   // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_X10V[0x24];                                    // 0x0034(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ItemType;                                                  // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                OptionIndex;                                               // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FPPV[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnQueryFinishedEvent;                                      // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(524);
		return ptr;
	}



	void STATIC_SetNamedParam(const struct FName& ParamName, float Value);
	TArray<struct FVector> GetResultsAsLocations();
	TArray<class AActor*> GetResultsAsActors();
	float GetItemScore(int ItemIndex);
	void STATIC_EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<AIModule_EEnvQueryStatus> QueryStatus);
};

// Class AIModule.EnvQueryItemType
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UEnvQueryItemType : public UObject
{
public:
	unsigned char                                      UnknownData_FGXW[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(525);
		return ptr;
	}



};

// Class AIModule.EnvQueryItemType_VectorBase
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(526);
		return ptr;
	}



};

// Class AIModule.EnvQueryItemType_ActorBase
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(527);
		return ptr;
	}



};

// Class AIModule.EnvQueryItemType_Actor
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(528);
		return ptr;
	}



};

// Class AIModule.EnvQueryItemType_Direction
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(529);
		return ptr;
	}



};

// Class AIModule.EnvQueryItemType_Point
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(530);
		return ptr;
	}



};

// Class AIModule.EnvQueryManager
// 0x0110 (FullSize[0x0138] - InheritedSize[0x0028])
class UEnvQueryManager : public UObject
{
public:
	unsigned char                                      UnknownData_OS4C[0x78];                                    // 0x0028(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FEnvQueryInstanceCache>              InstanceCache;                                             // 0x00A0(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UEnvQueryContext*>                    LocalContexts;                                             // 0x00B0(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UEnvQueryInstanceBlueprintWrapper*>   GCShieldedWrappers;                                        // 0x00C0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IYVQ[0x54];                                    // 0x00D0(0x0054) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxAllowedTestingTime;                                     // 0x0124(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bTestQueriesUsingBreadth;                                  // 0x0128(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_099P[0x3];                                     // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                QueryCountWarningThreshold;                                // 0x012C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                             QueryCountWarningInterval;                                 // 0x0130(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(531);
		return ptr;
	}



	class UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(class UObject* WorldContextObject, class UEnvQuery* QueryTemplate, class UObject* Querier, TEnumAsByte<AIModule_EEnvQueryRunMode> RunMode, class UClass* WrapperClass);
};

// Class AIModule.EnvQueryOption
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UEnvQueryOption : public UObject
{
public:
	class UEnvQueryGenerator*                          generator;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UEnvQueryTest*>                       Tests;                                                     // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(532);
		return ptr;
	}



};

// Class AIModule.EnvQueryTest_Distance
// 0x0010 (FullSize[0x01D0] - InheritedSize[0x01C0])
class UEnvQueryTest_Distance : public UEnvQueryTest
{
public:
	TEnumAsByte<AIModule_EEnvTestDistance>             TestMode;                                                  // 0x01C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IMTM[0x7];                                     // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DistanceTo;                                                // 0x01C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(534);
		return ptr;
	}



};

// Class AIModule.EnvQueryTest_Dot
// 0x0048 (FullSize[0x0208] - InheritedSize[0x01C0])
class UEnvQueryTest_Dot : public UEnvQueryTest
{
public:
	struct FEnvDirection                               LineA;                                                     // 0x01C0(0x0020) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FEnvDirection                               LineB;                                                     // 0x01E0(0x0020) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	AIModule_EEnvTestDot                               TestMode;                                                  // 0x0200(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAbsoluteValue;                                            // 0x0201(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JDCD[0x6];                                     // 0x0202(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(535);
		return ptr;
	}



};

// Class AIModule.EnvQueryTest_GameplayTags
// 0x0070 (FullSize[0x0230] - InheritedSize[0x01C0])
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{
public:
	struct FGameplayTagQuery                           TagQueryToMatch;                                           // 0x01C0(0x0048) (Edit, Protected, NativeAccessSpecifierProtected)
	bool                                               bUpdatedToUseQuery;                                        // 0x0208(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	GameplayTags_EGameplayContainerMatchType           TagsToMatch;                                               // 0x0209(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2LQR[0x6];                                     // 0x020A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       GameplayTags;                                              // 0x0210(0x0020) (Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(536);
		return ptr;
	}



};

// Class AIModule.EnvQueryTest_Overlap
// 0x0020 (FullSize[0x01E0] - InheritedSize[0x01C0])
class UEnvQueryTest_Overlap : public UEnvQueryTest
{
public:
	struct FEnvOverlapData                             OverlapData;                                               // 0x01C0(0x0020) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(537);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
