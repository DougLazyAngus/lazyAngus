#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CanvasRenderer
struct CanvasRenderer_t919;
// UnityEngine.Material
struct Material_t523;
// UnityEngine.Texture
struct Texture_t394;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t951;
// System.Object
struct Object_t;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t948;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
extern "C" void CanvasRenderer_SetColor_m5924 (CanvasRenderer_t919 * __this, Color_t325  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
extern "C" void CanvasRenderer_INTERNAL_CALL_SetColor_m9619 (Object_t * __this /* static, unused */, CanvasRenderer_t919 * ___self, Color_t325 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
extern "C" Color_t325  CanvasRenderer_GetColor_m5922 (CanvasRenderer_t919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::set_isMask(System.Boolean)
extern "C" void CanvasRenderer_set_isMask_m6189 (CanvasRenderer_t919 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
extern "C" void CanvasRenderer_SetMaterial_m5914 (CanvasRenderer_t919 * __this, Material_t523 * ___material, Texture_t394 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void CanvasRenderer_SetVertices_m5912 (CanvasRenderer_t919 * __this, List_1_t951 * ___vertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)
extern "C" void CanvasRenderer_SetVerticesInternal_m9620 (CanvasRenderer_t919 * __this, Object_t * ___vertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVertices(UnityEngine.UIVertex[],System.Int32)
extern "C" void CanvasRenderer_SetVertices_m6013 (CanvasRenderer_t919 * __this, UIVertexU5BU5D_t948* ___vertices, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)
extern "C" void CanvasRenderer_SetVerticesInternalArray_m9621 (CanvasRenderer_t919 * __this, UIVertexU5BU5D_t948* ___vertices, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::Clear()
extern "C" void CanvasRenderer_Clear_m5910 (CanvasRenderer_t919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
extern "C" int32_t CanvasRenderer_get_absoluteDepth_m5907 (CanvasRenderer_t919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
