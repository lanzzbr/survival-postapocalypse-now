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

// Class SlateCore.FontBulkData
// 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
class UFontBulkData : public UObject
{
public:
	unsigned char                                      UnknownData_3NQ9[0x98];                                    // 0x0028(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(77);
		return ptr;
	}



};

// Class SlateCore.FontFaceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFontFaceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(78);
		return ptr;
	}



};

// Class SlateCore.FontProviderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFontProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(79);
		return ptr;
	}



};

// Class SlateCore.SlateTypes
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USlateTypes : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(80);
		return ptr;
	}



};

// Class SlateCore.SlateWidgetStyleAsset
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class USlateWidgetStyleAsset : public UObject
{
public:
	class USlateWidgetStyleContainerBase*              CustomStyle;                                               // 0x0028(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(81);
		return ptr;
	}



};

// Class SlateCore.SlateWidgetStyleContainerBase
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class USlateWidgetStyleContainerBase : public UObject
{
public:
	unsigned char                                      UnknownData_2EHD[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(82);
		return ptr;
	}



};

// Class SlateCore.SlateWidgetStyleContainerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USlateWidgetStyleContainerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(83);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
