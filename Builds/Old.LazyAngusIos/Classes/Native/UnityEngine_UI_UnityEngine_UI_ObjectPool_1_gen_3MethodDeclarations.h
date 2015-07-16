#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t3639;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t3638;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m21915_gshared (ObjectPool_1_t3639 * __this, UnityAction_1_t3638 * ___actionOnGet, UnityAction_1_t3638 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m21915(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t3639 *, UnityAction_1_t3638 *, UnityAction_1_t3638 *, const MethodInfo*))ObjectPool_1__ctor_m21915_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m21917_gshared (ObjectPool_1_t3639 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m21917(__this, method) (( int32_t (*) (ObjectPool_1_t3639 *, const MethodInfo*))ObjectPool_1_get_countAll_m21917_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m21919_gshared (ObjectPool_1_t3639 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m21919(__this, ___value, method) (( void (*) (ObjectPool_1_t3639 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m21919_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m21921_gshared (ObjectPool_1_t3639 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m21921(__this, method) (( int32_t (*) (ObjectPool_1_t3639 *, const MethodInfo*))ObjectPool_1_get_countActive_m21921_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m21923_gshared (ObjectPool_1_t3639 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m21923(__this, method) (( int32_t (*) (ObjectPool_1_t3639 *, const MethodInfo*))ObjectPool_1_get_countInactive_m21923_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m21925_gshared (ObjectPool_1_t3639 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m21925(__this, method) (( Object_t * (*) (ObjectPool_1_t3639 *, const MethodInfo*))ObjectPool_1_Get_m21925_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m21927_gshared (ObjectPool_1_t3639 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m21927(__this, ___element, method) (( void (*) (ObjectPool_1_t3639 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m21927_gshared)(__this, ___element, method)
