#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t1030;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t1031;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t1064;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m6349(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t1030 *, UnityAction_1_t1031 *, UnityAction_1_t1031 *, const MethodInfo*))ObjectPool_1__ctor_m28194_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m30780(__this, method) (( int32_t (*) (ObjectPool_1_t1030 *, const MethodInfo*))ObjectPool_1_get_countAll_m28196_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m30781(__this, ___value, method) (( void (*) (ObjectPool_1_t1030 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m28198_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m30782(__this, method) (( int32_t (*) (ObjectPool_1_t1030 *, const MethodInfo*))ObjectPool_1_get_countActive_m28200_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m30783(__this, method) (( int32_t (*) (ObjectPool_1_t1030 *, const MethodInfo*))ObjectPool_1_get_countInactive_m28202_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m6350(__this, method) (( List_1_t1064 * (*) (ObjectPool_1_t1030 *, const MethodInfo*))ObjectPool_1_Get_m28204_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m6351(__this, ___element, method) (( void (*) (ObjectPool_1_t1030 *, List_1_t1064 *, const MethodInfo*))ObjectPool_1_Release_m28206_gshared)(__this, ___element, method)
