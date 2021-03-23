// Name: ANUSGAME, Version: 4.18

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function VaRestPlugin.VaRestJsonObject.SetStringField
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 StringValue                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestJsonObject::STATIC_SetStringField(const struct FString& FieldName, const struct FString& StringValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27934);

	UVaRestJsonObject_SetStringField_Params params;
	params.FieldName = FieldName;
	params.StringValue = StringValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestJsonObject.SetStringArrayField
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         StringArray                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UVaRestJsonObject::STATIC_SetStringArrayField(const struct FString& FieldName, TArray<struct FString> StringArray)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27930);

	UVaRestJsonObject_SetStringArrayField_Params params;
	params.FieldName = FieldName;
	params.StringArray = StringArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestJsonObject.SetObjectField
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonObject*       JsonObject                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestJsonObject::STATIC_SetObjectField(const struct FString& FieldName, class UVaRestJsonObject* JsonObject)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27927);

	UVaRestJsonObject_SetObjectField_Params params;
	params.FieldName = FieldName;
	params.JsonObject = JsonObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestJsonObject.SetObjectArrayField
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UVaRestJsonObject*> ObjectArray                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UVaRestJsonObject::STATIC_SetObjectArrayField(const struct FString& FieldName, TArray<class UVaRestJsonObject*> ObjectArray)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27923);

	UVaRestJsonObject_SetObjectArrayField_Params params;
	params.FieldName = FieldName;
	params.ObjectArray = ObjectArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestJsonObject.SetNumberField
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Number                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestJsonObject::STATIC_SetNumberField(const struct FString& FieldName, float Number)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27920);

	UVaRestJsonObject_SetNumberField_Params params;
	params.FieldName = FieldName;
	params.Number = Number;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestJsonObject.SetNumberArrayField
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  NumberArray                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UVaRestJsonObject::STATIC_SetNumberArrayField(const struct FString& FieldName, TArray<float> NumberArray)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27916);

	UVaRestJsonObject_SetNumberArrayField_Params params;
	params.FieldName = FieldName;
	params.NumberArray = NumberArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestJsonObject.SetIntegerField
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Number                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestJsonObject::STATIC_SetIntegerField(const struct FString& FieldName, int Number)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27913);

	UVaRestJsonObject_SetIntegerField_Params params;
	params.FieldName = FieldName;
	params.Number = Number;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestJsonObject.SetField
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonValue*        JsonValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestJsonObject::STATIC_SetField(const struct FString& FieldName, class UVaRestJsonValue* JsonValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27910);

	UVaRestJsonObject_SetField_Params params;
	params.FieldName = FieldName;
	params.JsonValue = JsonValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestJsonObject.SetBoolField
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestJsonObject::STATIC_SetBoolField(const struct FString& FieldName, bool InValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27907);

	UVaRestJsonObject_SetBoolField_Params params;
	params.FieldName = FieldName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestJsonObject.SetBoolArrayField
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<bool>                   BoolArray                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UVaRestJsonObject::STATIC_SetBoolArrayField(const struct FString& FieldName, TArray<bool> BoolArray)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27903);

	UVaRestJsonObject_SetBoolArrayField_Params params;
	params.FieldName = FieldName;
	params.BoolArray = BoolArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestJsonObject.SetArrayField
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UVaRestJsonValue*> inArray                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UVaRestJsonObject::STATIC_SetArrayField(const struct FString& FieldName, TArray<class UVaRestJsonValue*> inArray)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27899);

	UVaRestJsonObject_SetArrayField_Params params;
	params.FieldName = FieldName;
	params.inArray = inArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestJsonObject.Reset
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UVaRestJsonObject::STATIC_Reset()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27898);

	UVaRestJsonObject_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestJsonObject.RemoveField
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestJsonObject::STATIC_RemoveField(const struct FString& FieldName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27896);

	UVaRestJsonObject_RemoveField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestJsonObject.MergeJsonObject
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestJsonObject*       InJsonObject                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Overwrite                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestJsonObject::STATIC_MergeJsonObject(class UVaRestJsonObject* InJsonObject, bool Overwrite)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27893);

	UVaRestJsonObject_MergeJsonObject_Params params;
	params.InJsonObject = InJsonObject;
	params.Overwrite = Overwrite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestJsonObject.HasField
// ()
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVaRestJsonObject::HasField(const struct FString& FieldName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27890);

	UVaRestJsonObject_HasField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetStringField
// ()
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestJsonObject::GetStringField(const struct FString& FieldName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27887);

	UVaRestJsonObject_GetStringField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetStringArrayField
