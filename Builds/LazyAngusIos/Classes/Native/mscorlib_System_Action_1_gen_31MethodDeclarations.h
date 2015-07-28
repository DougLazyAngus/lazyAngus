﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Linq.Expressions.ElementInit>
struct Action_1_t3312;
// System.Object
struct Object_t;
// System.Linq.Expressions.ElementInit
struct ElementInit_t3266;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Linq.Expressions.ElementInit>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m11498(__this, ___object, ___method, method) (( void (*) (Action_1_t3312 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m22912_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Linq.Expressions.ElementInit>::Invoke(T)
#define Action_1_Invoke_m62405(__this, ___obj, method) (( void (*) (Action_1_t3312 *, ElementInit_t3266 *, const MethodInfo*))Action_1_Invoke_m22914_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Linq.Expressions.ElementInit>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m62406(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t3312 *, ElementInit_t3266 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m22916_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Linq.Expressions.ElementInit>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m62407(__this, ___result, method) (( void (*) (Action_1_t3312 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m22918_gshared)(__this, ___result, method)