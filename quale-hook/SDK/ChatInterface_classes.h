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

// BlueprintGeneratedClass ChatInterface.ChatInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UChatInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(43679);
		return ptr;
	}



	void STATIC_OpenChat();
	void STATIC_ReciveChatMessage(const struct FGUI_ChatMessageStructure& ChatStruct);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
