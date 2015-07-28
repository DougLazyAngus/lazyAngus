#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t945;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t946;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t983;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m5867(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t945 *, UnityAction_1_t946 *, UnityAction_1_t946 *, const MethodInfo*))ObjectPool_1__ctor_m26959_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m29554(__this, method) (( int32_t (*) (ObjectPool_1_t945 *, const MethodInfo*))ObjectPool_1_get_countAll_m26961_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m29555(__this, ___value, method) (( void (*) (ObjectPool_1_t945 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m26963_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m29556(__this, method) (( int32_t (*) (ObjectPool_1_t945 *, const MethodInfo*))ObjectPool_1_get_countActive_m26965_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m29557(__this, method) (( int32_t (*) (ObjectPool_1_t945 *, const MethodInfo*))ObjectPool_1_get_countInactive_m26967_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m5868(__this, method) (( List_1_t983 * (*) (ObjectPool_1_t945 *, const MethodInfo*))ObjectPool_1_Get_m26969_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m5869(__this, ___element, method) (( void (*) (ObjectPool_1_t945 *, List_1_t983 *, const MethodInfo*))ObjectPool_1_Release_m26971_gshared)(__this, ___element, method)
