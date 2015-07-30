#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t954;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t955;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t987;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m5919(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t954 *, UnityAction_1_t955 *, UnityAction_1_t955 *, const MethodInfo*))ObjectPool_1__ctor_m27006_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m29620(__this, method) (( int32_t (*) (ObjectPool_1_t954 *, const MethodInfo*))ObjectPool_1_get_countAll_m27008_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m29621(__this, ___value, method) (( void (*) (ObjectPool_1_t954 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m27010_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m29622(__this, method) (( int32_t (*) (ObjectPool_1_t954 *, const MethodInfo*))ObjectPool_1_get_countActive_m27012_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m29623(__this, method) (( int32_t (*) (ObjectPool_1_t954 *, const MethodInfo*))ObjectPool_1_get_countInactive_m27014_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m5920(__this, method) (( List_1_t987 * (*) (ObjectPool_1_t954 *, const MethodInfo*))ObjectPool_1_Get_m27016_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m5921(__this, ___element, method) (( void (*) (ObjectPool_1_t954 *, List_1_t987 *, const MethodInfo*))ObjectPool_1_Release_m27018_gshared)(__this, ___element, method)
