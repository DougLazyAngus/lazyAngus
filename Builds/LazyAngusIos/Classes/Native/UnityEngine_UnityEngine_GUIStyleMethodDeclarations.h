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
struct GUIStyleState_t1025;
// UnityEngine.RectOffset
struct RectOffset_t525;
// UnityEngine.GUIContent
struct GUIContent_t599;
// UnityEngine.Font
struct Font_t723;
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
extern "C" void GUIStyle__ctor_m2425 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.cctor()
extern "C" void GUIStyle__cctor_m5368 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Finalize()
extern "C" void GUIStyle_Finalize_m5369 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Init()
extern "C" void GUIStyle_Init_m5370 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Cleanup()
extern "C" void GUIStyle_Cleanup_m5371 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::get_name()
extern "C" String_t* GUIStyle_get_name_m5372 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_name(System.String)
extern "C" void GUIStyle_set_name_m5373 (GUIStyle_t64 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern "C" GUIStyleState_t1025 * GUIStyle_get_normal_m5374 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
extern "C" IntPtr_t GUIStyle_GetStyleStatePtr_m5375 (GUIStyle_t64 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
extern "C" RectOffset_t525 * GUIStyle_get_margin_m5376 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
extern "C" RectOffset_t525 * GUIStyle_get_padding_m2823 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_padding(UnityEngine.RectOffset)
extern "C" void GUIStyle_set_padding_m2432 (GUIStyle_t64 * __this, RectOffset_t525 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
extern "C" IntPtr_t GUIStyle_GetRectOffsetPtr_m5377 (GUIStyle_t64 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::AssignRectOffset(System.Int32,System.IntPtr)
extern "C" void GUIStyle_AssignRectOffset_m5378 (GUIStyle_t64 * __this, int32_t ___idx, IntPtr_t ___srcRectOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ImagePosition UnityEngine.GUIStyle::get_imagePosition()
extern "C" int32_t GUIStyle_get_imagePosition_m5379 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
extern "C" void GUIStyle_set_alignment_m2429 (GUIStyle_t64 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_wordWrap()
extern "C" bool GUIStyle_get_wordWrap_m5380 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
extern "C" void GUIStyle_set_wordWrap_m2430 (GUIStyle_t64 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
extern "C" float GUIStyle_get_fixedWidth_m5381 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
extern "C" float GUIStyle_get_fixedHeight_m5382 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
extern "C" bool GUIStyle_get_stretchWidth_m5383 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
extern "C" void GUIStyle_set_stretchWidth_m2434 (GUIStyle_t64 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
extern "C" bool GUIStyle_get_stretchHeight_m5384 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
extern "C" void GUIStyle_set_stretchHeight_m2433 (GUIStyle_t64 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)
extern "C" float GUIStyle_Internal_GetLineHeight_m5385 (Object_t * __this /* static, unused */, IntPtr_t ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_lineHeight()
extern "C" float GUIStyle_get_lineHeight_m5386 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void GUIStyle_Internal_Draw_m5387 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t520  ___position, GUIContent_t599 * ___content, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw(UnityEngine.GUIContent,UnityEngine.Internal_DrawArguments&)
extern "C" void GUIStyle_Internal_Draw_m5388 (Object_t * __this /* static, unused */, GUIContent_t599 * ___content, Internal_DrawArguments_t1026 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void GUIStyle_Draw_m5389 (GUIStyle_t64 * __this, Rect_t520  ___position, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void GUIStyle_Draw_m5390 (GUIStyle_t64 * __this, Rect_t520  ___position, GUIContent_t599 * ___content, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
extern "C" void GUIStyle_Draw_m5391 (GUIStyle_t64 * __this, Rect_t520  ___position, GUIContent_t599 * ___content, int32_t ___controlID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" void GUIStyle_Draw_m5392 (GUIStyle_t64 * __this, Rect_t520  ___position, GUIContent_t599 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw2(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" void GUIStyle_Internal_Draw2_m5393 (Object_t * __this /* static, unused */, IntPtr_t ___style, Rect_t520  ___position, GUIContent_t599 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_Draw2(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" void GUIStyle_INTERNAL_CALL_Internal_Draw2_m5394 (Object_t * __this /* static, unused */, IntPtr_t ___style, Rect_t520 * ___position, GUIContent_t599 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
extern "C" void GUIStyle_SetDefaultFont_m5395 (Object_t * __this /* static, unused */, Font_t723 * ___font, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
extern "C" GUIStyle_t64 * GUIStyle_get_none_m5396 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
extern "C" Vector2_t68  GUIStyle_GetCursorPixelPosition_m5397 (GUIStyle_t64 * __this, Rect_t520  ___position, GUIContent_t599 * ___content, int32_t ___cursorStringIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
extern "C" void GUIStyle_Internal_GetCursorPixelPosition_m5398 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t520  ___position, GUIContent_t599 * ___content, int32_t ___cursorStringIndex, Vector2_t68 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
extern "C" void GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m5399 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t520 * ___position, GUIContent_t599 * ___content, int32_t ___cursorStringIndex, Vector2_t68 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
extern "C" Vector2_t68  GUIStyle_CalcSize_m5400 (GUIStyle_t64 * __this, GUIContent_t599 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcSize(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&)
extern "C" void GUIStyle_Internal_CalcSize_m5401 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t599 * ___content, Vector2_t68 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
extern "C" float GUIStyle_CalcHeight_m5402 (GUIStyle_t64 * __this, GUIContent_t599 * ___content, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)
extern "C" float GUIStyle_Internal_CalcHeight_m5403 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t599 * ___content, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_isHeightDependantOnWidth()
extern "C" bool GUIStyle_get_isHeightDependantOnWidth_m5404 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::CalcMinMaxWidth(UnityEngine.GUIContent,System.Single&,System.Single&)
extern "C" void GUIStyle_CalcMinMaxWidth_m5405 (GUIStyle_t64 * __this, GUIContent_t599 * ___content, float* ___minWidth, float* ___maxWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcMinMaxWidth(System.IntPtr,UnityEngine.GUIContent,System.Single&,System.Single&)
extern "C" void GUIStyle_Internal_CalcMinMaxWidth_m5406 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t599 * ___content, float* ___minWidth, float* ___maxWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::ToString()
extern "C" String_t* GUIStyle_ToString_m5407 (GUIStyle_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
