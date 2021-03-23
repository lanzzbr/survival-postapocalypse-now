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

// BlueprintGeneratedClass Cv4_DataBaseUpdateandGet.Cv4_DataBaseUpdateAndGet_C
// 0x0280 (FullSize[0x0370] - InheritedSize[0x00F0])
class UCv4_DataBaseUpdateAndGet_C : public UActorComponent
{
public:
	struct Fsurv_2019_FieldsStructure                  LastStructure;                                             // 0x00F0(0x0198) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               isAdmin;                                                   // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               isBan;                                                     // 0x0289(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7Q3A[0x6];                                     // 0x028A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNewDB_Classical                            Classical_Structure;                                       // 0x0290(0x00D0) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnAddScore;                                                // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(35872);
		return ptr;
	}



	void STATIC_CheckIsValidClassicalState(const struct FString& OwnerID);
	void STATIC_ReturnClassicalState(const struct FNewDB_Classical& Classical_Structure);
	void STATIC_UpdateClassicalState(const struct FString& OwnerID, bool Clear_Inventory, bool AddScores);
	void STATIC_WriteMoneyToBase(int Money);
	void STATIC_CheckIsValidSaveState(const struct FString& OwnerID);
	void STATIC_UpdateSaveState(const struct FString& OwnerID, bool UpdateAndClear, bool Banned);
	void STATIC_ReturnSaveState(const struct Fsurv_2019_FieldsStructure& LastStructure);
	void STATIC_OnAddScore__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
