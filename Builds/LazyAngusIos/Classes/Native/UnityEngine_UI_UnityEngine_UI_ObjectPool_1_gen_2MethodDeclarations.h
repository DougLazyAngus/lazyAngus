#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t826;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t827;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t859;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m4822(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t826 *, UnityAction_1_t827 *, UnityAction_1_t827 *, const MethodInfo*))ObjectPool_1__ctor_m21859_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m24320(__this, method) (( int32_t (*) (ObjectPool_1_t826 *, const MethodInfo*))ObjectPool_1_get_countAll_m21861_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m24321(__this, ___value, method) (( void (*) (ObjectPool_1_t826 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m21863_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m24322(__this, method) (( int32_t (*) (ObjectPool_1_t826 *, const MethodInfo*))ObjectPool_1_get_countActive_m21865_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m24323(__this, method) (( int32_t (*) (ObjectPool_1_t826 *, const MethodInfo*))ObjectPool_1_get_countInactive_m21867_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m4823(__this, method) (( List_1_t859 * (*) (ObjectPool_1_t826 *, const MethodInfo*))ObjectPool_1_Get_m21869_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m4824(__this, ___element, method) (( void (*) (ObjectPool_1_t826 *, List_1_t859 *, const MethodInfo*))ObjectPool_1_Release_m21871_gshared)(__this, ___element, method)
