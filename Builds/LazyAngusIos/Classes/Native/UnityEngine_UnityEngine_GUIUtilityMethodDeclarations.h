#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIUtility
struct GUIUtility_t2671;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// UnityEngine.GUISkin
struct GUISkin_t730;
// System.Exception
struct Exception_t57;
// UnityEngine.FocusType
#include "UnityEngine_UnityEngine_FocusType.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.GUIUtility::.cctor()
extern "C" void GUIUtility__cctor_m8660 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::GetControlID(UnityEngine.FocusType)
extern "C" int32_t GUIUtility_GetControlID_m8661 (Object_t * __this /* static, unused */, int32_t ___focus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::GetControlID(System.Int32,UnityEngine.FocusType)
extern "C" int32_t GUIUtility_GetControlID_m8662 (Object_t * __this /* static, unused */, int32_t ___hint, int32_t ___focus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::GetControlID(UnityEngine.FocusType,UnityEngine.Rect)
extern "C" int32_t GUIUtility_GetControlID_m8663 (Object_t * __this /* static, unused */, int32_t ___focus, Rect_t647  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::GetControlID(System.Int32,UnityEngine.FocusType,UnityEngine.Rect)
extern "C" int32_t GUIUtility_GetControlID_m8664 (Object_t * __this /* static, unused */, int32_t ___hint, int32_t ___focus, Rect_t647  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::Internal_GetNextControlID2(System.Int32,UnityEngine.FocusType,UnityEngine.Rect)
extern "C" int32_t GUIUtility_Internal_GetNextControlID2_m8665 (Object_t * __this /* static, unused */, int32_t ___hint, int32_t ___focusType, Rect_t647  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::INTERNAL_CALL_Internal_GetNextControlID2(System.Int32,UnityEngine.FocusType,UnityEngine.Rect&)
extern "C" int32_t GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m8666 (Object_t * __this /* static, unused */, int32_t ___hint, int32_t ___focusType, Rect_t647 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.GUIUtility::GetStateObject(System.Type,System.Int32)
extern "C" Object_t * GUIUtility_GetStateObject_m8667 (Object_t * __this /* static, unused */, Type_t * ___t, int32_t ___controlID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::get_hotControl()
extern "C" int32_t GUIUtility_get_hotControl_m8668 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::set_hotControl(System.Int32)
extern "C" void GUIUtility_set_hotControl_m8669 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::Internal_GetHotControl()
extern "C" int32_t GUIUtility_Internal_GetHotControl_m8670 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::Internal_SetHotControl(System.Int32)
extern "C" void GUIUtility_Internal_SetHotControl_m8671 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::get_keyboardControl()
extern "C" int32_t GUIUtility_get_keyboardControl_m8672 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::set_keyboardControl(System.Int32)
extern "C" void GUIUtility_set_keyboardControl_m8673 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIUtility::get_systemCopyBuffer()
extern "C" String_t* GUIUtility_get_systemCopyBuffer_m8674 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
extern "C" void GUIUtility_set_systemCopyBuffer_m8675 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUIUtility::GetDefaultSkin()
extern "C" GUISkin_t730 * GUIUtility_GetDefaultSkin_m8676 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
extern "C" GUISkin_t730 * GUIUtility_Internal_GetDefaultSkin_m8677 (Object_t * __this /* static, unused */, int32_t ___skinMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::BeginGUI(System.Int32,System.Int32,System.Int32)
extern "C" void GUIUtility_BeginGUI_m8678 (Object_t * __this /* static, unused */, int32_t ___skinMode, int32_t ___instanceID, int32_t ___useGUILayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
extern "C" void GUIUtility_Internal_ExitGUI_m8679 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::EndGUI(System.Int32)
extern "C" void GUIUtility_EndGUI_m8680 (Object_t * __this /* static, unused */, int32_t ___layoutType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIUtility::EndGUIFromException(System.Exception)
extern "C" bool GUIUtility_EndGUIFromException_m8681 (Object_t * __this /* static, unused */, Exception_t57 * ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::CheckOnGUI()
extern "C" void GUIUtility_CheckOnGUI_m8682 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::Internal_GetGUIDepth()
extern "C" int32_t GUIUtility_Internal_GetGUIDepth_m8683 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIUtility::get_mouseUsed()
extern "C" bool GUIUtility_get_mouseUsed_m8684 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::set_mouseUsed(System.Boolean)
extern "C" void GUIUtility_set_mouseUsed_m8685 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
