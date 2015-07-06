#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.String>
struct Action_1_t629;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_16MethodDeclarations.h"
#define Action_1__ctor_m18389(__this, ___object, ___method, method) (( void (*) (Action_1_t629 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m18287_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.String>::Invoke(T)
#define Action_1_Invoke_m18390(__this, ___obj, method) (( void (*) (Action_1_t629 *, String_t*, const MethodInfo*))Action_1_Invoke_m18289_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.String>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m18391(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t629 *, String_t*, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m18291_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.String>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m18392(__this, ___result, method) (( void (*) (Action_1_t629 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m18293_gshared)(__this, ___result, method)
