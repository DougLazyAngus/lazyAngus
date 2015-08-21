#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIGridSizer
struct GUIGridSizer_t2716;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t2901;
// UnityEngine.GUIStyle
struct GUIStyle_t107;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t699;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.GUIGridSizer::.ctor(UnityEngine.GUIContent[],System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUIGridSizer__ctor_m8913 (GUIGridSizer_t2716 * __this, GUIContentU5BU5D_t2901* ___contents, int32_t ____xCount, GUIStyle_t107 * ___buttonStyle, GUILayoutOptionU5BU5D_t699* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUIGridSizer::GetRect(UnityEngine.GUIContent[],System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" Rect_t692  GUIGridSizer_GetRect_m8914 (Object_t * __this /* static, unused */, GUIContentU5BU5D_t2901* ___contents, int32_t ___xCount, GUIStyle_t107 * ___style, GUILayoutOptionU5BU5D_t699* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIGridSizer::get_rows()
extern "C" int32_t GUIGridSizer_get_rows_m8915 (GUIGridSizer_t2716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
