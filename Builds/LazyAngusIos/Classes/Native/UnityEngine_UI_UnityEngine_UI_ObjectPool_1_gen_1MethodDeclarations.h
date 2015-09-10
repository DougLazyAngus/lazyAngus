#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t1038;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t1039;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t1077;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m6420(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t1038 *, UnityAction_1_t1039 *, UnityAction_1_t1039 *, const MethodInfo*))ObjectPool_1__ctor_m32493_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m35065(__this, method) (( int32_t (*) (ObjectPool_1_t1038 *, const MethodInfo*))ObjectPool_1_get_countAll_m32495_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m35066(__this, ___value, method) (( void (*) (ObjectPool_1_t1038 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m32497_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m35067(__this, method) (( int32_t (*) (ObjectPool_1_t1038 *, const MethodInfo*))ObjectPool_1_get_countActive_m32499_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m35068(__this, method) (( int32_t (*) (ObjectPool_1_t1038 *, const MethodInfo*))ObjectPool_1_get_countInactive_m32501_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m6421(__this, method) (( List_1_t1077 * (*) (ObjectPool_1_t1038 *, const MethodInfo*))ObjectPool_1_Get_m32503_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m6422(__this, ___element, method) (( void (*) (ObjectPool_1_t1038 *, List_1_t1077 *, const MethodInfo*))ObjectPool_1_Release_m32505_gshared)(__this, ___element, method)
