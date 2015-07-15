#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIStyle
struct GUIStyle_t64;
// System.String
struct String_t;
// UnityEngine.GUIStyleState
struct GUIStyleState_t1050;
// UnityEngine.RectOffset
struct RectOffset_t546;
// UnityEngine.GUIContent
struct GUIContent_t620;
// UnityEngine.Font
struct Font_t748;
// UnityEngine.ImagePosition
#include "UnityEngine_UnityEngine_ImagePosition.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Internal_DrawArguments
#include "UnityEngine_UnityEngine_Internal_DrawArguments.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.GUIStyle::.ctor()
extern "C" void GUIStyle__ctor_m2553 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.cctor()
extern "C" void GUIStyle__cctor_m5535 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Finalize()
extern "C" void GUIStyle_Finalize_m5536 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Init()
extern "C" void GUIStyle_Init_m5537 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Cleanup()
extern "C" void GUIStyle_Cleanup_m5538 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::get_name()
extern "C" String_t* GUIStyle_get_name_m5539 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_name(System.String)
extern "C" void GUIStyle_set_name_m5540 (GUIStyle_t64 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern "C" GUIStyleState_t1050 * GUIStyle_get_normal_m5541 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
extern "C" IntPtr_t GUIStyle_GetStyleStatePtr_m5542 (GUIStyle_t64 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
extern "C" RectOffset_t546 * GUIStyle_get_margin_m5543 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
extern "C" RectOffset_t546 * GUIStyle_get_padding_m2951 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_padding(UnityEngine.RectOffset)
extern "C" void GUIStyle_set_padding_m2560 (GUIStyle_t64 * __this, RectOffset_t546 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
extern "C" IntPtr_t GUIStyle_GetRectOffsetPtr_m5544 (GUIStyle_t64 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::AssignRectOffset(System.Int32,System.IntPtr)
extern "C" void GUIStyle_AssignRectOffset_m5545 (GUIStyle_t64 * __this, int32_t ___idx, IntPtr_t ___srcRectOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ImagePosition UnityEngine.GUIStyle::get_imagePosition()
extern "C" int32_t GUIStyle_get_imagePosition_m5546 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
extern "C" void GUIStyle_set_alignment_m2557 (GUIStyle_t64 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_wordWrap()
extern "C" bool GUIStyle_get_wordWrap_m5547 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
extern "C" void GUIStyle_set_wordWrap_m2558 (GUIStyle_t64 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
extern "C" float GUIStyle_get_fixedWidth_m5548 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
extern "C" float GUIStyle_get_fixedHeight_m5549 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
extern "C" bool GUIStyle_get_stretchWidth_m5550 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
extern "C" void GUIStyle_set_stretchWidth_m2562 (GUIStyle_t64 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
extern "C" bool GUIStyle_get_stretchHeight_m5551 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
extern "C" void GUIStyle_set_stretchHeight_m2561 (GUIStyle_t64 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)
extern "C" float GUIStyle_Internal_GetLineHeight_m5552 (Object_t * __this /* static, unused */, IntPtr_t ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_lineHeight()
extern "C" float GUIStyle_get_lineHeight_m5553 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void GUIStyle_Internal_Draw_m5554 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t544  ___position, GUIContent_t620 * ___content, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw(UnityEngine.GUIContent,UnityEngine.Internal_DrawArguments&)
extern "C" void GUIStyle_Internal_Draw_m5555 (Object_t * __this /* static, unused */, GUIContent_t620 * ___content, Internal_DrawArguments_t1051 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void GUIStyle_Draw_m5556 (GUIStyle_t64 * __this, Rect_t544  ___position, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void GUIStyle_Draw_m5557 (GUIStyle_t64 * __this, Rect_t544  ___position, GUIContent_t620 * ___content, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
extern "C" void GUIStyle_Draw_m5558 (GUIStyle_t64 * __this, Rect_t544  ___position, GUIContent_t620 * ___content, int32_t ___controlID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" void GUIStyle_Draw_m5559 (GUIStyle_t64 * __this, Rect_t544  ___position, GUIContent_t620 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw2(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" void GUIStyle_Internal_Draw2_m5560 (Object_t * __this /* static, unused */, IntPtr_t ___style, Rect_t544  ___position, GUIContent_t620 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_Draw2(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" void GUIStyle_INTERNAL_CALL_Internal_Draw2_m5561 (Object_t * __this /* static, unused */, IntPtr_t ___style, Rect_t544 * ___position, GUIContent_t620 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
extern "C" void GUIStyle_SetDefaultFont_m5562 (Object_t * __this /* static, unused */, Font_t748 * ___font, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
extern "C" GUIStyle_t64 * GUIStyle_get_none_m5563 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
extern "C" Vector2_t68  GUIStyle_GetCursorPixelPosition_m5564 (GUIStyle_t64 * __this, Rect_t544  ___position, GUIContent_t620 * ___content, int32_t ___cursorStringIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
extern "C" void GUIStyle_Internal_GetCursorPixelPosition_m5565 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t544  ___position, GUIContent_t620 * ___content, int32_t ___cursorStringIndex, Vector2_t68 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
extern "C" void GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m5566 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t544 * ___position, GUIContent_t620 * ___content, int32_t ___cursorStringIndex, Vector2_t68 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
extern "C" Vector2_t68  GUIStyle_CalcSize_m5567 (GUIStyle_t64 * __this, GUIContent_t620 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcSize(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&)
extern "C" void GUIStyle_Internal_CalcSize_m5568 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t620 * ___content, Vector2_t68 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
extern "C" float GUIStyle_CalcHeight_m5569 (GUIStyle_t64 * __this, GUIContent_t620 * ___content, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)
extern "C" float GUIStyle_Internal_CalcHeight_m5570 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t620 * ___content, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_isHeightDependantOnWidth()
extern "C" bool GUIStyle_get_isHeightDependantOnWidth_m5571 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::CalcMinMaxWidth(UnityEngine.GUIContent,System.Single&,System.Single&)
extern "C" void GUIStyle_CalcMinMaxWidth_m5572 (GUIStyle_t64 * __this, GUIContent_t620 * ___content, float* ___minWidth, float* ___maxWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcMinMaxWidth(System.IntPtr,UnityEngine.GUIContent,System.Single&,System.Single&)
extern "C" void GUIStyle_Internal_CalcMinMaxWidth_m5573 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t620 * ___content, float* ___minWidth, float* ___maxWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::ToString()
extern "C" String_t* GUIStyle_ToString_m5574 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
