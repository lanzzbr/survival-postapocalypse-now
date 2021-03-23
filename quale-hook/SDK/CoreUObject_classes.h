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

// Class CoreUObject.Object
// 0x0028
class UObject
{
public:
	static class TUObjectArray*                        GObjects;                                                  // 0x0000(0x0008)
	void*                                              VfTable;                                                   // 0x0000(0x0008) NOT AUTO-GENERATED PROPERTY
	int32_t                                            Flags;                                                     // 0x0008(0x0004) NOT AUTO-GENERATED PROPERTY
	int32_t                                            InternalIndex;                                             // 0x000C(0x0004) NOT AUTO-GENERATED PROPERTY
	class UClass*                                      Class;                                                     // 0x0010(0x0008) NOT AUTO-GENERATED PROPERTY
	FName                                              Name;                                                      // 0x0018(0x0008) NOT AUTO-GENERATED PROPERTY
	class UObject*                                     Outer;                                                     // 0x0020(0x0008) NOT AUTO-GENERATED PROPERTY


	static inline TUObjectArray& GetGlobalObjects()
	{
		return *GObjects;
	}

	std::string GetName() const;

	std::string GetFullName() const;

	template<typename T>
	static T* FindObject(const std::string& name)
	{
		for (int i = 0; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);
	
			if (object == nullptr)
			{
				continue;
			}
	
			if (object->GetFullName() == name)
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	template<typename T>
	static T* FindObject()
	{
		auto v = T::StaticClass();
		for (int i = 0; i < CG::UObject::GetGlobalObjects().Num(); ++i)
		{
			auto object = CG::UObject::GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->IsA(v))
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	template<typename T>
	static std::vector<T*> FindObjects(const std::string& name)
	{
		std::vector<T*> ret;
		for (int i = 0; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->GetFullName() == name)
			{
				ret.push_back(static_cast<T*>(object));
			}
		}
		return ret;
	}

	template<typename T>
	static std::vector<T*> FindObjects()
	{
		std::vector<T*> ret;
		auto v = T::StaticClass();
		for (int i = 0; i < CG::UObject::GetGlobalObjects().Num(); ++i)
		{
			auto object = CG::UObject::GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->IsA(v))
			{
				ret.push_back(static_cast<T*>(object));
			}
		}
		return ret;
	}

	static UClass* FindClass(const std::string& name)
	{
		return FindObject<UClass>(name);
	}

	template<typename T>
	static T* GetObjectCasted(std::size_t index)
	{
		return static_cast<T*>(GetGlobalObjects().GetByIndex(index));
	}

	bool IsA(UClass* cmp) const;

	inline void ProcessEvent(class UFunction* function, void* parms)
	{
		// return;
		GetVFunction<void(*)(UObject*, class UFunction*, void*)>(this, 63)(this, function, parms);
	}

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(1);
		return ptr;
	}



	void STATIC_ExecuteUbergraph(int EntryPoint);
};

// Class CoreUObject.Field
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UField : public UObject
{
public:
	class UField*                                      Next;                                                      // 0x0028(0x0008) NOT AUTO-GENERATED PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(25);
		return ptr;
	}



};

// Class CoreUObject.Property
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UProperty : public UField
{
public:
	unsigned char                                      UnknownData_U2L1[0x40];                                    // 0x0030(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(35);
		return ptr;
	}



};

// Class CoreUObject.ObjectPropertyBase
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UObjectPropertyBase : public UProperty
{
public:
	unsigned char                                      UnknownData_IOCR[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(44);
		return ptr;
	}



};

// Class CoreUObject.ObjectProperty
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UObjectProperty : public UObjectPropertyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(48);
		return ptr;
	}



};

// Class CoreUObject.ClassProperty
// 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData_GN2L[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(49);
		return ptr;
	}



};

// Class CoreUObject.DelegateProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_59PR[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(50);
		return ptr;
	}



};

// Class CoreUObject.NumericProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UNumericProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(46);
		return ptr;
	}



};

// Class CoreUObject.DoubleProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UDoubleProperty : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(51);
		return ptr;
	}



};

// Class CoreUObject.FloatProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UFloatProperty : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(52);
		return ptr;
	}



};

// Class CoreUObject.IntProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UIntProperty : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(53);
		return ptr;
	}



};

// Class CoreUObject.Int16Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UInt16Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(54);
		return ptr;
	}



};

// Class CoreUObject.Int64Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UInt64Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(55);
		return ptr;
	}



};

