#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Mask
struct Mask_t1030;
// UnityEngine.UI.Graphic
struct Graphic_t942;
// UnityEngine.RectTransform
struct RectTransform_t545;
// UnityEngine.Camera
struct Camera_t548;
// UnityEngine.Material
struct Material_t526;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.UI.Mask::.ctor()
extern "C" void Mask__ctor_m5898 (Mask_t1030 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.Mask::get_graphic()
extern "C" Graphic_t942 * Mask_get_graphic_m5899 (Mask_t1030 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::get_showMaskGraphic()
extern "C" bool Mask_get_showMaskGraphic_m5900 (Mask_t1030 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::set_showMaskGraphic(System.Boolean)
extern "C" void Mask_set_showMaskGraphic_m5901 (Mask_t1030 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Mask::get_rectTransform()
extern "C" RectTransform_t545 * Mask_get_rectTransform_m5902 (Mask_t1030 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::MaskEnabled()
extern "C" bool Mask_MaskEnabled_m5903 (Mask_t1030 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnSiblingGraphicEnabledDisabled()
extern "C" void Mask_OnSiblingGraphicEnabledDisabled_m5904 (Mask_t1030 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::NotifyMaskStateChanged()
extern "C" void Mask_NotifyMaskStateChanged_m5905 (Mask_t1030 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::ClearCachedMaterial()
extern "C" void Mask_ClearCachedMaterial_m5906 (Mask_t1030 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnEnable()
extern "C" void Mask_OnEnable_m5907 (Mask_t1030 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnDisable()
extern "C" void Mask_OnDisable_m5908 (Mask_t1030 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool Mask_IsRaycastLocationValid_m5909 (Mask_t1030 * __this, Vector2_t110  ___sp, Camera_t548 * ___eventCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Mask::GetModifiedMaterial(UnityEngine.Material)
extern "C" Material_t526 * Mask_GetModifiedMaterial_m5910 (Mask_t1030 * __this, Material_t526 * ___baseMaterial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
