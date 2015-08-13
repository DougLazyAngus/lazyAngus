#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t918;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t921;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t951;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m5906(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t918 *, UnityAction_1_t921 *, UnityAction_1_t921 *, const MethodInfo*))ObjectPool_1__ctor_m27741_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countAll()
#define ObjectPool_1_get_countAll_m29063(__this, method) (( int32_t (*) (ObjectPool_1_t918 *, const MethodInfo*))ObjectPool_1_get_countAll_m27743_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m29064(__this, ___value, method) (( void (*) (ObjectPool_1_t918 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m27745_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countActive()
#define ObjectPool_1_get_countActive_m29065(__this, method) (( int32_t (*) (ObjectPool_1_t918 *, const MethodInfo*))ObjectPool_1_get_countActive_m27747_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m29066(__this, method) (( int32_t (*) (ObjectPool_1_t918 *, const MethodInfo*))ObjectPool_1_get_countInactive_m27749_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Get()
#define ObjectPool_1_Get_m5912(__this, method) (( List_1_t951 * (*) (ObjectPool_1_t918 *, const MethodInfo*))ObjectPool_1_Get_m27751_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Release(T)
#define ObjectPool_1_Release_m5914(__this, ___element, method) (( void (*) (ObjectPool_1_t918 *, List_1_t951 *, const MethodInfo*))ObjectPool_1_Release_m27753_gshared)(__this, ___element, method)
