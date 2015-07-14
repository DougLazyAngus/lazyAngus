#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t751;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t754;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t786;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m4665(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t751 *, UnityAction_1_t754 *, UnityAction_1_t754 *, const MethodInfo*))ObjectPool_1__ctor_m21890_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countAll()
#define ObjectPool_1_get_countAll_m23148(__this, method) (( int32_t (*) (ObjectPool_1_t751 *, const MethodInfo*))ObjectPool_1_get_countAll_m21892_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m23149(__this, ___value, method) (( void (*) (ObjectPool_1_t751 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m21894_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countActive()
#define ObjectPool_1_get_countActive_m23150(__this, method) (( int32_t (*) (ObjectPool_1_t751 *, const MethodInfo*))ObjectPool_1_get_countActive_m21896_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m23151(__this, method) (( int32_t (*) (ObjectPool_1_t751 *, const MethodInfo*))ObjectPool_1_get_countInactive_m21898_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Get()
#define ObjectPool_1_Get_m4671(__this, method) (( List_1_t786 * (*) (ObjectPool_1_t751 *, const MethodInfo*))ObjectPool_1_Get_m21900_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Release(T)
#define ObjectPool_1_Release_m4673(__this, ___element, method) (( void (*) (ObjectPool_1_t751 *, List_1_t786 *, const MethodInfo*))ObjectPool_1_Release_m21902_gshared)(__this, ___element, method)
