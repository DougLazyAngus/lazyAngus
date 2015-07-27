#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t1089;
// UnityEngine.RectOffset
struct RectOffset_t597;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t598;
// UnityEngine.GUIStyle
struct GUIStyle_t67;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t1092;
// System.String
struct String_t;

// System.Void UnityEngine.GUILayoutGroup::.ctor()
extern "C" void GUILayoutGroup__ctor_m5990 (GUILayoutGroup_t1089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin()
extern "C" RectOffset_t597 * GUILayoutGroup_get_margin_m5991 (GUILayoutGroup_t1089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ApplyOptions(UnityEngine.GUILayoutOption[])
extern "C" void GUILayoutGroup_ApplyOptions_m5992 (GUILayoutGroup_t1089 * __this, GUILayoutOptionU5BU5D_t598* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ApplyStyleSettings(UnityEngine.GUIStyle)
extern "C" void GUILayoutGroup_ApplyStyleSettings_m5993 (GUILayoutGroup_t1089 * __this, GUIStyle_t67 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ResetCursor()
extern "C" void GUILayoutGroup_ResetCursor_m5994 (GUILayoutGroup_t1089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutEntry UnityEngine.GUILayoutGroup::GetNext()
extern "C" GUILayoutEntry_t1092 * GUILayoutGroup_GetNext_m5995 (GUILayoutGroup_t1089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::Add(UnityEngine.GUILayoutEntry)
extern "C" void GUILayoutGroup_Add_m5996 (GUILayoutGroup_t1089 * __this, GUILayoutEntry_t1092 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::CalcWidth()
extern "C" void GUILayoutGroup_CalcWidth_m5997 (GUILayoutGroup_t1089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single)
extern "C" void GUILayoutGroup_SetHorizontal_m5998 (GUILayoutGroup_t1089 * __this, float ___x, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::CalcHeight()
extern "C" void GUILayoutGroup_CalcHeight_m5999 (GUILayoutGroup_t1089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single)
extern "C" void GUILayoutGroup_SetVertical_m6000 (GUILayoutGroup_t1089 * __this, float ___y, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayoutGroup::ToString()
extern "C" String_t* GUILayoutGroup_ToString_m6001 (GUILayoutGroup_t1089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
