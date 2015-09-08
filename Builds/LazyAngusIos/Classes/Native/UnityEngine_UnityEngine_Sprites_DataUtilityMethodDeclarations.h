#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Sprites.DataUtility
struct DataUtility_t2764;
// UnityEngine.Sprite
struct Sprite_t512;
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetInnerUV(UnityEngine.Sprite)
extern "C" Vector4_t1063  DataUtility_GetInnerUV_m6140 (Object_t * __this /* static, unused */, Sprite_t512 * ___sprite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetOuterUV(UnityEngine.Sprite)
extern "C" Vector4_t1063  DataUtility_GetOuterUV_m6139 (Object_t * __this /* static, unused */, Sprite_t512 * ___sprite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetPadding(UnityEngine.Sprite)
extern "C" Vector4_t1063  DataUtility_GetPadding_m6133 (Object_t * __this /* static, unused */, Sprite_t512 * ___sprite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Sprites.DataUtility::GetMinSize(UnityEngine.Sprite)
extern "C" Vector2_t110  DataUtility_GetMinSize_m6150 (Object_t * __this /* static, unused */, Sprite_t512 * ___sprite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Sprites.DataUtility::Internal_GetMinSize(UnityEngine.Sprite,UnityEngine.Vector2&)
extern "C" void DataUtility_Internal_GetMinSize_m9449 (Object_t * __this /* static, unused */, Sprite_t512 * ___sprite, Vector2_t110 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
