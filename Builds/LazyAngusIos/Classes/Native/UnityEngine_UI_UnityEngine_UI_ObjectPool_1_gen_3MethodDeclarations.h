#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t3596;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t3595;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m21701_gshared (ObjectPool_1_t3596 * __this, UnityAction_1_t3595 * ___actionOnGet, UnityAction_1_t3595 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m21701(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t3596 *, UnityAction_1_t3595 *, UnityAction_1_t3595 *, const MethodInfo*))ObjectPool_1__ctor_m21701_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m21703_gshared (ObjectPool_1_t3596 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m21703(__this, method) (( int32_t (*) (ObjectPool_1_t3596 *, const MethodInfo*))ObjectPool_1_get_countAll_m21703_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m21705_gshared (ObjectPool_1_t3596 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m21705(__this, ___value, method) (( void (*) (ObjectPool_1_t3596 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m21705_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m21707_gshared (ObjectPool_1_t3596 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m21707(__this, method) (( int32_t (*) (ObjectPool_1_t3596 *, const MethodInfo*))ObjectPool_1_get_countActive_m21707_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m21709_gshared (ObjectPool_1_t3596 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m21709(__this, method) (( int32_t (*) (ObjectPool_1_t3596 *, const MethodInfo*))ObjectPool_1_get_countInactive_m21709_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m21711_gshared (ObjectPool_1_t3596 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m21711(__this, method) (( Object_t * (*) (ObjectPool_1_t3596 *, const MethodInfo*))ObjectPool_1_Get_m21711_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m21713_gshared (ObjectPool_1_t3596 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m21713(__this, ___element, method) (( void (*) (ObjectPool_1_t3596 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m21713_gshared)(__this, ___element, method)
