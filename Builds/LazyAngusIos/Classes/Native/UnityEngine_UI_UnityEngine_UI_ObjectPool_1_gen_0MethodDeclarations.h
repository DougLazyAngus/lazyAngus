#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t808;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t811;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t843;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m5289(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t808 *, UnityAction_1_t811 *, UnityAction_1_t811 *, const MethodInfo*))ObjectPool_1__ctor_m22993_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countAll()
#define ObjectPool_1_get_countAll_m24251(__this, method) (( int32_t (*) (ObjectPool_1_t808 *, const MethodInfo*))ObjectPool_1_get_countAll_m22995_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m24252(__this, ___value, method) (( void (*) (ObjectPool_1_t808 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m22997_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countActive()
#define ObjectPool_1_get_countActive_m24253(__this, method) (( int32_t (*) (ObjectPool_1_t808 *, const MethodInfo*))ObjectPool_1_get_countActive_m22999_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m24254(__this, method) (( int32_t (*) (ObjectPool_1_t808 *, const MethodInfo*))ObjectPool_1_get_countInactive_m23001_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Get()
#define ObjectPool_1_Get_m5295(__this, method) (( List_1_t843 * (*) (ObjectPool_1_t808 *, const MethodInfo*))ObjectPool_1_Get_m23003_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Release(T)
#define ObjectPool_1_Release_m5297(__this, ___element, method) (( void (*) (ObjectPool_1_t808 *, List_1_t843 *, const MethodInfo*))ObjectPool_1_Release_m23005_gshared)(__this, ___element, method)
