#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t886;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t888;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t1055;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m5960(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t886 *, UnityAction_1_t888 *, UnityAction_1_t888 *, const MethodInfo*))ObjectPool_1__ctor_m32411_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m32412(__this, method) (( int32_t (*) (ObjectPool_1_t886 *, const MethodInfo*))ObjectPool_1_get_countAll_m32413_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m32414(__this, ___value, method) (( void (*) (ObjectPool_1_t886 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m32415_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m32416(__this, method) (( int32_t (*) (ObjectPool_1_t886 *, const MethodInfo*))ObjectPool_1_get_countActive_m32417_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m32418(__this, method) (( int32_t (*) (ObjectPool_1_t886 *, const MethodInfo*))ObjectPool_1_get_countInactive_m32419_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m32420(__this, method) (( List_1_t1055 * (*) (ObjectPool_1_t886 *, const MethodInfo*))ObjectPool_1_Get_m32421_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m32422(__this, ___element, method) (( void (*) (ObjectPool_1_t886 *, List_1_t1055 *, const MethodInfo*))ObjectPool_1_Release_m32423_gshared)(__this, ___element, method)
