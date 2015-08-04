#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t811;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t813;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t981;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m5534(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t811 *, UnityAction_1_t813 *, UnityAction_1_t813 *, const MethodInfo*))ObjectPool_1__ctor_m27022_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m27023(__this, method) (( int32_t (*) (ObjectPool_1_t811 *, const MethodInfo*))ObjectPool_1_get_countAll_m27024_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m27025(__this, ___value, method) (( void (*) (ObjectPool_1_t811 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m27026_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m27027(__this, method) (( int32_t (*) (ObjectPool_1_t811 *, const MethodInfo*))ObjectPool_1_get_countActive_m27028_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m27029(__this, method) (( int32_t (*) (ObjectPool_1_t811 *, const MethodInfo*))ObjectPool_1_get_countInactive_m27030_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m27031(__this, method) (( List_1_t981 * (*) (ObjectPool_1_t811 *, const MethodInfo*))ObjectPool_1_Get_m27032_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m27033(__this, ___element, method) (( void (*) (ObjectPool_1_t811 *, List_1_t981 *, const MethodInfo*))ObjectPool_1_Release_m27034_gshared)(__this, ___element, method)
