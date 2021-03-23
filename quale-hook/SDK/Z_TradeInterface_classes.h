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

// BlueprintGeneratedClass Z_TradeInterface.Z_TradeInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UZ_TradeInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(32580);
		return ptr;
	}



	void STATIC_ShowTradeInfo(const struct FZ_TradeStr& TradeStr);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