// Class CoreUObject.Int8Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UInt8Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(56);
		return ptr;
	}



};

// Class CoreUObject.InterfaceProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UInterfaceProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_5LHR[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(57);
		return ptr;
	}



};

// Class CoreUObject.LazyObjectProperty
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class ULazyObjectProperty : public UObjectPropertyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(58);
		return ptr;
	}



};

// Class CoreUObject.MapProperty
// 0x0038 (FullSize[0x00A8] - InheritedSize[0x0070])
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_9C0C[0x38];                                    // 0x0070(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(59);
		return ptr;
	}



};

// Class CoreUObject.MulticastDelegateProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UMulticastDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_QZG4[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(60);
		return ptr;
	}



};

// Class CoreUObject.NameProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UNameProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(61);
		return ptr;
	}



};

// Class CoreUObject.SetProperty
// 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
class USetProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_OPZJ[0x28];                                    // 0x0070(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(62);
		return ptr;
	}



};

// Class CoreUObject.SoftObjectProperty
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class USoftObjectProperty : public UObjectPropertyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(63);
		return ptr;
	}



};

// Class CoreUObject.SoftClassProperty
// 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
class USoftClassProperty : public USoftObjectProperty
{
public:
	unsigned char                                      UnknownData_U42G[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(64);
		return ptr;
	}



};

// Class CoreUObject.StrProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UStrProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(65);
		return ptr;
	}



};

// Class CoreUObject.StructProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UStructProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_YABQ[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(66);
		return ptr;
	}



};

// Class CoreUObject.UInt16Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UUInt16Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(67);
		return ptr;
	}



};

// Class CoreUObject.UInt32Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UUInt32Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(68);
		return ptr;
	}



};

// Class CoreUObject.UInt64Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UUInt64Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(69);
		return ptr;
	}



};

// Class CoreUObject.WeakObjectProperty
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UWeakObjectProperty : public UObjectPropertyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(70);
		return ptr;
	}



};

// Class CoreUObject.TextProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UTextProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(71);
		return ptr;
	}



};

// Class CoreUObject.GCObjectReferencer
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UGCObjectReferencer : public UObject
{
public:
	unsigned char                                      UnknownData_DLBJ[0x38];                                    // 0x0028(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(23);
		return ptr;
	}



};

// Class CoreUObject.TextBuffer
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData_4PWE[0x28];                                    // 0x0028(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(24);
		return ptr;
	}



};

// Class CoreUObject.Struct
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UStruct : public UField
{
public:
	class UStruct*                                     SuperField;                                                // 0x0030(0x0008) NOT AUTO-GENERATED PROPERTY
	class UField*                                      Children;                                                  // 0x0038(0x0008) NOT AUTO-GENERATED PROPERTY
	int32_t                                            PropertySize;                                              // 0x0040(0x0004) NOT AUTO-GENERATED PROPERTY
	int32_t                                            MinAlignment;                                              // 0x0044(0x0004) NOT AUTO-GENERATED PROPERTY
	TArray<uint8_t>									   Script;                                                    // 0x0048(0x0010) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   PropertyLink;                                              // 0x0058(0x0008) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   RefLink;                                                   // 0x0060(0x0008) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   DestructorLink;                                            // 0x0068(0x0008) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   PostConstructorLink;                                       // 0x0070(0x0008) NOT AUTO-GENERATED PROPERTY
	TArray<uint8_t>									   ScriptObjectReferences;                                    // 0x0078(0x0010) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad_ZQHVW83UX3[0x08];                                      // 0x0088(0x0008) NOT AUTO-GENERATED PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(26);
		return ptr;
	}



};

// Class CoreUObject.ScriptStruct
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData_DKOL[0x10];                                    // 0x0088(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(27);
		return ptr;
	}



};

// Class CoreUObject.Package
// 0x0130 (FullSize[0x0158] - InheritedSize[0x0028])
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData_SM4B[0x130];                                   // 0x0028(0x0130) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(28);
		return ptr;
	}



};

