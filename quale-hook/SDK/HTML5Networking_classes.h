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

// Class HTML5Networking.WebSocketConnection
// 0x0010 (FullSize[0x33670] - InheritedSize[0x33660])
class UWebSocketConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData_YJBE[0x10];                                    // 0x33660(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1624);
		return ptr;
	}



};

// Class HTML5Networking.WebSocketNetDriver
// 0x0010 (FullSize[0x0468] - InheritedSize[0x0458])
class UWebSocketNetDriver : public UNetDriver
{
public:
	int                                                WebSocketPort;                                             // 0x0458(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BSZ9[0xC];                                     // 0x045C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1625);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
