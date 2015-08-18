#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t1011;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t1012;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t1049;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m6191(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t1011 *, UnityAction_1_t1012 *, UnityAction_1_t1012 *, const MethodInfo*))ObjectPool_1__ctor_m27738_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m30305(__this, method) (( int32_t (*) (ObjectPool_1_t1011 *, const MethodInfo*))ObjectPool_1_get_countAll_m27740_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m30306(__this, ___value, method) (( void (*) (ObjectPool_1_t1011 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m27742_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m30307(__this, method) (( int32_t (*) (ObjectPool_1_t1011 *, const MethodInfo*))ObjectPool_1_get_countActive_m27744_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m30308(__this, method) (( int32_t (*) (ObjectPool_1_t1011 *, const MethodInfo*))ObjectPool_1_get_countInactive_m27746_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m6192(__this, method) (( List_1_t1049 * (*) (ObjectPool_1_t1011 *, const MethodInfo*))ObjectPool_1_Get_m27748_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m6193(__this, ___element, method) (( void (*) (ObjectPool_1_t1011 *, List_1_t1049 *, const MethodInfo*))ObjectPool_1_Release_m27750_gshared)(__this, ___element, method)
