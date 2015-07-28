#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t849;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t852;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t884;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m5577(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t849 *, UnityAction_1_t852 *, UnityAction_1_t852 *, const MethodInfo*))ObjectPool_1__ctor_m26959_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countAll()
#define ObjectPool_1_get_countAll_m28296(__this, method) (( int32_t (*) (ObjectPool_1_t849 *, const MethodInfo*))ObjectPool_1_get_countAll_m26961_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m28297(__this, ___value, method) (( void (*) (ObjectPool_1_t849 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m26963_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countActive()
#define ObjectPool_1_get_countActive_m28298(__this, method) (( int32_t (*) (ObjectPool_1_t849 *, const MethodInfo*))ObjectPool_1_get_countActive_m26965_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m28299(__this, method) (( int32_t (*) (ObjectPool_1_t849 *, const MethodInfo*))ObjectPool_1_get_countInactive_m26967_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Get()
#define ObjectPool_1_Get_m5583(__this, method) (( List_1_t884 * (*) (ObjectPool_1_t849 *, const MethodInfo*))ObjectPool_1_Get_m26969_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Release(T)
#define ObjectPool_1_Release_m5585(__this, ___element, method) (( void (*) (ObjectPool_1_t849 *, List_1_t884 *, const MethodInfo*))ObjectPool_1_Release_m26971_gshared)(__this, ___element, method)
