#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t859;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t860;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t892;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m5026(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t859 *, UnityAction_1_t860 *, UnityAction_1_t860 *, const MethodInfo*))ObjectPool_1__ctor_m21956_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m24417(__this, method) (( int32_t (*) (ObjectPool_1_t859 *, const MethodInfo*))ObjectPool_1_get_countAll_m21958_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m24418(__this, ___value, method) (( void (*) (ObjectPool_1_t859 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m21960_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m24419(__this, method) (( int32_t (*) (ObjectPool_1_t859 *, const MethodInfo*))ObjectPool_1_get_countActive_m21962_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m24420(__this, method) (( int32_t (*) (ObjectPool_1_t859 *, const MethodInfo*))ObjectPool_1_get_countInactive_m21964_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m5027(__this, method) (( List_1_t892 * (*) (ObjectPool_1_t859 *, const MethodInfo*))ObjectPool_1_Get_m21966_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m5028(__this, ___element, method) (( void (*) (ObjectPool_1_t859 *, List_1_t892 *, const MethodInfo*))ObjectPool_1_Release_m21968_gshared)(__this, ___element, method)
