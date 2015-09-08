#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t937;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t941;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t971;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m6077(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t937 *, UnityAction_1_t941 *, UnityAction_1_t941 *, const MethodInfo*))ObjectPool_1__ctor_m32436_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countAll()
#define ObjectPool_1_get_countAll_m33761(__this, method) (( int32_t (*) (ObjectPool_1_t937 *, const MethodInfo*))ObjectPool_1_get_countAll_m32438_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m33762(__this, ___value, method) (( void (*) (ObjectPool_1_t937 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m32440_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countActive()
#define ObjectPool_1_get_countActive_m33763(__this, method) (( int32_t (*) (ObjectPool_1_t937 *, const MethodInfo*))ObjectPool_1_get_countActive_m32442_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m33764(__this, method) (( int32_t (*) (ObjectPool_1_t937 *, const MethodInfo*))ObjectPool_1_get_countInactive_m32444_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Get()
#define ObjectPool_1_Get_m6083(__this, method) (( List_1_t971 * (*) (ObjectPool_1_t937 *, const MethodInfo*))ObjectPool_1_Get_m32446_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Release(T)
#define ObjectPool_1_Release_m6085(__this, ___element, method) (( void (*) (ObjectPool_1_t937 *, List_1_t971 *, const MethodInfo*))ObjectPool_1_Release_m32448_gshared)(__this, ___element, method)
