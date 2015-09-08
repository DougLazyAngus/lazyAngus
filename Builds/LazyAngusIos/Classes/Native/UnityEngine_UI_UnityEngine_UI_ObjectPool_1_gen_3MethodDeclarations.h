#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t6342;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t6325;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m32424_gshared (ObjectPool_1_t6342 * __this, UnityAction_1_t6325 * ___actionOnGet, UnityAction_1_t6325 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m32424(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t6342 *, UnityAction_1_t6325 *, UnityAction_1_t6325 *, const MethodInfo*))ObjectPool_1__ctor_m32424_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m32426_gshared (ObjectPool_1_t6342 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m32426(__this, method) (( int32_t (*) (ObjectPool_1_t6342 *, const MethodInfo*))ObjectPool_1_get_countAll_m32426_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m32428_gshared (ObjectPool_1_t6342 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m32428(__this, ___value, method) (( void (*) (ObjectPool_1_t6342 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m32428_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m32430_gshared (ObjectPool_1_t6342 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m32430(__this, method) (( int32_t (*) (ObjectPool_1_t6342 *, const MethodInfo*))ObjectPool_1_get_countActive_m32430_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m32432_gshared (ObjectPool_1_t6342 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m32432(__this, method) (( int32_t (*) (ObjectPool_1_t6342 *, const MethodInfo*))ObjectPool_1_get_countInactive_m32432_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m32434_gshared (ObjectPool_1_t6342 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m32434(__this, method) (( Object_t * (*) (ObjectPool_1_t6342 *, const MethodInfo*))ObjectPool_1_Get_m32434_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m32436_gshared (ObjectPool_1_t6342 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m32436(__this, ___element, method) (( void (*) (ObjectPool_1_t6342 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m32436_gshared)(__this, ___element, method)
