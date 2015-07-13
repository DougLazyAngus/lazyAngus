﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Component
struct Component_t578;
// UnityEngine.Transform
struct Transform_t323;
// UnityEngine.GameObject
struct GameObject_t284;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t859;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Component::.ctor()
extern "C" void Component__ctor_m5718 (Component_t578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" Transform_t323 * Component_get_transform_m2739 (Component_t578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t284 * Component_get_gameObject_m2533 (Component_t578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern "C" Component_t578 * Component_GetComponent_m4806 (Component_t578 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern "C" void Component_GetComponentFastPath_m5719 (Component_t578 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
extern "C" void Component_GetComponentsForListInternal_m5720 (Component_t578 * __this, Type_t * ___searchType, Object_t * ___resultList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void Component_GetComponents_m4525 (Component_t578 * __this, Type_t * ___type, List_1_t859 * ___results, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Component::get_tag()
extern "C" String_t* Component_get_tag_m2891 (Component_t578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;