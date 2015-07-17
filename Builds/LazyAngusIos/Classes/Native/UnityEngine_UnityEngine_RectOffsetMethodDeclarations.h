#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RectOffset
struct RectOffset_t595;
// UnityEngine.GUIStyle
struct GUIStyle_t64;
// System.String
struct String_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.RectOffset::.ctor()
extern "C" void RectOffset__ctor_m5550 (RectOffset_t595 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectOffset::.ctor(UnityEngine.GUIStyle,System.IntPtr)
extern "C" void RectOffset__ctor_m6100 (RectOffset_t595 * __this, GUIStyle_t64 * ___sourceStyle, IntPtr_t ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectOffset::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void RectOffset__ctor_m3058 (RectOffset_t595 * __this, int32_t ___left, int32_t ___right, int32_t ___top, int32_t ___bottom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectOffset::Finalize()
extern "C" void RectOffset_Finalize_m6101 (RectOffset_t595 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectOffset::Init()
extern "C" void RectOffset_Init_m6102 (RectOffset_t595 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectOffset::Cleanup()
extern "C" void RectOffset_Cleanup_m6103 (RectOffset_t595 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RectOffset::get_left()
extern "C" int32_t RectOffset_get_left_m5545 (RectOffset_t595 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectOffset::set_left(System.Int32)
extern "C" void RectOffset_set_left_m6104 (RectOffset_t595 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RectOffset::get_right()
extern "C" int32_t RectOffset_get_right_m6105 (RectOffset_t595 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectOffset::set_right(System.Int32)
extern "C" void RectOffset_set_right_m6106 (RectOffset_t595 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RectOffset::get_top()
extern "C" int32_t RectOffset_get_top_m5546 (RectOffset_t595 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectOffset::set_top(System.Int32)
extern "C" void RectOffset_set_top_m6107 (RectOffset_t595 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RectOffset::get_bottom()
extern "C" int32_t RectOffset_get_bottom_m3518 (RectOffset_t595 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectOffset::set_bottom(System.Int32)
extern "C" void RectOffset_set_bottom_m6108 (RectOffset_t595 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RectOffset::get_horizontal()
extern "C" int32_t RectOffset_get_horizontal_m5539 (RectOffset_t595 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RectOffset::get_vertical()
extern "C" int32_t RectOffset_get_vertical_m5540 (RectOffset_t595 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.RectOffset::Add(UnityEngine.Rect)
extern "C" Rect_t593  RectOffset_Add_m6109 (RectOffset_t595 * __this, Rect_t593  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.RectOffset::INTERNAL_CALL_Add(UnityEngine.RectOffset,UnityEngine.Rect&)
extern "C" Rect_t593  RectOffset_INTERNAL_CALL_Add_m6110 (Object_t * __this /* static, unused */, RectOffset_t595 * ___self, Rect_t593 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.RectOffset::Remove(UnityEngine.Rect)
extern "C" Rect_t593  RectOffset_Remove_m6111 (RectOffset_t595 * __this, Rect_t593  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.RectOffset::INTERNAL_CALL_Remove(UnityEngine.RectOffset,UnityEngine.Rect&)
extern "C" Rect_t593  RectOffset_INTERNAL_CALL_Remove_m6112 (Object_t * __this /* static, unused */, RectOffset_t595 * ___self, Rect_t593 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.RectOffset::ToString()
extern "C" String_t* RectOffset_ToString_m6113 (RectOffset_t595 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
