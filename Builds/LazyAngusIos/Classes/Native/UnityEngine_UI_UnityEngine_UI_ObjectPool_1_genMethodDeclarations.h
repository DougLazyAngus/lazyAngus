#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t762;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t764;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t932;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m5180(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t762 *, UnityAction_1_t764 *, UnityAction_1_t764 *, const MethodInfo*))ObjectPool_1__ctor_m22989_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m22990(__this, method) (( int32_t (*) (ObjectPool_1_t762 *, const MethodInfo*))ObjectPool_1_get_countAll_m22991_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m22992(__this, ___value, method) (( void (*) (ObjectPool_1_t762 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m22993_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m22994(__this, method) (( int32_t (*) (ObjectPool_1_t762 *, const MethodInfo*))ObjectPool_1_get_countActive_m22995_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m22996(__this, method) (( int32_t (*) (ObjectPool_1_t762 *, const MethodInfo*))ObjectPool_1_get_countInactive_m22997_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m22998(__this, method) (( List_1_t932 * (*) (ObjectPool_1_t762 *, const MethodInfo*))ObjectPool_1_Get_m22999_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m23000(__this, ___element, method) (( void (*) (ObjectPool_1_t762 *, List_1_t932 *, const MethodInfo*))ObjectPool_1_Release_m23001_gshared)(__this, ___element, method)
