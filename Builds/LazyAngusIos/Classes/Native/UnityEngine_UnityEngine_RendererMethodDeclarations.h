#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Renderer
struct Renderer_t563;
// UnityEngine.Material
struct Material_t481;
// UnityEngine.Material[]
struct MaterialU5BU5D_t747;
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C" void Renderer_set_enabled_m3780 (Renderer_t563 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" Material_t481 * Renderer_get_material_m3759 (Renderer_t563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
extern "C" void Renderer_set_material_m3761 (Renderer_t563 * __this, Material_t481 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_materials(UnityEngine.Material[])
extern "C" void Renderer_set_materials_m4029 (Renderer_t563 * __this, MaterialU5BU5D_t747* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
extern "C" Bounds_t716  Renderer_get_bounds_m3789 (Renderer_t563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C" int32_t Renderer_get_sortingLayerID_m5601 (Renderer_t563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C" int32_t Renderer_get_sortingOrder_m5602 (Renderer_t563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
