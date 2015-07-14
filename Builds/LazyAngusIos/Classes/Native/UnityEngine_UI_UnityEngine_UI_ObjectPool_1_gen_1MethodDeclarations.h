#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t847;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t848;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t885;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m4959(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t847 *, UnityAction_1_t848 *, UnityAction_1_t848 *, const MethodInfo*))ObjectPool_1__ctor_m21890_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m24332(__this, method) (( int32_t (*) (ObjectPool_1_t847 *, const MethodInfo*))ObjectPool_1_get_countAll_m21892_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m24333(__this, ___value, method) (( void (*) (ObjectPool_1_t847 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m21894_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m24334(__this, method) (( int32_t (*) (ObjectPool_1_t847 *, const MethodInfo*))ObjectPool_1_get_countActive_m21896_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m24335(__this, method) (( int32_t (*) (ObjectPool_1_t847 *, const MethodInfo*))ObjectPool_1_get_countInactive_m21898_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m4960(__this, method) (( List_1_t885 * (*) (ObjectPool_1_t847 *, const MethodInfo*))ObjectPool_1_Get_m21900_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m4961(__this, ___element, method) (( void (*) (ObjectPool_1_t847 *, List_1_t885 *, const MethodInfo*))ObjectPool_1_Release_m21902_gshared)(__this, ___element, method)
