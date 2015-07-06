#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t727;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t730;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t762;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m4522(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t727 *, UnityAction_1_t730 *, UnityAction_1_t730 *, const MethodInfo*))ObjectPool_1__ctor_m21859_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countAll()
#define ObjectPool_1_get_countAll_m23117(__this, method) (( int32_t (*) (ObjectPool_1_t727 *, const MethodInfo*))ObjectPool_1_get_countAll_m21861_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m23118(__this, ___value, method) (( void (*) (ObjectPool_1_t727 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m21863_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countActive()
#define ObjectPool_1_get_countActive_m23119(__this, method) (( int32_t (*) (ObjectPool_1_t727 *, const MethodInfo*))ObjectPool_1_get_countActive_m21865_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m23120(__this, method) (( int32_t (*) (ObjectPool_1_t727 *, const MethodInfo*))ObjectPool_1_get_countInactive_m21867_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Get()
#define ObjectPool_1_Get_m4528(__this, method) (( List_1_t762 * (*) (ObjectPool_1_t727 *, const MethodInfo*))ObjectPool_1_Get_m21869_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Release(T)
#define ObjectPool_1_Release_m4530(__this, ___element, method) (( void (*) (ObjectPool_1_t727 *, List_1_t762 *, const MethodInfo*))ObjectPool_1_Release_m21871_gshared)(__this, ___element, method)