// ()
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UVaRestJsonObject::GetStringArrayField(const struct FString& FieldName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27883);

	UVaRestJsonObject_GetStringArrayField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetObjectField
// ()
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonObject*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonObject* UVaRestJsonObject::GetObjectField(const struct FString& FieldName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27880);

	UVaRestJsonObject_GetObjectField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetObjectArrayField
// ()
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UVaRestJsonObject*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UVaRestJsonObject*> UVaRestJsonObject::GetObjectArrayField(const struct FString& FieldName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27876);

	UVaRestJsonObject_GetObjectArrayField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetNumberField
// ()
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UVaRestJsonObject::GetNumberField(const struct FString& FieldName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27873);

	UVaRestJsonObject_GetNumberField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetNumberArrayField
// ()
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<float> UVaRestJsonObject::GetNumberArrayField(const struct FString& FieldName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27869);

	UVaRestJsonObject_GetNumberArrayField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetIntegerField
// ()
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UVaRestJsonObject::GetIntegerField(const struct FString& FieldName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27866);

	UVaRestJsonObject_GetIntegerField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetFieldNames
// ()
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UVaRestJsonObject::GetFieldNames()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27863);

	UVaRestJsonObject_GetFieldNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetField
// ()
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonValue*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonValue* UVaRestJsonObject::GetField(const struct FString& FieldName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27860);

	UVaRestJsonObject_GetField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetBoolField
// ()
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVaRestJsonObject::GetBoolField(const struct FString& FieldName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27857);

	UVaRestJsonObject_GetBoolField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetBoolArrayField
// ()
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<bool>                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<bool> UVaRestJsonObject::GetBoolArrayField(const struct FString& FieldName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27853);

	UVaRestJsonObject_GetBoolArrayField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetArrayField
// ()
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UVaRestJsonValue*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UVaRestJsonValue*> UVaRestJsonObject::GetArrayField(const struct FString& FieldName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27849);

	UVaRestJsonObject_GetArrayField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.EncodeJsonToSingleString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestJsonObject::EncodeJsonToSingleString()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27847);

	UVaRestJsonObject_EncodeJsonToSingleString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.EncodeJson
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestJsonObject::EncodeJson()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27845);

	UVaRestJsonObject_EncodeJson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.DecodeJson
// ()
// Parameters:
// struct FString                 JsonString                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVaRestJsonObject::DecodeJson(const struct FString& JsonString)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27842);

	UVaRestJsonObject_DecodeJson_Params params;
	params.JsonString = JsonString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.ConstructJsonObject
// (BlueprintCosmetic)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonObject*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonObject* UVaRestJsonObject::ConstructJsonObject(class UObject* WorldContextObject)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27839);

	UVaRestJsonObject_ConstructJsonObject_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.IsNull
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVaRestJsonValue::IsNull()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27973);

	UVaRestJsonValue_IsNull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.GetTypeString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestJsonValue::GetTypeString()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27971);

	UVaRestJsonValue_GetTypeString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.GetType
// ()
// Parameters:
// TEnumAsByte<VaRestPlugin_EVaJson> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<VaRestPlugin_EVaJson> UVaRestJsonValue::GetType()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27969);

	UVaRestJsonValue_GetType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueString
// (BlueprintCosmetic)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 StringValue                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonValue*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonValue* UVaRestJsonValue::ConstructJsonValueString(class UObject* WorldContextObject, const struct FString& StringValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27965);

	UVaRestJsonValue_ConstructJsonValueString_Params params;
	params.WorldContextObject = WorldContextObject;
	params.StringValue = StringValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueObject
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonObject*       JsonObject                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonValue*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonValue* UVaRestJsonValue::ConstructJsonValueObject(class UObject* WorldContextObject, class UVaRestJsonObject* JsonObject)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27961);

	UVaRestJsonValue_ConstructJsonValueObject_Params params;
	params.WorldContextObject = WorldContextObject;
	params.JsonObject = JsonObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueNumber
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Number                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonValue*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonValue* UVaRestJsonValue::ConstructJsonValueNumber(class UObject* WorldContextObject, float Number)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27957);

	UVaRestJsonValue_ConstructJsonValueNumber_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueBool
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonValue*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonValue* UVaRestJsonValue::ConstructJsonValueBool(class UObject* WorldContextObject, bool InValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27953);

	UVaRestJsonValue_ConstructJsonValueBool_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueArray
