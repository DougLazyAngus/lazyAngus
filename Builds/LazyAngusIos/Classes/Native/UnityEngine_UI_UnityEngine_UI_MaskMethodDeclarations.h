#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Mask
struct Mask_t943;
// UnityEngine.UI.Graphic
struct Graphic_t852;
// UnityEngine.RectTransform
struct RectTransform_t617;
// UnityEngine.Camera
struct Camera_t523;
// UnityEngine.Material
struct Material_t482;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.UI.Mask::.ctor()
extern "C" void Mask__ctor_m5399 (Mask_t943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.Mask::get_graphic()
extern "C" Graphic_t852 * Mask_get_graphic_m5400 (Mask_t943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::get_showMaskGraphic()
extern "C" bool Mask_get_showMaskGraphic_m5401 (Mask_t943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::set_showMaskGraphic(System.Boolean)
extern "C" void Mask_set_showMaskGraphic_m5402 (Mask_t943 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Mask::get_rectTransform()
extern "C" RectTransform_t617 * Mask_get_rectTransform_m5403 (Mask_t943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::MaskEnabled()
extern "C" bool Mask_MaskEnabled_m5404 (Mask_t943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnSiblingGraphicEnabledDisabled()
extern "C" void Mask_OnSiblingGraphicEnabledDisabled_m5405 (Mask_t943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::NotifyMaskStateChanged()
extern "C" void Mask_NotifyMaskStateChanged_m5406 (Mask_t943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::ClearCachedMaterial()
extern "C" void Mask_ClearCachedMaterial_m5407 (Mask_t943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnEnable()
extern "C" void Mask_OnEnable_m5408 (Mask_t943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnDisable()
extern "C" void Mask_OnDisable_m5409 (Mask_t943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool Mask_IsRaycastLocationValid_m5410 (Mask_t943 * __this, Vector2_t110  ___sp, Camera_t523 * ___eventCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Mask::GetModifiedMaterial(UnityEngine.Material)
extern "C" Material_t482 * Mask_GetModifiedMaterial_m5411 (Mask_t943 * __this, Material_t482 * ___baseMaterial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
