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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GeometryCache.GeometryCacheMeshData
// 0x0050
struct FGeometryCacheMeshData
{
	unsigned char                                      UnknownData_DHEN[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct GeometryCache.TrackRenderData
// 0x0050
struct FTrackRenderData
{
	unsigned char                                      UnknownData_95SJ[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct GeometryCache.GeometryCacheMeshBatchInfo
// 0x000C
struct FGeometryCacheMeshBatchInfo
{
	unsigned char                                      UnknownData_VBW0[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
