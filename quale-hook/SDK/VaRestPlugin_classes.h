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

// Class VaRestPlugin.VaRestJsonObject
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UVaRestJsonObject : public UObject
{
public:
	unsigned char                                      UnknownData_BSZE[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1513);
		return ptr;
	}



	void STATIC_SetStringField(const struct FString& FieldName, const struct FString& StringValue);
	void STATIC_SetStringArrayField(const struct FString& FieldName, TArray<struct FString> StringArray);
	void STATIC_SetObjectField(const struct FString& FieldName, class UVaRestJsonObject* JsonObject);
	void STATIC_SetObjectArrayField(const struct FString& FieldName, TArray<class UVaRestJsonObject*> ObjectArray);
	void STATIC_SetNumberField(const struct FString& FieldName, float Number);
	void STATIC_SetNumberArrayField(const struct FString& FieldName, TArray<float> NumberArray);
	void STATIC_SetIntegerField(const struct FString& FieldName, int Number);
	void STATIC_SetField(const struct FString& FieldName, class UVaRestJsonValue* JsonValue);
	void STATIC_SetBoolField(const struct FString& FieldName, bool InValue);
	void STATIC_SetBoolArrayField(const struct FString& FieldName, TArray<bool> BoolArray);
	void STATIC_SetArrayField(const struct FString& FieldName, TArray<class UVaRestJsonValue*> inArray);
	void STATIC_Reset();
	void STATIC_RemoveField(const struct FString& FieldName);
	void STATIC_MergeJsonObject(class UVaRestJsonObject* InJsonObject, bool Overwrite);
	bool HasField(const struct FString& FieldName);
	struct FString GetStringField(const struct FString& FieldName);
	TArray<struct FString> GetStringArrayField(const struct FString& FieldName);
	class UVaRestJsonObject* GetObjectField(const struct FString& FieldName);
	TArray<class UVaRestJsonObject*> GetObjectArrayField(const struct FString& FieldName);
	float GetNumberField(const struct FString& FieldName);
	TArray<float> GetNumberArrayField(const struct FString& FieldName);
	int GetIntegerField(const struct FString& FieldName);
	TArray<struct FString> GetFieldNames();
	class UVaRestJsonValue* GetField(const struct FString& FieldName);
	bool GetBoolField(const struct FString& FieldName);
	TArray<bool> GetBoolArrayField(const struct FString& FieldName);
	TArray<class UVaRestJsonValue*> GetArrayField(const struct FString& FieldName);
	struct FString EncodeJsonToSingleString();
	struct FString EncodeJson();
	bool DecodeJson(const struct FString& JsonString);
	class UVaRestJsonObject* ConstructJsonObject(class UObject* WorldContextObject);
};

// Class VaRestPlugin.VaRestJsonValue
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UVaRestJsonValue : public UObject
{
public:
	unsigned char                                      UnknownData_C49R[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1514);
		return ptr;
	}



	bool IsNull();
	struct FString GetTypeString();
	TEnumAsByte<VaRestPlugin_EVaJson> GetType();
	class UVaRestJsonValue* ConstructJsonValueString(class UObject* WorldContextObject, const struct FString& StringValue);
	class UVaRestJsonValue* ConstructJsonValueObject(class UObject* WorldContextObject, class UVaRestJsonObject* JsonObject);
	class UVaRestJsonValue* ConstructJsonValueNumber(class UObject* WorldContextObject, float Number);
	class UVaRestJsonValue* ConstructJsonValueBool(class UObject* WorldContextObject, bool InValue);
	class UVaRestJsonValue* ConstructJsonValueArray(class UObject* WorldContextObject, TArray<class UVaRestJsonValue*> inArray);
	struct FString AsString();
	class UVaRestJsonObject* AsObject();
	float AsNumber();
	bool AsBool();
	TArray<class UVaRestJsonValue*> AsArray();
};

// Class VaRestPlugin.VaRestLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVaRestLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1515);
		return ptr;
	}



	struct FString PercentEncode(const struct FString& Source);
	void STATIC_CallURL(class UObject* WorldContextObject, const struct FString& URL, VaRestPlugin_ERequestVerb Verb, VaRestPlugin_ERequestContentType ContentType, class UVaRestJsonObject* VaRestJson, const struct FScriptDelegate& Callback);
	bool Base64EncodeData(TArray<unsigned char> Data, struct FString* Dest);
	struct FString Base64Encode(const struct FString& Source);
	bool Base64DecodeData(const struct FString& Source, TArray<unsigned char>* Dest);
	bool Base64Decode(const struct FString& Source, struct FString* Dest);
};

// Class VaRestPlugin.VaRestRequestJSON
// 0x0248 (FullSize[0x0270] - InheritedSize[0x0028])
class UVaRestRequestJSON : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnRequestComplete;                                         // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRequestFail;                                             // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3EOE[0xF8];                                    // 0x0048(0x00F8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ResponseContent;                                           // 0x0140(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsValidJsonResponse;                                      // 0x0150(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7ZKO[0xF];                                     // 0x0151(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UVaRestJsonObject*                           RequestJsonObj;                                            // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NMO8[0x30];                                    // 0x0168(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UVaRestJsonObject*                           ResponseJsonObj;                                           // 0x0198(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OLMG[0xD0];                                    // 0x01A0(0x00D0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1516);
		return ptr;
	}



	void STATIC_SetVerb(VaRestPlugin_ERequestVerb Verb);
	void STATIC_SetURL(const struct FString& URL);
	void STATIC_SetStringRequestContent(const struct FString& Content);
	void STATIC_SetResponseObject(class UVaRestJsonObject* JsonObject);
	void STATIC_SetRequestObject(class UVaRestJsonObject* JsonObject);
	void STATIC_SetHeader(const struct FString& HeaderName, const struct FString& HeaderValue);
	void STATIC_SetCustomVerb(const struct FString& Verb);
	void STATIC_SetContentType(VaRestPlugin_ERequestContentType ContentType);
	void STATIC_SetBinaryRequestContent(TArray<unsigned char> Content);
	void STATIC_SetBinaryContentType(const struct FString& ContentType);
	void STATIC_ResetResponseData();
	void STATIC_ResetRequestData();
	void STATIC_ResetData();
	int RemoveTag(const struct FName& Tag);
	void STATIC_ProcessURL(const struct FString& URL);
	bool HasTag(const struct FName& Tag);
	struct FString GetUrl();
	VaRestPlugin_ERequestStatus GetStatus();
	class UVaRestJsonObject* GetResponseObject();
	struct FString GetResponseHeader(const struct FString& HeaderName);
	int GetResponseCode();
	class UVaRestJsonObject* GetRequestObject();
	TArray<struct FString> GetAllResponseHeaders();
	void STATIC_ExecuteProcessRequest();
	class UVaRestRequestJSON* ConstructRequestExt(class UObject* WorldContextObject, VaRestPlugin_ERequestVerb Verb, VaRestPlugin_ERequestContentType ContentType);
	class UVaRestRequestJSON* ConstructRequest(class UObject* WorldContextObject);
	void STATIC_Cancel();
	void STATIC_ApplyURL(const struct FString& URL, class UVaRestJsonObject** Result, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void STATIC_AddTag(const struct FName& Tag);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
