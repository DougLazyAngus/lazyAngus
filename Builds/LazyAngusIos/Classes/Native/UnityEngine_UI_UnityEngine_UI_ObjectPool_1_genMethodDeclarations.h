﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t803;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t805;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t973;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m5472(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t803 *, UnityAction_1_t805 *, UnityAction_1_t805 *, const MethodInfo*))ObjectPool_1__ctor_m26959_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m26960(__this, method) (( int32_t (*) (ObjectPool_1_t803 *, const MethodInfo*))ObjectPool_1_get_countAll_m26961_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m26962(__this, ___value, method) (( void (*) (ObjectPool_1_t803 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m26963_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m26964(__this, method) (( int32_t (*) (ObjectPool_1_t803 *, const MethodInfo*))ObjectPool_1_get_countActive_m26965_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m26966(__this, method) (( int32_t (*) (ObjectPool_1_t803 *, const MethodInfo*))ObjectPool_1_get_countInactive_m26967_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m26968(__this, method) (( List_1_t973 * (*) (ObjectPool_1_t803 *, const MethodInfo*))ObjectPool_1_Get_m26969_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m26970(__this, ___element, method) (( void (*) (ObjectPool_1_t803 *, List_1_t973 *, const MethodInfo*))ObjectPool_1_Release_m26971_gshared)(__this, ___element, method)
