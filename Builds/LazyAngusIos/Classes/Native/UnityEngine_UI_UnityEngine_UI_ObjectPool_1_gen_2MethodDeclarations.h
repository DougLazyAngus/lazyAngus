#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t955;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t956;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t988;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m5932(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t955 *, UnityAction_1_t956 *, UnityAction_1_t956 *, const MethodInfo*))ObjectPool_1__ctor_m27022_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m29636(__this, method) (( int32_t (*) (ObjectPool_1_t955 *, const MethodInfo*))ObjectPool_1_get_countAll_m27024_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m29637(__this, ___value, method) (( void (*) (ObjectPool_1_t955 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m27026_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m29638(__this, method) (( int32_t (*) (ObjectPool_1_t955 *, const MethodInfo*))ObjectPool_1_get_countActive_m27028_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m29639(__this, method) (( int32_t (*) (ObjectPool_1_t955 *, const MethodInfo*))ObjectPool_1_get_countInactive_m27030_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m5933(__this, method) (( List_1_t988 * (*) (ObjectPool_1_t955 *, const MethodInfo*))ObjectPool_1_Get_m27032_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m5934(__this, ___element, method) (( void (*) (ObjectPool_1_t955 *, List_1_t988 *, const MethodInfo*))ObjectPool_1_Release_m27034_gshared)(__this, ___element, method)
