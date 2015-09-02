#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t5808;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t5791;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m28194_gshared (ObjectPool_1_t5808 * __this, UnityAction_1_t5791 * ___actionOnGet, UnityAction_1_t5791 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m28194(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t5808 *, UnityAction_1_t5791 *, UnityAction_1_t5791 *, const MethodInfo*))ObjectPool_1__ctor_m28194_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m28196_gshared (ObjectPool_1_t5808 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m28196(__this, method) (( int32_t (*) (ObjectPool_1_t5808 *, const MethodInfo*))ObjectPool_1_get_countAll_m28196_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m28198_gshared (ObjectPool_1_t5808 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m28198(__this, ___value, method) (( void (*) (ObjectPool_1_t5808 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m28198_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m28200_gshared (ObjectPool_1_t5808 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m28200(__this, method) (( int32_t (*) (ObjectPool_1_t5808 *, const MethodInfo*))ObjectPool_1_get_countActive_m28200_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m28202_gshared (ObjectPool_1_t5808 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m28202(__this, method) (( int32_t (*) (ObjectPool_1_t5808 *, const MethodInfo*))ObjectPool_1_get_countInactive_m28202_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m28204_gshared (ObjectPool_1_t5808 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m28204(__this, method) (( Object_t * (*) (ObjectPool_1_t5808 *, const MethodInfo*))ObjectPool_1_Get_m28204_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m28206_gshared (ObjectPool_1_t5808 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m28206(__this, ___element, method) (( void (*) (ObjectPool_1_t5808 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m28206_gshared)(__this, ___element, method)