// (BlueprintCosmetic)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UVaRestJsonValue*> inArray                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UVaRestJsonValue*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonValue* UVaRestJsonValue::ConstructJsonValueArray(class UObject* WorldContextObject, TArray<class UVaRestJsonValue*> inArray)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27948);

	UVaRestJsonValue_ConstructJsonValueArray_Params params;
	params.WorldContextObject = WorldContextObject;
	params.inArray = inArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.AsString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestJsonValue::AsString()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27946);

	UVaRestJsonValue_AsString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.AsObject
// ()
// Parameters:
// class UVaRestJsonObject*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonObject* UVaRestJsonValue::AsObject()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27944);

	UVaRestJsonValue_AsObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.AsNumber
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UVaRestJsonValue::AsNumber()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27942);

	UVaRestJsonValue_AsNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.AsBool
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVaRestJsonValue::AsBool()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27940);

	UVaRestJsonValue_AsBool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.AsArray
// ()
// Parameters:
// TArray<class UVaRestJsonValue*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UVaRestJsonValue*> UVaRestJsonValue::AsArray()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27937);

	UVaRestJsonValue_AsArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestLibrary.PercentEncode
// ()
// Parameters:
// struct FString                 Source                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestLibrary::PercentEncode(const struct FString& Source)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28001);

	UVaRestLibrary_PercentEncode_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestLibrary.CallURL
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 URL                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// VaRestPlugin_ERequestVerb      Verb                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// VaRestPlugin_ERequestContentType ContentType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonObject*       VaRestJson                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UVaRestLibrary::STATIC_CallURL(class UObject* WorldContextObject, const struct FString& URL, VaRestPlugin_ERequestVerb Verb, VaRestPlugin_ERequestContentType ContentType, class UVaRestJsonObject* VaRestJson, const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27992);

	UVaRestLibrary_CallURL_Params params;
	params.WorldContextObject = WorldContextObject;
	params.URL = URL;
	params.Verb = Verb;
	params.ContentType = ContentType;
	params.VaRestJson = VaRestJson;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestLibrary.Base64EncodeData
// ()
// Parameters:
// TArray<unsigned char>          Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 Dest                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVaRestLibrary::Base64EncodeData(TArray<unsigned char> Data, struct FString* Dest)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27987);

	UVaRestLibrary_Base64EncodeData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Dest != nullptr)
		*Dest = params.Dest;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestLibrary.Base64Encode
// ()
// Parameters:
// struct FString                 Source                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestLibrary::Base64Encode(const struct FString& Source)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27984);

	UVaRestLibrary_Base64Encode_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestLibrary.Base64DecodeData
// ()
// Parameters:
// struct FString                 Source                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          Dest                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVaRestLibrary::Base64DecodeData(const struct FString& Source, TArray<unsigned char>* Dest)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27979);

	UVaRestLibrary_Base64DecodeData_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Dest != nullptr)
		*Dest = params.Dest;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestLibrary.Base64Decode
// ()
// Parameters:
// struct FString                 Source                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Dest                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVaRestLibrary::Base64Decode(const struct FString& Source, struct FString* Dest)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(27975);

	UVaRestLibrary_Base64Decode_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Dest != nullptr)
		*Dest = params.Dest;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.SetVerb
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// VaRestPlugin_ERequestVerb      Verb                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::STATIC_SetVerb(VaRestPlugin_ERequestVerb Verb)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28072);

	UVaRestRequestJSON_SetVerb_Params params;
	params.Verb = Verb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.SetURL
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::STATIC_SetURL(const struct FString& URL)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28070);

	UVaRestRequestJSON_SetURL_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.SetStringRequestContent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::STATIC_SetStringRequestContent(const struct FString& Content)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28068);

	UVaRestRequestJSON_SetStringRequestContent_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.SetResponseObject
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestJsonObject*       JsonObject                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::STATIC_SetResponseObject(class UVaRestJsonObject* JsonObject)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28066);

	UVaRestRequestJSON_SetResponseObject_Params params;
	params.JsonObject = JsonObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.SetRequestObject
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UVaRestJsonObject*       JsonObject                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::STATIC_SetRequestObject(class UVaRestJsonObject* JsonObject)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28064);

	UVaRestRequestJSON_SetRequestObject_Params params;
	params.JsonObject = JsonObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.SetHeader
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 HeaderName                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 HeaderValue                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::STATIC_SetHeader(const struct FString& HeaderName, const struct FString& HeaderValue)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28061);

	UVaRestRequestJSON_SetHeader_Params params;
	params.HeaderName = HeaderName;
	params.HeaderValue = HeaderValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.SetCustomVerb
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 Verb                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::STATIC_SetCustomVerb(const struct FString& Verb)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28059);

	UVaRestRequestJSON_SetCustomVerb_Params params;
	params.Verb = Verb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.SetContentType
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// VaRestPlugin_ERequestContentType ContentType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::STATIC_SetContentType(VaRestPlugin_ERequestContentType ContentType)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28056);

	UVaRestRequestJSON_SetContentType_Params params;
	params.ContentType = ContentType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.SetBinaryRequestContent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::STATIC_SetBinaryRequestContent(TArray<unsigned char> Content)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28053);

	UVaRestRequestJSON_SetBinaryRequestContent_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.SetBinaryContentType
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 ContentType                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::STATIC_SetBinaryContentType(const struct FString& ContentType)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28051);

	UVaRestRequestJSON_SetBinaryContentType_Params params;
	params.ContentType = ContentType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.ResetResponseData
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UVaRestRequestJSON::STATIC_ResetResponseData()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28050);

	UVaRestRequestJSON_ResetResponseData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.ResetRequestData
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UVaRestRequestJSON::STATIC_ResetRequestData()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28049);

	UVaRestRequestJSON_ResetRequestData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.ResetData
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UVaRestRequestJSON::STATIC_ResetData()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28048);

	UVaRestRequestJSON_ResetData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.RemoveTag
