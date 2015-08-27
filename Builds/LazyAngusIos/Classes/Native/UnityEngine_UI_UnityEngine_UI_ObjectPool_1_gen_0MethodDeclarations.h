#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t919;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t922;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t952;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m5928(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t919 *, UnityAction_1_t922 *, UnityAction_1_t922 *, const MethodInfo*))ObjectPool_1__ctor_m27862_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countAll()
#define ObjectPool_1_get_countAll_m29184(__this, method) (( int32_t (*) (ObjectPool_1_t919 *, const MethodInfo*))ObjectPool_1_get_countAll_m27864_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m29185(__this, ___value, method) (( void (*) (ObjectPool_1_t919 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m27866_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countActive()
#define ObjectPool_1_get_countActive_m29186(__this, method) (( int32_t (*) (ObjectPool_1_t919 *, const MethodInfo*))ObjectPool_1_get_countActive_m27868_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m29187(__this, method) (( int32_t (*) (ObjectPool_1_t919 *, const MethodInfo*))ObjectPool_1_get_countInactive_m27870_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Get()
#define ObjectPool_1_Get_m5934(__this, method) (( List_1_t952 * (*) (ObjectPool_1_t919 *, const MethodInfo*))ObjectPool_1_Get_m27872_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Release(T)
#define ObjectPool_1_Release_m5936(__this, ___element, method) (( void (*) (ObjectPool_1_t919 *, List_1_t952 *, const MethodInfo*))ObjectPool_1_Release_m27874_gshared)(__this, ___element, method)
