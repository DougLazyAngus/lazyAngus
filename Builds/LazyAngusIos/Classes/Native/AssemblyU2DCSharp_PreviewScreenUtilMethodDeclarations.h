#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PreviewScreenUtil
struct PreviewScreenUtil_t405;
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.Renderer
struct Renderer_t638;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void PreviewScreenUtil::.ctor()
extern "C" void PreviewScreenUtil__ctor_m2190 (PreviewScreenUtil_t405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PreviewScreenUtil::.cctor()
extern "C" void PreviewScreenUtil__cctor_m2191 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PreviewScreenUtil::isInScreenRect(UnityEngine.Rect,UnityEngine.Vector2)
extern "C" bool PreviewScreenUtil_isInScreenRect_m2192 (Object_t * __this /* static, unused */, Rect_t639  ___rect, Vector2_t110  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect PreviewScreenUtil::getObjectBounds(UnityEngine.GameObject)
extern "C" Rect_t639  PreviewScreenUtil_getObjectBounds_m2193 (Object_t * __this /* static, unused */, GameObject_t352 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect PreviewScreenUtil::getRendererBounds(UnityEngine.Renderer)
extern "C" Rect_t639  PreviewScreenUtil_getRendererBounds_m2194 (Object_t * __this /* static, unused */, Renderer_t638 * ___renderer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PreviewScreenUtil::Awake()
extern "C" void PreviewScreenUtil_Awake_m2195 (PreviewScreenUtil_t405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PreviewScreenUtil::FixedUpdate()
extern "C" void PreviewScreenUtil_FixedUpdate_m2196 (PreviewScreenUtil_t405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PreviewScreenUtil PreviewScreenUtil::get_instance()
extern "C" PreviewScreenUtil_t405 * PreviewScreenUtil_get_instance_m2197 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