// Class CoreUObject.Function
// 0x0030 (FullSize[0x00B8] - InheritedSize[0x0088])
class UFunction : public UStruct
{
public:
	int32_t                                            FunctionFlags;                                             // 0x0090(0x0004) NOT AUTO-GENERATED PROPERTY
	int8_t                                             NumParms;                                                  // 0x0094(0x0001) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad_ZQ381T7EHI[0x01];                                      // 0x0095(0x0001) NOT AUTO-GENERATED PROPERTY
	int16_t                                            ParmsSize;                                                 // 0x0096(0x0002) NOT AUTO-GENERATED PROPERTY
	int16_t                                            ReturnValueOffset;                                         // 0x0098(0x0002) NOT AUTO-GENERATED PROPERTY
	int16_t                                            RPCId;                                                     // 0x009A(0x0002) NOT AUTO-GENERATED PROPERTY
	int16_t                                            RPCResponseId;                                             // 0x009C(0x0002) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   FirstPropertyToInit;                                       // 0x009E(0x0008) NOT AUTO-GENERATED PROPERTY
	class UFunction*                                   EventGraphFunction;                                        // 0x00A6(0x0008) NOT AUTO-GENERATED PROPERTY
	int32_t                                            EventGraphCallOffset;                                      // 0x00AE(0x0004) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad_3X8C1JLGP6[0x06];                                      // 0x00B2(0x0006) NOT AUTO-GENERATED PROPERTY
	void*                                              Func;                                                      // 0x00B8(0x0008) NOT AUTO-GENERATED PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(30);
		return ptr;
	}



};

// Class CoreUObject.DelegateFunction
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UDelegateFunction : public UFunction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(31);
		return ptr;
	}



};

// Class CoreUObject.Class
// 0x0170 (FullSize[0x01F8] - InheritedSize[0x0088])
class UClass : public UStruct
{
public:
	unsigned char                                      UnknownData_HTIO[0x170];                                   // 0x0088(0x0170) MISSED OFFSET (PADDING)


template<typename T>
	inline T* CreateDefaultObject()
	{
		return static_cast<T*>(CreateDefaultObject());
	}

	inline UObject* CreateDefaultObject()
	{
		// return nullptr;
		GetVFunction<UObject*(*)(UClass*)>(this, 99)(this);
	}

	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(29);
		return ptr;
	}



};

// Class CoreUObject.DynamicClass
// 0x0068 (FullSize[0x0260] - InheritedSize[0x01F8])
class UDynamicClass : public UClass
{
public:
	unsigned char                                      UnknownData_78PU[0x68];                                    // 0x01F8(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(32);
		return ptr;
	}



};

// Class CoreUObject.PackageMap
// 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData_NJ6O[0xB8];                                    // 0x0028(0x00B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(33);
		return ptr;
	}



};

// Class CoreUObject.Enum
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData_ARJL[0x30];                                    // 0x0030(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(34);
		return ptr;
	}



};

// Class CoreUObject.EnumProperty
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UEnumProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_JMSU[0x10];                                    // 0x0070(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(36);
		return ptr;
	}



};

// Class CoreUObject.Interface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UInterface : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(37);
		return ptr;
	}



};

// Class CoreUObject.LinkerPlaceholderClass
// 0x01A0 (FullSize[0x0398] - InheritedSize[0x01F8])
class ULinkerPlaceholderClass : public UClass
{
public:
	unsigned char                                      UnknownData_CXMH[0x1A0];                                   // 0x01F8(0x01A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(38);
		return ptr;
	}



};

// Class CoreUObject.LinkerPlaceholderExportObject
// 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
class ULinkerPlaceholderExportObject : public UObject
{
public:
	unsigned char                                      UnknownData_AHNU[0xB0];                                    // 0x0028(0x00B0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(39);
		return ptr;
	}



};

// Class CoreUObject.LinkerPlaceholderFunction
// 0x01A0 (FullSize[0x0258] - InheritedSize[0x00B8])
class ULinkerPlaceholderFunction : public UFunction
{
public:
	unsigned char                                      UnknownData_702A[0x1A0];                                   // 0x00B8(0x01A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(40);
		return ptr;
	}



};

// Class CoreUObject.MetaData
// 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData_DE67[0xA0];                                    // 0x0028(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(41);
		return ptr;
	}



};

// Class CoreUObject.ObjectRedirector
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData_B5SI[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(42);
		return ptr;
	}



};

// Class CoreUObject.ArrayProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_EYBY[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(43);
		return ptr;
	}



};

// Class CoreUObject.BoolProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UBoolProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_ZAOI[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(45);
		return ptr;
	}



};

// Class CoreUObject.ByteProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UByteProperty : public UNumericProperty
{
public:
	unsigned char                                      UnknownData_JBOH[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(47);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
