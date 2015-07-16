﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RectTransformUtility
struct RectTransformUtility_t911;
// UnityEngine.RectTransform
struct RectTransform_t533;
// UnityEngine.Camera
struct Camera_t439;
// UnityEngine.Transform
struct Transform_t323;
// UnityEngine.Canvas
struct Canvas_t375;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void UnityEngine.RectTransformUtility::.cctor()
extern "C" void RectTransformUtility__cctor_m6118 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool RectTransformUtility_RectangleContainsScreenPoint_m4765 (Object_t * __this /* static, unused */, RectTransform_t533 * ___rect, Vector2_t68  ___screenPoint, Camera_t439 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
extern "C" bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m6119 (Object_t * __this /* static, unused */, RectTransform_t533 * ___rect, Vector2_t68 * ___screenPoint, Camera_t439 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
extern "C" Vector2_t68  RectTransformUtility_PixelAdjustPoint_m4743 (Object_t * __this /* static, unused */, Vector2_t68  ___point, Transform_t323 * ___elementTransform, Canvas_t375 * ___canvas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_PixelAdjustPoint_m6120 (Object_t * __this /* static, unused */, Vector2_t68  ___point, Transform_t323 * ___elementTransform, Canvas_t375 * ___canvas, Vector2_t68 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m6121 (Object_t * __this /* static, unused */, Vector2_t68 * ___point, Transform_t323 * ___elementTransform, Canvas_t375 * ___canvas, Vector2_t68 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
extern "C" Rect_t552  RectTransformUtility_PixelAdjustRect_m4744 (Object_t * __this /* static, unused */, RectTransform_t533 * ___rectTransform, Canvas_t375 * ___canvas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m6122 (Object_t * __this /* static, unused */, RectTransform_t533 * ___rect, Vector2_t68  ___screenPoint, Camera_t439 * ___cam, Vector3_t411 * ___worldPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
extern "C" bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m4804 (Object_t * __this /* static, unused */, RectTransform_t533 * ___rect, Vector2_t68  ___screenPoint, Camera_t439 * ___cam, Vector2_t68 * ___localPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
extern "C" Ray_t608  RectTransformUtility_ScreenPointToRay_m6123 (Object_t * __this /* static, unused */, Camera_t439 * ___cam, Vector2_t68  ___screenPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutOnAxis_m4913 (Object_t * __this /* static, unused */, RectTransform_t533 * ___rect, int32_t ___axis, bool ___keepPositioning, bool ___recursive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutAxes_m4912 (Object_t * __this /* static, unused */, RectTransform_t533 * ___rect, bool ___keepPositioning, bool ___recursive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
extern "C" Vector2_t68  RectTransformUtility_GetTransposed_m6124 (Object_t * __this /* static, unused */, Vector2_t68  ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
