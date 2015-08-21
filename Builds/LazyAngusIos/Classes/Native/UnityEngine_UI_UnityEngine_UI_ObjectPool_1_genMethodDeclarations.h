#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t870;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t872;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t1037;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m5792(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t870 *, UnityAction_1_t872 *, UnityAction_1_t872 *, const MethodInfo*))ObjectPool_1__ctor_m27830_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m27831(__this, method) (( int32_t (*) (ObjectPool_1_t870 *, const MethodInfo*))ObjectPool_1_get_countAll_m27832_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m27833(__this, ___value, method) (( void (*) (ObjectPool_1_t870 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m27834_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m27835(__this, method) (( int32_t (*) (ObjectPool_1_t870 *, const MethodInfo*))ObjectPool_1_get_countActive_m27836_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m27837(__this, method) (( int32_t (*) (ObjectPool_1_t870 *, const MethodInfo*))ObjectPool_1_get_countInactive_m27838_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m27839(__this, method) (( List_1_t1037 * (*) (ObjectPool_1_t870 *, const MethodInfo*))ObjectPool_1_Get_m27840_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m27841(__this, ___element, method) (( void (*) (ObjectPool_1_t870 *, List_1_t1037 *, const MethodInfo*))ObjectPool_1_Release_m27842_gshared)(__this, ___element, method)
