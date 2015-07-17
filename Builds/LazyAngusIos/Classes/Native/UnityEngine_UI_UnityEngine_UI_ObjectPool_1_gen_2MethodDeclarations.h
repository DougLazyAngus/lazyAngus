#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t905;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t906;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t938;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m5568(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t905 *, UnityAction_1_t906 *, UnityAction_1_t906 *, const MethodInfo*))ObjectPool_1__ctor_m22978_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m25439(__this, method) (( int32_t (*) (ObjectPool_1_t905 *, const MethodInfo*))ObjectPool_1_get_countAll_m22980_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m25440(__this, ___value, method) (( void (*) (ObjectPool_1_t905 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m22982_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m25441(__this, method) (( int32_t (*) (ObjectPool_1_t905 *, const MethodInfo*))ObjectPool_1_get_countActive_m22984_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m25442(__this, method) (( int32_t (*) (ObjectPool_1_t905 *, const MethodInfo*))ObjectPool_1_get_countInactive_m22986_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m5569(__this, method) (( List_1_t938 * (*) (ObjectPool_1_t905 *, const MethodInfo*))ObjectPool_1_Get_m22988_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m5570(__this, ___element, method) (( void (*) (ObjectPool_1_t905 *, List_1_t938 *, const MethodInfo*))ObjectPool_1_Release_m22990_gshared)(__this, ___element, method)
