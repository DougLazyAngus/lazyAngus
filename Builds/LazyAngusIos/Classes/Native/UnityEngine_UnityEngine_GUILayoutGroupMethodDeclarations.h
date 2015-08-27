#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t2713;
// UnityEngine.RectOffset
struct RectOffset_t701;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t702;
// UnityEngine.GUIStyle
struct GUIStyle_t107;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t2716;
// System.String
struct String_t;

// System.Void UnityEngine.GUILayoutGroup::.ctor()
extern "C" void GUILayoutGroup__ctor_m8929 (GUILayoutGroup_t2713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin()
extern "C" RectOffset_t701 * GUILayoutGroup_get_margin_m8930 (GUILayoutGroup_t2713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ApplyOptions(UnityEngine.GUILayoutOption[])
extern "C" void GUILayoutGroup_ApplyOptions_m8931 (GUILayoutGroup_t2713 * __this, GUILayoutOptionU5BU5D_t702* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ApplyStyleSettings(UnityEngine.GUIStyle)
extern "C" void GUILayoutGroup_ApplyStyleSettings_m8932 (GUILayoutGroup_t2713 * __this, GUIStyle_t107 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ResetCursor()
extern "C" void GUILayoutGroup_ResetCursor_m8933 (GUILayoutGroup_t2713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutEntry UnityEngine.GUILayoutGroup::GetNext()
extern "C" GUILayoutEntry_t2716 * GUILayoutGroup_GetNext_m8934 (GUILayoutGroup_t2713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::Add(UnityEngine.GUILayoutEntry)
extern "C" void GUILayoutGroup_Add_m8935 (GUILayoutGroup_t2713 * __this, GUILayoutEntry_t2716 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::CalcWidth()
extern "C" void GUILayoutGroup_CalcWidth_m8936 (GUILayoutGroup_t2713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single)
extern "C" void GUILayoutGroup_SetHorizontal_m8937 (GUILayoutGroup_t2713 * __this, float ___x, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::CalcHeight()
extern "C" void GUILayoutGroup_CalcHeight_m8938 (GUILayoutGroup_t2713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single)
extern "C" void GUILayoutGroup_SetVertical_m8939 (GUILayoutGroup_t2713 * __this, float ___y, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayoutGroup::ToString()
extern "C" String_t* GUILayoutGroup_ToString_m8940 (GUILayoutGroup_t2713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
