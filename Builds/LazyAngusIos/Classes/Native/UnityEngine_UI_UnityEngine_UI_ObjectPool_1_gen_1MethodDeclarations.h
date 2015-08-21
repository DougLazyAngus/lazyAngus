#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t1009;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t1010;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t1047;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m6181(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t1009 *, UnityAction_1_t1010 *, UnityAction_1_t1010 *, const MethodInfo*))ObjectPool_1__ctor_m27830_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m30397(__this, method) (( int32_t (*) (ObjectPool_1_t1009 *, const MethodInfo*))ObjectPool_1_get_countAll_m27832_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m30398(__this, ___value, method) (( void (*) (ObjectPool_1_t1009 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m27834_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m30399(__this, method) (( int32_t (*) (ObjectPool_1_t1009 *, const MethodInfo*))ObjectPool_1_get_countActive_m27836_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m30400(__this, method) (( int32_t (*) (ObjectPool_1_t1009 *, const MethodInfo*))ObjectPool_1_get_countInactive_m27838_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m6182(__this, method) (( List_1_t1047 * (*) (ObjectPool_1_t1009 *, const MethodInfo*))ObjectPool_1_Get_m27840_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m6183(__this, ___element, method) (( void (*) (ObjectPool_1_t1009 *, List_1_t1047 *, const MethodInfo*))ObjectPool_1_Release_m27842_gshared)(__this, ___element, method)
