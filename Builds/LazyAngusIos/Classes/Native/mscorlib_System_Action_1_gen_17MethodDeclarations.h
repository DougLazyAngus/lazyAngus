﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.String>
struct Action_1_t661;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_16MethodDeclarations.h"
#define Action_1__ctor_m18605(__this, ___object, ___method, method) (( void (*) (Action_1_t661 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m18503_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.String>::Invoke(T)
#define Action_1_Invoke_m18606(__this, ___obj, method) (( void (*) (Action_1_t661 *, String_t*, const MethodInfo*))Action_1_Invoke_m18505_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.String>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m18607(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t661 *, String_t*, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m18507_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.String>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m18608(__this, ___result, method) (( void (*) (Action_1_t661 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m18509_gshared)(__this, ___result, method)
