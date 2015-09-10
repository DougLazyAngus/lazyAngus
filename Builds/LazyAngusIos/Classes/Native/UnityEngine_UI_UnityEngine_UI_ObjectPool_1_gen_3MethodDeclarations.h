#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t6354;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t6291;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m32493_gshared (ObjectPool_1_t6354 * __this, UnityAction_1_t6291 * ___actionOnGet, UnityAction_1_t6291 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m32493(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t6354 *, UnityAction_1_t6291 *, UnityAction_1_t6291 *, const MethodInfo*))ObjectPool_1__ctor_m32493_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m32495_gshared (ObjectPool_1_t6354 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m32495(__this, method) (( int32_t (*) (ObjectPool_1_t6354 *, const MethodInfo*))ObjectPool_1_get_countAll_m32495_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m32497_gshared (ObjectPool_1_t6354 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m32497(__this, ___value, method) (( void (*) (ObjectPool_1_t6354 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m32497_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m32499_gshared (ObjectPool_1_t6354 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m32499(__this, method) (( int32_t (*) (ObjectPool_1_t6354 *, const MethodInfo*))ObjectPool_1_get_countActive_m32499_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m32501_gshared (ObjectPool_1_t6354 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m32501(__this, method) (( int32_t (*) (ObjectPool_1_t6354 *, const MethodInfo*))ObjectPool_1_get_countInactive_m32501_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m32503_gshared (ObjectPool_1_t6354 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m32503(__this, method) (( Object_t * (*) (ObjectPool_1_t6354 *, const MethodInfo*))ObjectPool_1_Get_m32503_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m32505_gshared (ObjectPool_1_t6354 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m32505(__this, ___element, method) (( void (*) (ObjectPool_1_t6354 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m32505_gshared)(__this, ___element, method)
