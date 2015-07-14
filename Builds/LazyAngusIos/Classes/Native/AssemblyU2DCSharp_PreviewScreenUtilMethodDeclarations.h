#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PreviewScreenUtil
struct PreviewScreenUtil_t322;
// UnityEngine.GameObject
struct GameObject_t284;
// UnityEngine.Renderer
struct Renderer_t541;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void PreviewScreenUtil::.ctor()
extern "C" void PreviewScreenUtil__ctor_m1452 (PreviewScreenUtil_t322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PreviewScreenUtil::.cctor()
extern "C" void PreviewScreenUtil__cctor_m1453 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PreviewScreenUtil::isInScreenRect(UnityEngine.Rect,UnityEngine.Vector2)
extern "C" bool PreviewScreenUtil_isInScreenRect_m1454 (Object_t * __this /* static, unused */, Rect_t542  ___rect, Vector2_t68  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect PreviewScreenUtil::getObjectBounds(UnityEngine.GameObject)
extern "C" Rect_t542  PreviewScreenUtil_getObjectBounds_m1455 (Object_t * __this /* static, unused */, GameObject_t284 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect PreviewScreenUtil::getRendererBounds(UnityEngine.Renderer)
extern "C" Rect_t542  PreviewScreenUtil_getRendererBounds_m1456 (Object_t * __this /* static, unused */, Renderer_t541 * ___renderer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PreviewScreenUtil::Awake()
extern "C" void PreviewScreenUtil_Awake_m1457 (PreviewScreenUtil_t322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PreviewScreenUtil::FixedUpdate()
extern "C" void PreviewScreenUtil_FixedUpdate_m1458 (PreviewScreenUtil_t322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PreviewScreenUtil PreviewScreenUtil::get_instance()
extern "C" PreviewScreenUtil_t322 * PreviewScreenUtil_get_instance_m1459 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
