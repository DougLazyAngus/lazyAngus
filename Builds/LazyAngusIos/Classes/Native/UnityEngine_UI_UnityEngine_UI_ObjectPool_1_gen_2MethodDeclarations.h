﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t1015;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t1016;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t1048;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m6217(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t1015 *, UnityAction_1_t1016 *, UnityAction_1_t1016 *, const MethodInfo*))ObjectPool_1__ctor_m27862_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m30448(__this, method) (( int32_t (*) (ObjectPool_1_t1015 *, const MethodInfo*))ObjectPool_1_get_countAll_m27864_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m30449(__this, ___value, method) (( void (*) (ObjectPool_1_t1015 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m27866_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m30450(__this, method) (( int32_t (*) (ObjectPool_1_t1015 *, const MethodInfo*))ObjectPool_1_get_countActive_m27868_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m30451(__this, method) (( int32_t (*) (ObjectPool_1_t1015 *, const MethodInfo*))ObjectPool_1_get_countInactive_m27870_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m6218(__this, method) (( List_1_t1048 * (*) (ObjectPool_1_t1015 *, const MethodInfo*))ObjectPool_1_Get_m27872_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m6219(__this, ___element, method) (( void (*) (ObjectPool_1_t1015 *, List_1_t1048 *, const MethodInfo*))ObjectPool_1_Release_m27874_gshared)(__this, ___element, method)
