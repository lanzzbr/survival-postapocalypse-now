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
// Parameters
//---------------------------------------------------------------------------

// Function Surv_Vip_Card.Surv_Vip_Card_C.PreConstruct
struct USurv_Vip_Card_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Surv_Vip_Card.Surv_Vip_Card_C.Draw
struct USurv_Vip_Card_C_Draw_Params
{
	TEnumAsByte<Vip_enum_EVip_enum>                    Vip;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Surv_Vip_Card.Surv_Vip_Card_C.OnMouseEnter
struct USurv_Vip_Card_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Surv_Vip_Card.Surv_Vip_Card_C.OnMouseLeave
struct USurv_Vip_Card_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Surv_Vip_Card.Surv_Vip_Card_C.ExecuteUbergraph_Surv_Vip_Card
struct USurv_Vip_Card_C_ExecuteUbergraph_Surv_Vip_Card_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
