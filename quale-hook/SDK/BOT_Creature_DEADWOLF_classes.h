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

// BlueprintGeneratedClass BOT_Creature_DEADWOLF.BOT_Creature_DEADWOLF_C
// 0x000C (FullSize[0x0570] - InheritedSize[0x0564])
class ABOT_Creature_DEADWOLF_C : public ABOT_CreatureBase_C
{
public:
	unsigned char                                      UnknownData_9OMM[0x4];                                     // 0x0564(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0568(0x0008) (Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(163694);
		return ptr;
	}



	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_BOT_Creature_DEADWOLF(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
