﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayer
struct GUILayer_t1034;
// UnityEngine.GUIElement
struct GUIElement_t1033;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.GUIElement UnityEngine.GUILayer::HitTest(UnityEngine.Vector3)
extern "C" GUIElement_t1033 * GUILayer_HitTest_m5334 (GUILayer_t1034 * __this, Vector3_t411  ___screenPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIElement UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)
extern "C" GUIElement_t1033 * GUILayer_INTERNAL_CALL_HitTest_m5335 (Object_t * __this /* static, unused */, GUILayer_t1034 * ___self, Vector3_t411 * ___screenPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
