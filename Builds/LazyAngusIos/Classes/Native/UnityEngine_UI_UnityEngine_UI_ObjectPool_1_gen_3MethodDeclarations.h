#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t5772;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t5755;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m27738_gshared (ObjectPool_1_t5772 * __this, UnityAction_1_t5755 * ___actionOnGet, UnityAction_1_t5755 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m27738(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t5772 *, UnityAction_1_t5755 *, UnityAction_1_t5755 *, const MethodInfo*))ObjectPool_1__ctor_m27738_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m27740_gshared (ObjectPool_1_t5772 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m27740(__this, method) (( int32_t (*) (ObjectPool_1_t5772 *, const MethodInfo*))ObjectPool_1_get_countAll_m27740_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m27742_gshared (ObjectPool_1_t5772 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m27742(__this, ___value, method) (( void (*) (ObjectPool_1_t5772 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m27742_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m27744_gshared (ObjectPool_1_t5772 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m27744(__this, method) (( int32_t (*) (ObjectPool_1_t5772 *, const MethodInfo*))ObjectPool_1_get_countActive_m27744_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m27746_gshared (ObjectPool_1_t5772 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m27746(__this, method) (( int32_t (*) (ObjectPool_1_t5772 *, const MethodInfo*))ObjectPool_1_get_countInactive_m27746_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m27748_gshared (ObjectPool_1_t5772 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m27748(__this, method) (( Object_t * (*) (ObjectPool_1_t5772 *, const MethodInfo*))ObjectPool_1_Get_m27748_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m27750_gshared (ObjectPool_1_t5772 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m27750(__this, ___element, method) (( void (*) (ObjectPool_1_t5772 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m27750_gshared)(__this, ___element, method)
