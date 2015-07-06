#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t774;
// UnityEngine.Object
struct Object_t528;
struct Object_t528_marshaled;
// UnityEngine.RectTransform
struct RectTransform_t501;
// UnityEngine.DrivenTransformProperties
#include "UnityEngine_UnityEngine_DrivenTransformProperties.h"

// System.Void UnityEngine.DrivenRectTransformTracker::Add(UnityEngine.Object,UnityEngine.RectTransform,UnityEngine.DrivenTransformProperties)
extern "C" void DrivenRectTransformTracker_Add_m4706 (DrivenRectTransformTracker_t774 * __this, Object_t528 * ___driver, RectTransform_t501 * ___rectTransform, int32_t ___drivenProperties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.DrivenRectTransformTracker::Clear()
extern "C" void DrivenRectTransformTracker_Clear_m4704 (DrivenRectTransformTracker_t774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
