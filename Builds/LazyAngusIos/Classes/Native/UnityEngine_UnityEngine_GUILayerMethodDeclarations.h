#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayer
struct GUILayer_t1082;
// UnityEngine.GUIElement
struct GUIElement_t1081;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.GUIElement UnityEngine.GUILayer::HitTest(UnityEngine.Vector3)
extern "C" GUIElement_t1081 * GUILayer_HitTest_m5891 (GUILayer_t1082 * __this, Vector3_t451  ___screenPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIElement UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)
extern "C" GUIElement_t1081 * GUILayer_INTERNAL_CALL_HitTest_m5892 (Object_t * __this /* static, unused */, GUILayer_t1082 * ___self, Vector3_t451 * ___screenPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
