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

// BlueprintGeneratedClass Cv2_DestroyComponent.Cv2_DestroyComponent_C
// 0x0018 (FullSize[0x0108] - InheritedSize[0x00F0])
class UCv2_DestroyComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00F0(0x0008) (Transient, DuplicateTransient)
	class APawn*                                       PlayerPawn;                                                // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      PlayerActor;                                               // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(59421);
		return ptr;
	}



	void STATIC_RepairHouse(class ACv2_HouseBase_C* HouseActor);
	void STATIC_ServerDestroyFences(class AActor* HitActor, float Damage);
	void STATIC_DestroySphereRayCast(float Damage, float Radius, const struct FVector& StartLocation);
	void STATIC_DestroyHouse(class AActor* Actor, class UPrimitiveComponent* Component, const struct FVector& DestroyLocation, float Damage);
	void STATIC_FindUpHouse(const struct FVector& Coords, class ACv2_HouseBase_C* HouseActor, TArray<bool>* proxyArrays);
	void STATIC_DestroyFoliage(class UFoliageInstancedStaticMeshComponent* Foliage, int Index);
	void STATIC_ServerDestroyFurniture(class UPrimitiveComponent* HitComponent);
	void STATIC_ClientDestroyFurniture(class UPrimitiveComponent* HitComponent);
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_Cv2_DestroyComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
