#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Canvas
struct Canvas_t630;
// UnityEngine.Camera
struct Camera_t532;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t1003;
// UnityEngine.Material
struct Material_t482;
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderMode.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.Canvas::add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern "C" void Canvas_add_willRenderCanvases_m5636 (Object_t * __this /* static, unused */, WillRenderCanvases_t1003 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern "C" void Canvas_remove_willRenderCanvases_m9368 (Object_t * __this /* static, unused */, WillRenderCanvases_t1003 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
extern "C" int32_t Canvas_get_renderMode_m5681 (Canvas_t630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Canvas::get_isRootCanvas()
extern "C" bool Canvas_get_isRootCanvas_m5906 (Canvas_t630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
extern "C" Camera_t532 * Canvas_get_worldCamera_m3966 (Canvas_t630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Canvas_INTERNAL_get_pixelRect_m9369 (Canvas_t630 * __this, Rect_t650 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Canvas::get_pixelRect()
extern "C" Rect_t650  Canvas_get_pixelRect_m4094 (Canvas_t630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Canvas::get_scaleFactor()
extern "C" float Canvas_get_scaleFactor_m4095 (Canvas_t630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
extern "C" void Canvas_set_scaleFactor_m5909 (Canvas_t630 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
extern "C" float Canvas_get_referencePixelsPerUnit_m5708 (Canvas_t630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
extern "C" void Canvas_set_referencePixelsPerUnit_m5910 (Canvas_t630 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Canvas::get_pixelPerfect()
extern "C" bool Canvas_get_pixelPerfect_m5668 (Canvas_t630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_renderOrder()
extern "C" int32_t Canvas_get_renderOrder_m5683 (Canvas_t630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_sortingOrder()
extern "C" int32_t Canvas_get_sortingOrder_m5682 (Canvas_t630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_cachedSortingLayerValue()
extern "C" int32_t Canvas_get_cachedSortingLayerValue_m5689 (Canvas_t630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
extern "C" Material_t482 * Canvas_GetDefaultCanvasMaterial_m5655 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasTextMaterial()
extern "C" Material_t482 * Canvas_GetDefaultCanvasTextMaterial_m5888 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
extern "C" void Canvas_SendWillRenderCanvases_m9370 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
extern "C" void Canvas_ForceUpdateCanvases_m5841 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
