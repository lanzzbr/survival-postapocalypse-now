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

// Class ImgMedia.ImgMediaSource
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UImgMediaSource : public UBaseMediaSource
{
public:
	float                                              FramesPerSecondOverride;                                   // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WQKJ[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ProxyOverride;                                             // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDirectoryPath                              SequencePath;                                              // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1629);
		return ptr;
	}



	void STATIC_SetSequencePath(const struct FString& Path);
	struct FString GetSequencePath();
	void STATIC_GetProxies(TArray<struct FString>* OutProxies);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
