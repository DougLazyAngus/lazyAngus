#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t890;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t892;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t1059;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m5973(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t890 *, UnityAction_1_t892 *, UnityAction_1_t892 *, const MethodInfo*))ObjectPool_1__ctor_m32436_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m32437(__this, method) (( int32_t (*) (ObjectPool_1_t890 *, const MethodInfo*))ObjectPool_1_get_countAll_m32438_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m32439(__this, ___value, method) (( void (*) (ObjectPool_1_t890 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m32440_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m32441(__this, method) (( int32_t (*) (ObjectPool_1_t890 *, const MethodInfo*))ObjectPool_1_get_countActive_m32442_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m32443(__this, method) (( int32_t (*) (ObjectPool_1_t890 *, const MethodInfo*))ObjectPool_1_get_countInactive_m32444_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m32445(__this, method) (( List_1_t1059 * (*) (ObjectPool_1_t890 *, const MethodInfo*))ObjectPool_1_Get_m32446_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m32447(__this, ___element, method) (( void (*) (ObjectPool_1_t890 *, List_1_t1059 *, const MethodInfo*))ObjectPool_1_Release_m32448_gshared)(__this, ___element, method)
