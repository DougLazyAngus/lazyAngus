﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIGridSizer
struct GUIGridSizer_t1014;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t1200;
// UnityEngine.GUIStyle
struct GUIStyle_t64;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t526;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.GUIGridSizer::.ctor(UnityEngine.GUIContent[],System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUIGridSizer__ctor_m5245 (GUIGridSizer_t1014 * __this, GUIContentU5BU5D_t1200* ___contents, int32_t ____xCount, GUIStyle_t64 * ___buttonStyle, GUILayoutOptionU5BU5D_t526* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUIGridSizer::GetRect(UnityEngine.GUIContent[],System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" Rect_t520  GUIGridSizer_GetRect_m5246 (Object_t * __this /* static, unused */, GUIContentU5BU5D_t1200* ___contents, int32_t ___xCount, GUIStyle_t64 * ___style, GUILayoutOptionU5BU5D_t526* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIGridSizer::get_rows()
extern "C" int32_t GUIGridSizer_get_rows_m5247 (GUIGridSizer_t1014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;