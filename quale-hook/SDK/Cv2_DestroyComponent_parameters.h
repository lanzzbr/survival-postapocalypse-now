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
// Parameters
//---------------------------------------------------------------------------

// Function Cv2_DestroyComponent.Cv2_DestroyComponent_C.RepairHouse
struct UCv2_DestroyComponent_C_RepairHouse_Params
{
	class ACv2_HouseBase_C*                            HouseActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_DestroyComponent.Cv2_DestroyComponent_C.ServerDestroyFences
struct UCv2_DestroyComponent_C_ServerDestroyFences_Params
{
	class AActor*                                      HitActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_DestroyComponent.Cv2_DestroyComponent_C.DestroySphereRayCast
struct UCv2_DestroyComponent_C_DestroySphereRayCast_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     StartLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_DestroyComponent.Cv2_DestroyComponent_C.DestroyHouse
struct UCv2_DestroyComponent_C_DestroyHouse_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         Component;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     DestroyLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_DestroyComponent.Cv2_DestroyComponent_C.FindUpHouse
struct UCv2_DestroyComponent_C_FindUpHouse_Params
{
	struct FVector                                     Coords;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACv2_HouseBase_C*                            HouseActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                       proxyArrays;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Cv2_DestroyComponent.Cv2_DestroyComponent_C.DestroyFoliage
struct UCv2_DestroyComponent_C_DestroyFoliage_Params
{
	class UFoliageInstancedStaticMeshComponent*        Foliage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_DestroyComponent.Cv2_DestroyComponent_C.ServerDestroyFurniture
struct UCv2_DestroyComponent_C_ServerDestroyFurniture_Params
{
	class UPrimitiveComponent*                         HitComponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_DestroyComponent.Cv2_DestroyComponent_C.ClientDestroyFurniture
struct UCv2_DestroyComponent_C_ClientDestroyFurniture_Params
{
	class UPrimitiveComponent*                         HitComponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cv2_DestroyComponent.Cv2_DestroyComponent_C.ReceiveBeginPlay
struct UCv2_DestroyComponent_C_ReceiveBeginPlay_Params
{
};

// Function Cv2_DestroyComponent.Cv2_DestroyComponent_C.ExecuteUbergraph_Cv2_DestroyComponent
struct UCv2_DestroyComponent_C_ExecuteUbergraph_Cv2_DestroyComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
