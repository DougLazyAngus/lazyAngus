#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t954;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t955;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t992;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m5940(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t954 *, UnityAction_1_t955 *, UnityAction_1_t955 *, const MethodInfo*))ObjectPool_1__ctor_m27034_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m29629(__this, method) (( int32_t (*) (ObjectPool_1_t954 *, const MethodInfo*))ObjectPool_1_get_countAll_m27036_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m29630(__this, ___value, method) (( void (*) (ObjectPool_1_t954 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m27038_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m29631(__this, method) (( int32_t (*) (ObjectPool_1_t954 *, const MethodInfo*))ObjectPool_1_get_countActive_m27040_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m29632(__this, method) (( int32_t (*) (ObjectPool_1_t954 *, const MethodInfo*))ObjectPool_1_get_countInactive_m27042_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m5941(__this, method) (( List_1_t992 * (*) (ObjectPool_1_t954 *, const MethodInfo*))ObjectPool_1_Get_m27044_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m5942(__this, ___element, method) (( void (*) (ObjectPool_1_t954 *, List_1_t992 *, const MethodInfo*))ObjectPool_1_Release_m27046_gshared)(__this, ___element, method)
