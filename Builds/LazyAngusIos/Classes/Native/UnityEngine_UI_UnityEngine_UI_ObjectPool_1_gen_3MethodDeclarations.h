#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t5684;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t5683;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m26959_gshared (ObjectPool_1_t5684 * __this, UnityAction_1_t5683 * ___actionOnGet, UnityAction_1_t5683 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m26959(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t5684 *, UnityAction_1_t5683 *, UnityAction_1_t5683 *, const MethodInfo*))ObjectPool_1__ctor_m26959_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m26961_gshared (ObjectPool_1_t5684 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m26961(__this, method) (( int32_t (*) (ObjectPool_1_t5684 *, const MethodInfo*))ObjectPool_1_get_countAll_m26961_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m26963_gshared (ObjectPool_1_t5684 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m26963(__this, ___value, method) (( void (*) (ObjectPool_1_t5684 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m26963_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m26965_gshared (ObjectPool_1_t5684 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m26965(__this, method) (( int32_t (*) (ObjectPool_1_t5684 *, const MethodInfo*))ObjectPool_1_get_countActive_m26965_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m26967_gshared (ObjectPool_1_t5684 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m26967(__this, method) (( int32_t (*) (ObjectPool_1_t5684 *, const MethodInfo*))ObjectPool_1_get_countInactive_m26967_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m26969_gshared (ObjectPool_1_t5684 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m26969(__this, method) (( Object_t * (*) (ObjectPool_1_t5684 *, const MethodInfo*))ObjectPool_1_Get_m26969_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m26971_gshared (ObjectPool_1_t5684 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m26971(__this, ___element, method) (( void (*) (ObjectPool_1_t5684 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m26971_gshared)(__this, ___element, method)
