#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t1041;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t1042;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t1075;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m6424(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t1041 *, UnityAction_1_t1042 *, UnityAction_1_t1042 *, const MethodInfo*))ObjectPool_1__ctor_m32493_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m35084(__this, method) (( int32_t (*) (ObjectPool_1_t1041 *, const MethodInfo*))ObjectPool_1_get_countAll_m32495_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m35085(__this, ___value, method) (( void (*) (ObjectPool_1_t1041 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m32497_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m35086(__this, method) (( int32_t (*) (ObjectPool_1_t1041 *, const MethodInfo*))ObjectPool_1_get_countActive_m32499_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m35087(__this, method) (( int32_t (*) (ObjectPool_1_t1041 *, const MethodInfo*))ObjectPool_1_get_countInactive_m32501_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m6425(__this, method) (( List_1_t1075 * (*) (ObjectPool_1_t1041 *, const MethodInfo*))ObjectPool_1_Get_m32503_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m6426(__this, ___element, method) (( void (*) (ObjectPool_1_t1041 *, List_1_t1075 *, const MethodInfo*))ObjectPool_1_Release_m32505_gshared)(__this, ___element, method)
