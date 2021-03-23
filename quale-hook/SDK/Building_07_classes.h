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

// BlueprintGeneratedClass Building_07.Building_07_C
// 0x0008 (FullSize[0x0380] - InheritedSize[0x0378])
class ABuilding_07_C : public ABuildings_Base_Surv_C
{
public:
	class UChildActorComponent*                        Ladder_BP1;                                                // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(176766);
		return ptr;
	}



	void STATIC_UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
