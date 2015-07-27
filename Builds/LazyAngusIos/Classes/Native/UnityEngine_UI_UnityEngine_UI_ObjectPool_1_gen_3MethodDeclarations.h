﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t3714;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t3713;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m22986_gshared (ObjectPool_1_t3714 * __this, UnityAction_1_t3713 * ___actionOnGet, UnityAction_1_t3713 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m22986(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t3714 *, UnityAction_1_t3713 *, UnityAction_1_t3713 *, const MethodInfo*))ObjectPool_1__ctor_m22986_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m22988_gshared (ObjectPool_1_t3714 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m22988(__this, method) (( int32_t (*) (ObjectPool_1_t3714 *, const MethodInfo*))ObjectPool_1_get_countAll_m22988_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m22990_gshared (ObjectPool_1_t3714 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m22990(__this, ___value, method) (( void (*) (ObjectPool_1_t3714 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m22990_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m22992_gshared (ObjectPool_1_t3714 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m22992(__this, method) (( int32_t (*) (ObjectPool_1_t3714 *, const MethodInfo*))ObjectPool_1_get_countActive_m22992_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m22994_gshared (ObjectPool_1_t3714 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m22994(__this, method) (( int32_t (*) (ObjectPool_1_t3714 *, const MethodInfo*))ObjectPool_1_get_countInactive_m22994_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m22996_gshared (ObjectPool_1_t3714 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m22996(__this, method) (( Object_t * (*) (ObjectPool_1_t3714 *, const MethodInfo*))ObjectPool_1_Get_m22996_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m22998_gshared (ObjectPool_1_t3714 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m22998(__this, ___element, method) (( void (*) (ObjectPool_1_t3714 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m22998_gshared)(__this, ___element, method)
