#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t1031;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t1032;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t1065;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m6366(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t1031 *, UnityAction_1_t1032 *, UnityAction_1_t1032 *, const MethodInfo*))ObjectPool_1__ctor_m32424_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m35015(__this, method) (( int32_t (*) (ObjectPool_1_t1031 *, const MethodInfo*))ObjectPool_1_get_countAll_m32426_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m35016(__this, ___value, method) (( void (*) (ObjectPool_1_t1031 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m32428_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m35017(__this, method) (( int32_t (*) (ObjectPool_1_t1031 *, const MethodInfo*))ObjectPool_1_get_countActive_m32430_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m35018(__this, method) (( int32_t (*) (ObjectPool_1_t1031 *, const MethodInfo*))ObjectPool_1_get_countInactive_m32432_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m6367(__this, method) (( List_1_t1065 * (*) (ObjectPool_1_t1031 *, const MethodInfo*))ObjectPool_1_Get_m32434_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m6368(__this, ___element, method) (( void (*) (ObjectPool_1_t1031 *, List_1_t1065 *, const MethodInfo*))ObjectPool_1_Release_m32436_gshared)(__this, ___element, method)
