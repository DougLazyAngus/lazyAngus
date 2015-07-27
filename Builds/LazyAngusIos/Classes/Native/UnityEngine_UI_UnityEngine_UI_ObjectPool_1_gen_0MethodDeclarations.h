#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t807;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t810;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t842;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m5282(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t807 *, UnityAction_1_t810 *, UnityAction_1_t810 *, const MethodInfo*))ObjectPool_1__ctor_m22986_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countAll()
#define ObjectPool_1_get_countAll_m24244(__this, method) (( int32_t (*) (ObjectPool_1_t807 *, const MethodInfo*))ObjectPool_1_get_countAll_m22988_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m24245(__this, ___value, method) (( void (*) (ObjectPool_1_t807 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m22990_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countActive()
#define ObjectPool_1_get_countActive_m24246(__this, method) (( int32_t (*) (ObjectPool_1_t807 *, const MethodInfo*))ObjectPool_1_get_countActive_m22992_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m24247(__this, method) (( int32_t (*) (ObjectPool_1_t807 *, const MethodInfo*))ObjectPool_1_get_countInactive_m22994_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Get()
#define ObjectPool_1_Get_m5288(__this, method) (( List_1_t842 * (*) (ObjectPool_1_t807 *, const MethodInfo*))ObjectPool_1_Get_m22996_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Release(T)
#define ObjectPool_1_Release_m5290(__this, ___element, method) (( void (*) (ObjectPool_1_t807 *, List_1_t842 *, const MethodInfo*))ObjectPool_1_Release_m22998_gshared)(__this, ___element, method)
