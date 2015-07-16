#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t760;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t763;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t795;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m4728(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t760 *, UnityAction_1_t763 *, UnityAction_1_t763 *, const MethodInfo*))ObjectPool_1__ctor_m21956_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countAll()
#define ObjectPool_1_get_countAll_m23214(__this, method) (( int32_t (*) (ObjectPool_1_t760 *, const MethodInfo*))ObjectPool_1_get_countAll_m21958_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m23215(__this, ___value, method) (( void (*) (ObjectPool_1_t760 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m21960_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countActive()
#define ObjectPool_1_get_countActive_m23216(__this, method) (( int32_t (*) (ObjectPool_1_t760 *, const MethodInfo*))ObjectPool_1_get_countActive_m21962_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m23217(__this, method) (( int32_t (*) (ObjectPool_1_t760 *, const MethodInfo*))ObjectPool_1_get_countInactive_m21964_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Get()
#define ObjectPool_1_Get_m4734(__this, method) (( List_1_t795 * (*) (ObjectPool_1_t760 *, const MethodInfo*))ObjectPool_1_Get_m21966_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Release(T)
#define ObjectPool_1_Release_m4736(__this, ___element, method) (( void (*) (ObjectPool_1_t760 *, List_1_t795 *, const MethodInfo*))ObjectPool_1_Release_m21968_gshared)(__this, ___element, method)
