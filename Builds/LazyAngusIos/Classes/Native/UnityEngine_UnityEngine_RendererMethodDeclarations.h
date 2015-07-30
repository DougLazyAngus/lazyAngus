#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Renderer
struct Renderer_t646;
// UnityEngine.Material
struct Material_t482;
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C" void Renderer_set_enabled_m3772 (Renderer_t646 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" Material_t482 * Renderer_get_material_m3751 (Renderer_t646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
extern "C" void Renderer_set_material_m3753 (Renderer_t646 * __this, Material_t482 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
extern "C" Bounds_t715  Renderer_get_bounds_m3781 (Renderer_t646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C" int32_t Renderer_get_sortingLayerID_m5588 (Renderer_t646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C" int32_t Renderer_get_sortingOrder_m5589 (Renderer_t646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
