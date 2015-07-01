#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t658;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t660;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t828;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m4266(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t658 *, UnityAction_1_t660 *, UnityAction_1_t660 *, const MethodInfo*))ObjectPool_1__ctor_m21701_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m21702(__this, method) (( int32_t (*) (ObjectPool_1_t658 *, const MethodInfo*))ObjectPool_1_get_countAll_m21703_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m21704(__this, ___value, method) (( void (*) (ObjectPool_1_t658 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m21705_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m21706(__this, method) (( int32_t (*) (ObjectPool_1_t658 *, const MethodInfo*))ObjectPool_1_get_countActive_m21707_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m21708(__this, method) (( int32_t (*) (ObjectPool_1_t658 *, const MethodInfo*))ObjectPool_1_get_countInactive_m21709_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m21710(__this, method) (( List_1_t828 * (*) (ObjectPool_1_t658 *, const MethodInfo*))ObjectPool_1_Get_m21711_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m21712(__this, ___element, method) (( void (*) (ObjectPool_1_t658 *, List_1_t828 *, const MethodInfo*))ObjectPool_1_Release_m21713_gshared)(__this, ___element, method)
