#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t948;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t949;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t981;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m5871(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t948 *, UnityAction_1_t949 *, UnityAction_1_t949 *, const MethodInfo*))ObjectPool_1__ctor_m26959_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m29573(__this, method) (( int32_t (*) (ObjectPool_1_t948 *, const MethodInfo*))ObjectPool_1_get_countAll_m26961_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m29574(__this, ___value, method) (( void (*) (ObjectPool_1_t948 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m26963_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m29575(__this, method) (( int32_t (*) (ObjectPool_1_t948 *, const MethodInfo*))ObjectPool_1_get_countActive_m26965_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m29576(__this, method) (( int32_t (*) (ObjectPool_1_t948 *, const MethodInfo*))ObjectPool_1_get_countInactive_m26967_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m5872(__this, method) (( List_1_t981 * (*) (ObjectPool_1_t948 *, const MethodInfo*))ObjectPool_1_Get_m26969_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m5873(__this, ___element, method) (( void (*) (ObjectPool_1_t948 *, List_1_t981 *, const MethodInfo*))ObjectPool_1_Release_m26971_gshared)(__this, ___element, method)
