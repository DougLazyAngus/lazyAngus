#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t955;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t956;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t993;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m5943(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t955 *, UnityAction_1_t956 *, UnityAction_1_t956 *, const MethodInfo*))ObjectPool_1__ctor_m27037_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m29632(__this, method) (( int32_t (*) (ObjectPool_1_t955 *, const MethodInfo*))ObjectPool_1_get_countAll_m27039_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m29633(__this, ___value, method) (( void (*) (ObjectPool_1_t955 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m27041_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m29634(__this, method) (( int32_t (*) (ObjectPool_1_t955 *, const MethodInfo*))ObjectPool_1_get_countActive_m27043_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m29635(__this, method) (( int32_t (*) (ObjectPool_1_t955 *, const MethodInfo*))ObjectPool_1_get_countInactive_m27045_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m5944(__this, method) (( List_1_t993 * (*) (ObjectPool_1_t955 *, const MethodInfo*))ObjectPool_1_Get_m27047_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m5945(__this, ___element, method) (( void (*) (ObjectPool_1_t955 *, List_1_t993 *, const MethodInfo*))ObjectPool_1_Release_m27049_gshared)(__this, ___element, method)
