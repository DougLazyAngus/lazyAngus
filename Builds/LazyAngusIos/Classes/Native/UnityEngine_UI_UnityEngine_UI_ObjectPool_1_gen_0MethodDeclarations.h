#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t752;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t755;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t787;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m4690(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t752 *, UnityAction_1_t755 *, UnityAction_1_t755 *, const MethodInfo*))ObjectPool_1__ctor_m21915_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countAll()
#define ObjectPool_1_get_countAll_m23173(__this, method) (( int32_t (*) (ObjectPool_1_t752 *, const MethodInfo*))ObjectPool_1_get_countAll_m21917_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m23174(__this, ___value, method) (( void (*) (ObjectPool_1_t752 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m21919_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countActive()
#define ObjectPool_1_get_countActive_m23175(__this, method) (( int32_t (*) (ObjectPool_1_t752 *, const MethodInfo*))ObjectPool_1_get_countActive_m21921_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m23176(__this, method) (( int32_t (*) (ObjectPool_1_t752 *, const MethodInfo*))ObjectPool_1_get_countInactive_m21923_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Get()
#define ObjectPool_1_Get_m4696(__this, method) (( List_1_t787 * (*) (ObjectPool_1_t752 *, const MethodInfo*))ObjectPool_1_Get_m21925_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Release(T)
#define ObjectPool_1_Release_m4698(__this, ___element, method) (( void (*) (ObjectPool_1_t752 *, List_1_t787 *, const MethodInfo*))ObjectPool_1_Release_m21927_gshared)(__this, ___element, method)
