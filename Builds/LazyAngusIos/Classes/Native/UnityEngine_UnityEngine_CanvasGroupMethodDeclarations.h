﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CanvasGroup
struct CanvasGroup_t481;
// UnityEngine.Camera
struct Camera_t435;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
extern "C" void CanvasGroup_set_alpha_m2963 (CanvasGroup_t481 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasGroup::get_interactable()
extern "C" bool CanvasGroup_get_interactable_m4742 (CanvasGroup_t481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasGroup::get_blocksRaycasts()
extern "C" bool CanvasGroup_get_blocksRaycasts_m5907 (CanvasGroup_t481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasGroup::get_ignoreParentGroups()
extern "C" bool CanvasGroup_get_ignoreParentGroups_m4535 (CanvasGroup_t481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasGroup::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool CanvasGroup_IsRaycastLocationValid_m5908 (CanvasGroup_t481 * __this, Vector2_t68  ___sp, Camera_t435 * ___eventCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
