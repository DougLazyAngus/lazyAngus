﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t1011;
// UnityEngine.GUIStyle
struct GUIStyle_t64;
// UnityEngine.RectOffset
struct RectOffset_t525;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t526;
// System.String
struct String_t;

// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUILayoutEntry__ctor_m5215 (GUILayoutEntry_t1011 * __this, float ____minWidth, float ____maxWidth, float ____minHeight, float ____maxHeight, GUIStyle_t64 * ____style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayoutEntry__ctor_m5216 (GUILayoutEntry_t1011 * __this, float ____minWidth, float ____maxWidth, float ____minHeight, float ____maxHeight, GUIStyle_t64 * ____style, GUILayoutOptionU5BU5D_t526* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::.cctor()
extern "C" void GUILayoutEntry__cctor_m5217 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::get_style()
extern "C" GUIStyle_t64 * GUILayoutEntry_get_style_m5218 (GUILayoutEntry_t1011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::set_style(UnityEngine.GUIStyle)
extern "C" void GUILayoutEntry_set_style_m5219 (GUILayoutEntry_t1011 * __this, GUIStyle_t64 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin()
extern "C" RectOffset_t525 * GUILayoutEntry_get_margin_m5220 (GUILayoutEntry_t1011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::CalcWidth()
extern "C" void GUILayoutEntry_CalcWidth_m5221 (GUILayoutEntry_t1011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::CalcHeight()
extern "C" void GUILayoutEntry_CalcHeight_m5222 (GUILayoutEntry_t1011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single)
extern "C" void GUILayoutEntry_SetHorizontal_m5223 (GUILayoutEntry_t1011 * __this, float ___x, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single)
extern "C" void GUILayoutEntry_SetVertical_m5224 (GUILayoutEntry_t1011 * __this, float ___y, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle)
extern "C" void GUILayoutEntry_ApplyStyleSettings_m5225 (GUILayoutEntry_t1011 * __this, GUIStyle_t64 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[])
extern "C" void GUILayoutEntry_ApplyOptions_m5226 (GUILayoutEntry_t1011 * __this, GUILayoutOptionU5BU5D_t526* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayoutEntry::ToString()
extern "C" String_t* GUILayoutEntry_ToString_m5227 (GUILayoutEntry_t1011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;