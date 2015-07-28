#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Canvas
struct Canvas_t459;
// UnityEngine.Camera
struct Camera_t524;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t993;
// UnityEngine.Material
struct Material_t483;
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderMode.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.Canvas::add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern "C" void Canvas_add_willRenderCanvases_m5559 (Object_t * __this /* static, unused */, WillRenderCanvases_t993 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern "C" void Canvas_remove_willRenderCanvases_m9291 (Object_t * __this /* static, unused */, WillRenderCanvases_t993 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
extern "C" int32_t Canvas_get_renderMode_m5604 (Canvas_t459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Canvas::get_isRootCanvas()
extern "C" bool Canvas_get_isRootCanvas_m5830 (Canvas_t459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
extern "C" Camera_t524 * Canvas_get_worldCamera_m4018 (Canvas_t459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Canvas_INTERNAL_get_pixelRect_m9292 (Canvas_t459 * __this, Rect_t640 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Canvas::get_pixelRect()
extern "C" Rect_t640  Canvas_get_pixelRect_m3864 (Canvas_t459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Canvas::get_scaleFactor()
extern "C" float Canvas_get_scaleFactor_m3865 (Canvas_t459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
extern "C" void Canvas_set_scaleFactor_m5833 (Canvas_t459 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
extern "C" float Canvas_get_referencePixelsPerUnit_m5632 (Canvas_t459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
extern "C" void Canvas_set_referencePixelsPerUnit_m5834 (Canvas_t459 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Canvas::get_pixelPerfect()
extern "C" bool Canvas_get_pixelPerfect_m5591 (Canvas_t459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_renderOrder()
extern "C" int32_t Canvas_get_renderOrder_m5606 (Canvas_t459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_sortingOrder()
extern "C" int32_t Canvas_get_sortingOrder_m5605 (Canvas_t459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_cachedSortingLayerValue()
extern "C" int32_t Canvas_get_cachedSortingLayerValue_m5613 (Canvas_t459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
extern "C" Material_t483 * Canvas_GetDefaultCanvasMaterial_m5578 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasTextMaterial()
extern "C" Material_t483 * Canvas_GetDefaultCanvasTextMaterial_m5812 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
extern "C" void Canvas_SendWillRenderCanvases_m9293 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
extern "C" void Canvas_ForceUpdateCanvases_m5765 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
