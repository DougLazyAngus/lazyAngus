#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CanvasGroup
struct CanvasGroup_t1066;
// UnityEngine.Camera
struct Camera_t545;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Boolean UnityEngine.CanvasGroup::get_interactable()
extern "C" bool CanvasGroup_get_interactable_m6139 (CanvasGroup_t1066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasGroup::get_blocksRaycasts()
extern "C" bool CanvasGroup_get_blocksRaycasts_m9638 (CanvasGroup_t1066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasGroup::get_ignoreParentGroups()
extern "C" bool CanvasGroup_get_ignoreParentGroups_m5941 (CanvasGroup_t1066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasGroup::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool CanvasGroup_IsRaycastLocationValid_m9639 (CanvasGroup_t1066 * __this, Vector2_t110  ___sp, Camera_t545 * ___eventCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
