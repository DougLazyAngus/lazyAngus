#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIClip
struct GUIClip_t2724;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.GUIClip::Push(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C" void GUIClip_Push_m8957 (Object_t * __this /* static, unused */, Rect_t694  ___screenRect, Vector2_t110  ___scrollOffset, Vector2_t110  ___renderOffset, bool ___resetOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::INTERNAL_CALL_Push(UnityEngine.Rect&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Boolean)
extern "C" void GUIClip_INTERNAL_CALL_Push_m8958 (Object_t * __this /* static, unused */, Rect_t694 * ___screenRect, Vector2_t110 * ___scrollOffset, Vector2_t110 * ___renderOffset, bool ___resetOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::Pop()
extern "C" void GUIClip_Pop_m8959 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
