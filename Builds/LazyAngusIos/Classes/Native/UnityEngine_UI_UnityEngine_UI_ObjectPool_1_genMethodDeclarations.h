#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t873;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t875;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t1040;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m5824(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t873 *, UnityAction_1_t875 *, UnityAction_1_t875 *, const MethodInfo*))ObjectPool_1__ctor_m27862_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m27863(__this, method) (( int32_t (*) (ObjectPool_1_t873 *, const MethodInfo*))ObjectPool_1_get_countAll_m27864_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m27865(__this, ___value, method) (( void (*) (ObjectPool_1_t873 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m27866_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m27867(__this, method) (( int32_t (*) (ObjectPool_1_t873 *, const MethodInfo*))ObjectPool_1_get_countActive_m27868_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m27869(__this, method) (( int32_t (*) (ObjectPool_1_t873 *, const MethodInfo*))ObjectPool_1_get_countInactive_m27870_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m27871(__this, method) (( List_1_t1040 * (*) (ObjectPool_1_t873 *, const MethodInfo*))ObjectPool_1_Get_m27872_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m27873(__this, ___element, method) (( void (*) (ObjectPool_1_t873 *, List_1_t1040 *, const MethodInfo*))ObjectPool_1_Release_m27874_gshared)(__this, ___element, method)
