#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t803;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t804;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t837;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m4676(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t803 *, UnityAction_1_t804 *, UnityAction_1_t804 *, const MethodInfo*))ObjectPool_1__ctor_m21701_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m24162(__this, method) (( int32_t (*) (ObjectPool_1_t803 *, const MethodInfo*))ObjectPool_1_get_countAll_m21703_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m24163(__this, ___value, method) (( void (*) (ObjectPool_1_t803 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m21705_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m24164(__this, method) (( int32_t (*) (ObjectPool_1_t803 *, const MethodInfo*))ObjectPool_1_get_countActive_m21707_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m24165(__this, method) (( int32_t (*) (ObjectPool_1_t803 *, const MethodInfo*))ObjectPool_1_get_countInactive_m21709_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m4677(__this, method) (( List_1_t837 * (*) (ObjectPool_1_t803 *, const MethodInfo*))ObjectPool_1_Get_m21711_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m4678(__this, ___element, method) (( void (*) (ObjectPool_1_t803 *, List_1_t837 *, const MethodInfo*))ObjectPool_1_Release_m21713_gshared)(__this, ___element, method)
