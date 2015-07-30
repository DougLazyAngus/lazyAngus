#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t855;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t858;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t890;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m5626(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t855 *, UnityAction_1_t858 *, UnityAction_1_t858 *, const MethodInfo*))ObjectPool_1__ctor_m27006_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countAll()
#define ObjectPool_1_get_countAll_m28343(__this, method) (( int32_t (*) (ObjectPool_1_t855 *, const MethodInfo*))ObjectPool_1_get_countAll_m27008_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m28344(__this, ___value, method) (( void (*) (ObjectPool_1_t855 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m27010_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countActive()
#define ObjectPool_1_get_countActive_m28345(__this, method) (( int32_t (*) (ObjectPool_1_t855 *, const MethodInfo*))ObjectPool_1_get_countActive_m27012_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m28346(__this, method) (( int32_t (*) (ObjectPool_1_t855 *, const MethodInfo*))ObjectPool_1_get_countInactive_m27014_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Get()
#define ObjectPool_1_Get_m5632(__this, method) (( List_1_t890 * (*) (ObjectPool_1_t855 *, const MethodInfo*))ObjectPool_1_Get_m27016_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Release(T)
#define ObjectPool_1_Release_m5634(__this, ___element, method) (( void (*) (ObjectPool_1_t855 *, List_1_t890 *, const MethodInfo*))ObjectPool_1_Release_m27018_gshared)(__this, ___element, method)
