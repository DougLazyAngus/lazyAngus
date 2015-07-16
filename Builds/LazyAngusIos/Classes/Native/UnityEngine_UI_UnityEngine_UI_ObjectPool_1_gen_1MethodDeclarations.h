#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t856;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t857;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t894;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m5022(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t856 *, UnityAction_1_t857 *, UnityAction_1_t857 *, const MethodInfo*))ObjectPool_1__ctor_m21956_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m24398(__this, method) (( int32_t (*) (ObjectPool_1_t856 *, const MethodInfo*))ObjectPool_1_get_countAll_m21958_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m24399(__this, ___value, method) (( void (*) (ObjectPool_1_t856 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m21960_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m24400(__this, method) (( int32_t (*) (ObjectPool_1_t856 *, const MethodInfo*))ObjectPool_1_get_countActive_m21962_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m24401(__this, method) (( int32_t (*) (ObjectPool_1_t856 *, const MethodInfo*))ObjectPool_1_get_countInactive_m21964_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m5023(__this, method) (( List_1_t894 * (*) (ObjectPool_1_t856 *, const MethodInfo*))ObjectPool_1_Get_m21966_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m5024(__this, ___element, method) (( void (*) (ObjectPool_1_t856 *, List_1_t894 *, const MethodInfo*))ObjectPool_1_Release_m21968_gshared)(__this, ___element, method)