// (BlueprintCosmetic)
// Parameters:
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UVaRestRequestJSON::RemoveTag(const struct FName& Tag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28045);

	UVaRestRequestJSON_RemoveTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.ProcessURL
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::STATIC_ProcessURL(const struct FString& URL)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28043);

	UVaRestRequestJSON_ProcessURL_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.HasTag
// (BlueprintCosmetic)
// Parameters:
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVaRestRequestJSON::HasTag(const struct FName& Tag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28040);

	UVaRestRequestJSON_HasTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.GetUrl
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestRequestJSON::GetUrl()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28038);

	UVaRestRequestJSON_GetUrl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.GetStatus
// ()
// Parameters:
// VaRestPlugin_ERequestStatus    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
VaRestPlugin_ERequestStatus UVaRestRequestJSON::GetStatus()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28035);

	UVaRestRequestJSON_GetStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.GetResponseObject
// ()
// Parameters:
// class UVaRestJsonObject*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonObject* UVaRestRequestJSON::GetResponseObject()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28033);

	UVaRestRequestJSON_GetResponseObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.GetResponseHeader
// ()
// Parameters:
// struct FString                 HeaderName                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestRequestJSON::GetResponseHeader(const struct FString& HeaderName)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28030);

	UVaRestRequestJSON_GetResponseHeader_Params params;
	params.HeaderName = HeaderName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.GetResponseCode
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UVaRestRequestJSON::GetResponseCode()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28028);

	UVaRestRequestJSON_GetResponseCode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.GetRequestObject
// ()
// Parameters:
// class UVaRestJsonObject*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonObject* UVaRestRequestJSON::GetRequestObject()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28026);

	UVaRestRequestJSON_GetRequestObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.GetAllResponseHeaders
// ()
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UVaRestRequestJSON::GetAllResponseHeaders()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28023);

	UVaRestRequestJSON_GetAllResponseHeaders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.ExecuteProcessRequest
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UVaRestRequestJSON::STATIC_ExecuteProcessRequest()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28022);

	UVaRestRequestJSON_ExecuteProcessRequest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.ConstructRequestExt
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// VaRestPlugin_ERequestVerb      Verb                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// VaRestPlugin_ERequestContentType ContentType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestRequestJSON*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestRequestJSON* UVaRestRequestJSON::ConstructRequestExt(class UObject* WorldContextObject, VaRestPlugin_ERequestVerb Verb, VaRestPlugin_ERequestContentType ContentType)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28015);

	UVaRestRequestJSON_ConstructRequestExt_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Verb = Verb;
	params.ContentType = ContentType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.ConstructRequest
// (BlueprintCosmetic)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestRequestJSON*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestRequestJSON* UVaRestRequestJSON::ConstructRequest(class UObject* WorldContextObject)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28012);

	UVaRestRequestJSON_ConstructRequest_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.Cancel
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
void UVaRestRequestJSON::STATIC_Cancel()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28011);

	UVaRestRequestJSON_Cancel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.ApplyURL
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonObject*       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::STATIC_ApplyURL(const struct FString& URL, class UVaRestJsonObject** Result, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28006);

	UVaRestRequestJSON_ApplyURL_Params params;
	params.URL = URL;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function VaRestPlugin.VaRestRequestJSON.AddTag
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::STATIC_AddTag(const struct FName& Tag)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(28004);

	UVaRestRequestJSON_AddTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
