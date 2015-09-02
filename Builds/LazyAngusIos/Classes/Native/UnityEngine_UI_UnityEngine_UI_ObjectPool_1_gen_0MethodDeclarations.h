#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t933;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t937;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t967;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m6060(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t933 *, UnityAction_1_t937 *, UnityAction_1_t937 *, const MethodInfo*))ObjectPool_1__ctor_m28194_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countAll()
#define ObjectPool_1_get_countAll_m29516(__this, method) (( int32_t (*) (ObjectPool_1_t933 *, const MethodInfo*))ObjectPool_1_get_countAll_m28196_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m29517(__this, ___value, method) (( void (*) (ObjectPool_1_t933 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m28198_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countActive()
#define ObjectPool_1_get_countActive_m29518(__this, method) (( int32_t (*) (ObjectPool_1_t933 *, const MethodInfo*))ObjectPool_1_get_countActive_m28200_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m29519(__this, method) (( int32_t (*) (ObjectPool_1_t933 *, const MethodInfo*))ObjectPool_1_get_countInactive_m28202_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Get()
#define ObjectPool_1_Get_m6066(__this, method) (( List_1_t967 * (*) (ObjectPool_1_t933 *, const MethodInfo*))ObjectPool_1_Get_m28204_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Release(T)
#define ObjectPool_1_Release_m6068(__this, ___element, method) (( void (*) (ObjectPool_1_t933 *, List_1_t967 *, const MethodInfo*))ObjectPool_1_Release_m28206_gshared)(__this, ___element, method)
