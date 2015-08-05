#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.CanvasListPool
struct CanvasListPool_t957;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t993;

// System.Void UnityEngine.UI.CanvasListPool::.cctor()
extern "C" void CanvasListPool__cctor_m5487 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Canvas> UnityEngine.UI.CanvasListPool::Get()
extern "C" List_1_t993 * CanvasListPool_Get_m5488 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasListPool::Release(System.Collections.Generic.List`1<UnityEngine.Canvas>)
extern "C" void CanvasListPool_Release_m5489 (Object_t * __this /* static, unused */, List_1_t993 * ___toRelease, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasListPool::<s_CanvasListPool>m__16(System.Collections.Generic.List`1<UnityEngine.Canvas>)
extern "C" void CanvasListPool_U3Cs_CanvasListPoolU3Em__16_m5490 (Object_t * __this /* static, unused */, List_1_t993 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
