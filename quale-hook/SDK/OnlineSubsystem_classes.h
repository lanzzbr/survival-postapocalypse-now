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

// Class OnlineSubsystem.NamedInterfaces
// 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
class UNamedInterfaces : public UObject
{
public:
	TArray<struct FNamedInterface>                     NamedInterfaces;                                           // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FNamedInterfaceDef>                  NamedInterfaceDefs;                                        // 0x0038(0x0010) (ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6UNP[0x78];                                    // 0x0048(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1524);
		return ptr;
	}



};

// Class OnlineSubsystem.TurnBasedMatchInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTurnBasedMatchInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1525);
		return ptr;
	}



	void STATIC_OnMatchReceivedTurn(const struct FString& Match, bool bDidBecomeActive);
	void STATIC_OnMatchEnded(const struct FString& Match);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
