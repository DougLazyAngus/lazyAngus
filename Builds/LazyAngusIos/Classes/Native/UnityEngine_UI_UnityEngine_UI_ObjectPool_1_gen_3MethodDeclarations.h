#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t5696;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t5695;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m27034_gshared (ObjectPool_1_t5696 * __this, UnityAction_1_t5695 * ___actionOnGet, UnityAction_1_t5695 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m27034(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t5696 *, UnityAction_1_t5695 *, UnityAction_1_t5695 *, const MethodInfo*))ObjectPool_1__ctor_m27034_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m27036_gshared (ObjectPool_1_t5696 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m27036(__this, method) (( int32_t (*) (ObjectPool_1_t5696 *, const MethodInfo*))ObjectPool_1_get_countAll_m27036_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m27038_gshared (ObjectPool_1_t5696 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m27038(__this, ___value, method) (( void (*) (ObjectPool_1_t5696 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m27038_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m27040_gshared (ObjectPool_1_t5696 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m27040(__this, method) (( int32_t (*) (ObjectPool_1_t5696 *, const MethodInfo*))ObjectPool_1_get_countActive_m27040_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m27042_gshared (ObjectPool_1_t5696 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m27042(__this, method) (( int32_t (*) (ObjectPool_1_t5696 *, const MethodInfo*))ObjectPool_1_get_countInactive_m27042_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m27044_gshared (ObjectPool_1_t5696 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m27044(__this, method) (( Object_t * (*) (ObjectPool_1_t5696 *, const MethodInfo*))ObjectPool_1_Get_m27044_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m27046_gshared (ObjectPool_1_t5696 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m27046(__this, ___element, method) (( void (*) (ObjectPool_1_t5696 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m27046_gshared)(__this, ___element, method)
