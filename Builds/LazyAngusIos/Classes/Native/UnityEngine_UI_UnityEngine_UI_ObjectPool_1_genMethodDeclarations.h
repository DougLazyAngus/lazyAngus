#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t887;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t889;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t1056;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m5973(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t887 *, UnityAction_1_t889 *, UnityAction_1_t889 *, const MethodInfo*))ObjectPool_1__ctor_m32424_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m32425(__this, method) (( int32_t (*) (ObjectPool_1_t887 *, const MethodInfo*))ObjectPool_1_get_countAll_m32426_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m32427(__this, ___value, method) (( void (*) (ObjectPool_1_t887 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m32428_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m32429(__this, method) (( int32_t (*) (ObjectPool_1_t887 *, const MethodInfo*))ObjectPool_1_get_countActive_m32430_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m32431(__this, method) (( int32_t (*) (ObjectPool_1_t887 *, const MethodInfo*))ObjectPool_1_get_countInactive_m32432_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m32433(__this, method) (( List_1_t1056 * (*) (ObjectPool_1_t887 *, const MethodInfo*))ObjectPool_1_Get_m32434_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m32435(__this, ___element, method) (( void (*) (ObjectPool_1_t887 *, List_1_t1056 *, const MethodInfo*))ObjectPool_1_Release_m32436_gshared)(__this, ___element, method)
