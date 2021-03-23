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

// AnimBlueprintGeneratedClass VampireDeathAnimBP.VampireDeathAnimBP_C
// 0x00C8 (FullSize[0x0480] - InheritedSize[0x03B8])
class UVampireDeathAnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_ZZUQ[0x8];                                     // 0x03B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D9A309374AEE775D8B1DB5B04A345814;       // 0x03C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C1C73C8F4B45F697D0B769A583FBE9B6; // 0x0410(0x0070)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(91397);
		return ptr;
	}



	void STATIC_ExecuteUbergraph_VampireDeathAnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
