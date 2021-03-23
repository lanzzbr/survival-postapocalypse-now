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

// Class Slate.ButtonWidgetStyle
// 0x0238 (FullSize[0x0268] - InheritedSize[0x0030])
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FButtonStyle                                ButtonStyle;                                               // 0x0030(0x0238) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(85);
		return ptr;
	}



};

// Class Slate.CheckBoxWidgetStyle
// 0x04F0 (FullSize[0x0520] - InheritedSize[0x0030])
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FCheckBoxStyle                              CheckBoxStyle;                                             // 0x0030(0x04F0) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(86);
		return ptr;
	}



};

// Class Slate.ComboBoxWidgetStyle
// 0x0378 (FullSize[0x03A8] - InheritedSize[0x0030])
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboBoxStyle                              ComboBoxStyle;                                             // 0x0030(0x0378) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(87);
		return ptr;
	}



};

// Class Slate.ComboButtonWidgetStyle
// 0x0340 (FullSize[0x0370] - InheritedSize[0x0030])
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboButtonStyle                           ComboButtonStyle;                                          // 0x0030(0x0340) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(88);
		return ptr;
	}



};

// Class Slate.EditableTextBoxWidgetStyle
// 0x0728 (FullSize[0x0758] - InheritedSize[0x0030])
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                      // 0x0030(0x0728) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(89);
		return ptr;
	}



};

// Class Slate.EditableTextWidgetStyle
// 0x01F0 (FullSize[0x0220] - InheritedSize[0x0030])
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextStyle                          EditableTextStyle;                                         // 0x0030(0x01F0) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(90);
		return ptr;
	}



};

// Class Slate.ProgressWidgetStyle
// 0x0170 (FullSize[0x01A0] - InheritedSize[0x0030])
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FProgressBarStyle                           ProgressBarStyle;                                          // 0x0030(0x0170) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(91);
		return ptr;
	}



};

// Class Slate.ScrollBarWidgetStyle
// 0x0440 (FullSize[0x0470] - InheritedSize[0x0030])
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBarStyle                             ScrollBarStyle;                                            // 0x0030(0x0440) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(92);
		return ptr;
	}



};

// Class Slate.ScrollBoxWidgetStyle
// 0x01E8 (FullSize[0x0218] - InheritedSize[0x0030])
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBoxStyle                             ScrollBoxStyle;                                            // 0x0030(0x01E8) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(93);
		return ptr;
	}



};

// Class Slate.SlateSettings
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class USlateSettings : public UObject
{
public:
	bool                                               bExplicitCanvasChildZOrder;                                // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3FL6[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(94);
		return ptr;
	}



};

// Class Slate.SpinBoxWidgetStyle
// 0x0298 (FullSize[0x02C8] - InheritedSize[0x0030])
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FSpinBoxStyle                               SpinBoxStyle;                                              // 0x0030(0x0298) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(95);
		return ptr;
	}



};

// Class Slate.TextBlockWidgetStyle
// 0x01C8 (FullSize[0x01F8] - InheritedSize[0x0030])
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTextBlockStyle                             TextBlockStyle;                                            // 0x0030(0x01C8) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::GetObjectCasted<UClass>(96);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
