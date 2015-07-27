#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CanvasGroup
struct CanvasGroup_t546;
// UnityEngine.Camera
struct Camera_t480;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
extern "C" void CanvasGroup_set_alpha_m3698 (CanvasGroup_t546 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasGroup::get_interactable()
extern "C" bool CanvasGroup_get_interactable_m5505 (CanvasGroup_t546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasGroup::get_blocksRaycasts()
extern "C" bool CanvasGroup_get_blocksRaycasts_m6668 (CanvasGroup_t546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasGroup::get_ignoreParentGroups()
extern "C" bool CanvasGroup_get_ignoreParentGroups_m5302 (CanvasGroup_t546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasGroup::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool CanvasGroup_IsRaycastLocationValid_m6669 (CanvasGroup_t546 * __this, Vector2_t70  ___sp, Camera_t480 * ___eventCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
