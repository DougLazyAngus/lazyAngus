#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t848;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t849;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t886;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m4984(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t848 *, UnityAction_1_t849 *, UnityAction_1_t849 *, const MethodInfo*))ObjectPool_1__ctor_m21915_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m24357(__this, method) (( int32_t (*) (ObjectPool_1_t848 *, const MethodInfo*))ObjectPool_1_get_countAll_m21917_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m24358(__this, ___value, method) (( void (*) (ObjectPool_1_t848 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m21919_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m24359(__this, method) (( int32_t (*) (ObjectPool_1_t848 *, const MethodInfo*))ObjectPool_1_get_countActive_m21921_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m24360(__this, method) (( int32_t (*) (ObjectPool_1_t848 *, const MethodInfo*))ObjectPool_1_get_countInactive_m21923_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m4985(__this, method) (( List_1_t886 * (*) (ObjectPool_1_t848 *, const MethodInfo*))ObjectPool_1_Get_m21925_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m4986(__this, ___element, method) (( void (*) (ObjectPool_1_t848 *, List_1_t886 *, const MethodInfo*))ObjectPool_1_Release_m21927_gshared)(__this, ___element, method)
