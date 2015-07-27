#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t903;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t904;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t941;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m5572(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t903 *, UnityAction_1_t904 *, UnityAction_1_t904 *, const MethodInfo*))ObjectPool_1__ctor_m22986_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m25428(__this, method) (( int32_t (*) (ObjectPool_1_t903 *, const MethodInfo*))ObjectPool_1_get_countAll_m22988_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m25429(__this, ___value, method) (( void (*) (ObjectPool_1_t903 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m22990_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m25430(__this, method) (( int32_t (*) (ObjectPool_1_t903 *, const MethodInfo*))ObjectPool_1_get_countActive_m22992_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m25431(__this, method) (( int32_t (*) (ObjectPool_1_t903 *, const MethodInfo*))ObjectPool_1_get_countInactive_m22994_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m5573(__this, method) (( List_1_t941 * (*) (ObjectPool_1_t903 *, const MethodInfo*))ObjectPool_1_Get_m22996_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m5574(__this, ___element, method) (( void (*) (ObjectPool_1_t903 *, List_1_t941 *, const MethodInfo*))ObjectPool_1_Release_m22998_gshared)(__this, ___element, method)
