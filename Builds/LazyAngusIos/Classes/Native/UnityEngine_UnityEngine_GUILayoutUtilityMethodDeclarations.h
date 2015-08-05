#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayoutUtility
struct GUILayoutUtility_t656;
// UnityEngine.GUIStyle
struct GUIStyle_t107;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t2665;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t653;
// System.String
struct String_t;
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t2664;
// System.Type
struct Type_t;
// UnityEngine.GUIContent
struct GUIContent_t735;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.GUILayoutUtility::.cctor()
extern "C" void GUILayoutUtility__cctor_m8631 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
extern "C" LayoutCache_t2665 * GUILayoutUtility_SelectIDList_m8632 (Object_t * __this /* static, unused */, int32_t ___instanceID, bool ___isWindow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
extern "C" void GUILayoutUtility_Begin_m8633 (Object_t * __this /* static, unused */, int32_t ___instanceID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayoutUtility_BeginWindow_m8634 (Object_t * __this /* static, unused */, int32_t ___windowID, GUIStyle_t107 * ___style, GUILayoutOptionU5BU5D_t653* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::EndGroup(System.String)
extern "C" void GUILayoutUtility_EndGroup_m8635 (Object_t * __this /* static, unused */, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Layout()
extern "C" void GUILayoutUtility_Layout_m8636 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
extern "C" void GUILayoutUtility_LayoutFromEditorWindow_m8637 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
extern "C" void GUILayoutUtility_LayoutFreeGroup_m8638 (Object_t * __this /* static, unused */, GUILayoutGroup_t2664 * ___toplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
extern "C" void GUILayoutUtility_LayoutSingleGroup_m8639 (Object_t * __this /* static, unused */, GUILayoutGroup_t2664 * ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
extern "C" Rect_t650  GUILayoutUtility_Internal_GetWindowRect_m8640 (Object_t * __this /* static, unused */, int32_t ___windowID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
extern "C" void GUILayoutUtility_Internal_MoveWindow_m8641 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t650  ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)
extern "C" void GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m8642 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t650 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::CreateGUILayoutGroupInstanceOfType(System.Type)
extern "C" GUILayoutGroup_t2664 * GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m8643 (Object_t * __this /* static, unused */, Type_t * ___LayoutType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::BeginLayoutGroup(UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[],System.Type)
extern "C" GUILayoutGroup_t2664 * GUILayoutUtility_BeginLayoutGroup_m8644 (Object_t * __this /* static, unused */, GUIStyle_t107 * ___style, GUILayoutOptionU5BU5D_t653* ___options, Type_t * ___LayoutType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::EndLayoutGroup()
extern "C" void GUILayoutUtility_EndLayoutGroup_m8645 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetRect(UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" Rect_t650  GUILayoutUtility_GetRect_m3886 (Object_t * __this /* static, unused */, GUIContent_t735 * ___content, GUIStyle_t107 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetRect(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" Rect_t650  GUILayoutUtility_GetRect_m8646 (Object_t * __this /* static, unused */, GUIContent_t735 * ___content, GUIStyle_t107 * ___style, GUILayoutOptionU5BU5D_t653* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::DoGetRect(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" Rect_t650  GUILayoutUtility_DoGetRect_m8647 (Object_t * __this /* static, unused */, GUIContent_t735 * ___content, GUIStyle_t107 * ___style, GUILayoutOptionU5BU5D_t653* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetRect(System.Single,System.Single)
extern "C" Rect_t650  GUILayoutUtility_GetRect_m3451 (Object_t * __this /* static, unused */, float ___width, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetRect(System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" Rect_t650  GUILayoutUtility_GetRect_m8648 (Object_t * __this /* static, unused */, float ___width, float ___height, GUIStyle_t107 * ___style, GUILayoutOptionU5BU5D_t653* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::DoGetRect(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" Rect_t650  GUILayoutUtility_DoGetRect_m8649 (Object_t * __this /* static, unused */, float ___minWidth, float ___maxWidth, float ___minHeight, float ___maxHeight, GUIStyle_t107 * ___style, GUILayoutOptionU5BU5D_t653* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::get_spaceStyle()
extern "C" GUIStyle_t107 * GUILayoutUtility_get_spaceStyle_m8650 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
