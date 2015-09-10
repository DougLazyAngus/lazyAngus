#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t944;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t948;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t978;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m6135(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t944 *, UnityAction_1_t948 *, UnityAction_1_t948 *, const MethodInfo*))ObjectPool_1__ctor_m32493_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countAll()
#define ObjectPool_1_get_countAll_m33818(__this, method) (( int32_t (*) (ObjectPool_1_t944 *, const MethodInfo*))ObjectPool_1_get_countAll_m32495_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m33819(__this, ___value, method) (( void (*) (ObjectPool_1_t944 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m32497_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countActive()
#define ObjectPool_1_get_countActive_m33820(__this, method) (( int32_t (*) (ObjectPool_1_t944 *, const MethodInfo*))ObjectPool_1_get_countActive_m32499_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m33821(__this, method) (( int32_t (*) (ObjectPool_1_t944 *, const MethodInfo*))ObjectPool_1_get_countInactive_m32501_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Get()
#define ObjectPool_1_Get_m6141(__this, method) (( List_1_t978 * (*) (ObjectPool_1_t944 *, const MethodInfo*))ObjectPool_1_Get_m32503_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Release(T)
#define ObjectPool_1_Release_m6143(__this, ___element, method) (( void (*) (ObjectPool_1_t944 *, List_1_t978 *, const MethodInfo*))ObjectPool_1_Release_m32505_gshared)(__this, ___element, method)
