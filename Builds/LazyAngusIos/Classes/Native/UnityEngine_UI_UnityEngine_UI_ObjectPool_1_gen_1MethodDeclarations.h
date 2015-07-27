#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t904;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t905;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t942;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m5575(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t904 *, UnityAction_1_t905 *, UnityAction_1_t905 *, const MethodInfo*))ObjectPool_1__ctor_m22989_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m25431(__this, method) (( int32_t (*) (ObjectPool_1_t904 *, const MethodInfo*))ObjectPool_1_get_countAll_m22991_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m25432(__this, ___value, method) (( void (*) (ObjectPool_1_t904 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m22993_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m25433(__this, method) (( int32_t (*) (ObjectPool_1_t904 *, const MethodInfo*))ObjectPool_1_get_countActive_m22995_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m25434(__this, method) (( int32_t (*) (ObjectPool_1_t904 *, const MethodInfo*))ObjectPool_1_get_countInactive_m22997_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m5576(__this, method) (( List_1_t942 * (*) (ObjectPool_1_t904 *, const MethodInfo*))ObjectPool_1_Get_m22999_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m5577(__this, ___element, method) (( void (*) (ObjectPool_1_t904 *, List_1_t942 *, const MethodInfo*))ObjectPool_1_Release_m23001_gshared)(__this, ___element, method)
