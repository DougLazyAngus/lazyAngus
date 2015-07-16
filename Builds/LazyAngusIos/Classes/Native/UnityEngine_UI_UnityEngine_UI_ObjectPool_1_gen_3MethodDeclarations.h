#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t3648;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t3647;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m21956_gshared (ObjectPool_1_t3648 * __this, UnityAction_1_t3647 * ___actionOnGet, UnityAction_1_t3647 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m21956(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t3648 *, UnityAction_1_t3647 *, UnityAction_1_t3647 *, const MethodInfo*))ObjectPool_1__ctor_m21956_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m21958_gshared (ObjectPool_1_t3648 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m21958(__this, method) (( int32_t (*) (ObjectPool_1_t3648 *, const MethodInfo*))ObjectPool_1_get_countAll_m21958_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m21960_gshared (ObjectPool_1_t3648 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m21960(__this, ___value, method) (( void (*) (ObjectPool_1_t3648 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m21960_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m21962_gshared (ObjectPool_1_t3648 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m21962(__this, method) (( int32_t (*) (ObjectPool_1_t3648 *, const MethodInfo*))ObjectPool_1_get_countActive_m21962_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m21964_gshared (ObjectPool_1_t3648 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m21964(__this, method) (( int32_t (*) (ObjectPool_1_t3648 *, const MethodInfo*))ObjectPool_1_get_countInactive_m21964_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m21966_gshared (ObjectPool_1_t3648 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m21966(__this, method) (( Object_t * (*) (ObjectPool_1_t3648 *, const MethodInfo*))ObjectPool_1_Get_m21966_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m21968_gshared (ObjectPool_1_t3648 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m21968(__this, ___element, method) (( void (*) (ObjectPool_1_t3648 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m21968_gshared)(__this, ___element, method)
