#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t851;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t852;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t884;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m4988(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t851 *, UnityAction_1_t852 *, UnityAction_1_t852 *, const MethodInfo*))ObjectPool_1__ctor_m21915_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m24376(__this, method) (( int32_t (*) (ObjectPool_1_t851 *, const MethodInfo*))ObjectPool_1_get_countAll_m21917_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m24377(__this, ___value, method) (( void (*) (ObjectPool_1_t851 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m21919_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m24378(__this, method) (( int32_t (*) (ObjectPool_1_t851 *, const MethodInfo*))ObjectPool_1_get_countActive_m21921_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m24379(__this, method) (( int32_t (*) (ObjectPool_1_t851 *, const MethodInfo*))ObjectPool_1_get_countInactive_m21923_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m4989(__this, method) (( List_1_t884 * (*) (ObjectPool_1_t851 *, const MethodInfo*))ObjectPool_1_Get_m21925_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m4990(__this, ___element, method) (( void (*) (ObjectPool_1_t851 *, List_1_t884 *, const MethodInfo*))ObjectPool_1_Release_m21927_gshared)(__this, ___element, method)
