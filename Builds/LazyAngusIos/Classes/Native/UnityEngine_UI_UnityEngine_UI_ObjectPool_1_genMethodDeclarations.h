#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t761;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t763;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t931;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m5177(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t761 *, UnityAction_1_t763 *, UnityAction_1_t763 *, const MethodInfo*))ObjectPool_1__ctor_m22986_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m22987(__this, method) (( int32_t (*) (ObjectPool_1_t761 *, const MethodInfo*))ObjectPool_1_get_countAll_m22988_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m22989(__this, ___value, method) (( void (*) (ObjectPool_1_t761 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m22990_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m22991(__this, method) (( int32_t (*) (ObjectPool_1_t761 *, const MethodInfo*))ObjectPool_1_get_countActive_m22992_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m22993(__this, method) (( int32_t (*) (ObjectPool_1_t761 *, const MethodInfo*))ObjectPool_1_get_countInactive_m22994_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m22995(__this, method) (( List_1_t931 * (*) (ObjectPool_1_t761 *, const MethodInfo*))ObjectPool_1_Get_m22996_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m22997(__this, ___element, method) (( void (*) (ObjectPool_1_t761 *, List_1_t931 *, const MethodInfo*))ObjectPool_1_Release_m22998_gshared)(__this, ___element, method)
