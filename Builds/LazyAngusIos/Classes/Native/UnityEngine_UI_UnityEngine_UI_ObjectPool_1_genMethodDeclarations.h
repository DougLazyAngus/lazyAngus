#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t714;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t716;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t884;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m4622(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t714 *, UnityAction_1_t716 *, UnityAction_1_t716 *, const MethodInfo*))ObjectPool_1__ctor_m21956_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m21957(__this, method) (( int32_t (*) (ObjectPool_1_t714 *, const MethodInfo*))ObjectPool_1_get_countAll_m21958_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m21959(__this, ___value, method) (( void (*) (ObjectPool_1_t714 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m21960_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m21961(__this, method) (( int32_t (*) (ObjectPool_1_t714 *, const MethodInfo*))ObjectPool_1_get_countActive_m21962_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m21963(__this, method) (( int32_t (*) (ObjectPool_1_t714 *, const MethodInfo*))ObjectPool_1_get_countInactive_m21964_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m21965(__this, method) (( List_1_t884 * (*) (ObjectPool_1_t714 *, const MethodInfo*))ObjectPool_1_Get_m21966_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m21967(__this, ___element, method) (( void (*) (ObjectPool_1_t714 *, List_1_t884 *, const MethodInfo*))ObjectPool_1_Release_m21968_gshared)(__this, ___element, method)
