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

// Class AnimGraphRuntime.AnimCustomInstance
// 0x0008 (FullSize[0x03C0] - InheritedSize[0x03B8])
class UAnimCustomInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_Z3PB[0x8];                                     // 0x03B8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(175);
		return ptr;
	}



};

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{
public:
	struct FName                                       NotifyName;                                                // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(177);
		return ptr;
	}



};

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{
public:
	struct FName                                       NotifyName;                                                // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(179);
		return ptr;
	}



};

// Class AnimGraphRuntime.AnimSequencerInstance
// 0x0000 (FullSize[0x03C0] - InheritedSize[0x03C0])
class UAnimSequencerInstance : public UAnimCustomInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(180);
		return ptr;
	}



};

// Class AnimGraphRuntime.KismetAnimationLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(181);
		return ptr;
	}



	void STATIC_K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& Effector, struct FVector* OutJointPos, struct FVector* OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);
	struct FTransform K2_LookAt(const struct FTransform& CurrentTransform, const struct FVector& TargetPosition, const struct FVector& LookAtVector, bool bUseUpVector, const struct FVector& UpVector, float ClampConeInDegree);
};

// Class AnimGraphRuntime.PlayMontageCallbackProxy
// 0x00E8 (FullSize[0x0110] - InheritedSize[0x0028])
class UPlayMontageCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnCompleted;                                               // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBlendOut;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnInterrupted;                                             // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNotifyBegin;                                             // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNotifyEnd;                                               // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3K4R[0x98];                                    // 0x0078(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(182);
		return ptr;
	}



	void STATIC_OnNotifyEndReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void STATIC_OnNotifyBeginReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void STATIC_OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void STATIC_OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	class UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
