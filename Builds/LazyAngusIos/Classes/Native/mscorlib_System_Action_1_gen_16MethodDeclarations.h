#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Uri>
struct Action_1_t1169;
// System.Object
struct Object_t;
// System.Uri
struct Uri_t755;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Uri>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m31435(__this, ___object, ___method, method) (( void (*) (Action_1_t1169 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m23220_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Uri>::Invoke(T)
#define Action_1_Invoke_m31436(__this, ___obj, method) (( void (*) (Action_1_t1169 *, Uri_t755 *, const MethodInfo*))Action_1_Invoke_m23222_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Uri>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m31437(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t1169 *, Uri_t755 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m23224_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Uri>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m31438(__this, ___result, method) (( void (*) (Action_1_t1169 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m23226_gshared)(__this, ___result, method)
