#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t1012;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t1013;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t1050;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m6213(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t1012 *, UnityAction_1_t1013 *, UnityAction_1_t1013 *, const MethodInfo*))ObjectPool_1__ctor_m27862_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m30429(__this, method) (( int32_t (*) (ObjectPool_1_t1012 *, const MethodInfo*))ObjectPool_1_get_countAll_m27864_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m30430(__this, ___value, method) (( void (*) (ObjectPool_1_t1012 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m27866_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m30431(__this, method) (( int32_t (*) (ObjectPool_1_t1012 *, const MethodInfo*))ObjectPool_1_get_countActive_m27868_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m30432(__this, method) (( int32_t (*) (ObjectPool_1_t1012 *, const MethodInfo*))ObjectPool_1_get_countInactive_m27870_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m6214(__this, method) (( List_1_t1050 * (*) (ObjectPool_1_t1012 *, const MethodInfo*))ObjectPool_1_Get_m27872_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m6215(__this, ___element, method) (( void (*) (ObjectPool_1_t1012 *, List_1_t1050 *, const MethodInfo*))ObjectPool_1_Release_m27874_gshared)(__this, ___element, method)
