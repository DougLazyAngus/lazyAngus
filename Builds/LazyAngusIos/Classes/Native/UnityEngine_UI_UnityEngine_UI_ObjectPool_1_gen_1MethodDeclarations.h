#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t800;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t801;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t839;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m4672(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t800 *, UnityAction_1_t801 *, UnityAction_1_t801 *, const MethodInfo*))ObjectPool_1__ctor_m21701_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m24143(__this, method) (( int32_t (*) (ObjectPool_1_t800 *, const MethodInfo*))ObjectPool_1_get_countAll_m21703_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m24144(__this, ___value, method) (( void (*) (ObjectPool_1_t800 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m21705_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m24145(__this, method) (( int32_t (*) (ObjectPool_1_t800 *, const MethodInfo*))ObjectPool_1_get_countActive_m21707_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m24146(__this, method) (( int32_t (*) (ObjectPool_1_t800 *, const MethodInfo*))ObjectPool_1_get_countInactive_m21709_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m4673(__this, method) (( List_1_t839 * (*) (ObjectPool_1_t800 *, const MethodInfo*))ObjectPool_1_Get_m21711_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m4674(__this, ___element, method) (( void (*) (ObjectPool_1_t800 *, List_1_t839 *, const MethodInfo*))ObjectPool_1_Release_m21713_gshared)(__this, ___element, method)
