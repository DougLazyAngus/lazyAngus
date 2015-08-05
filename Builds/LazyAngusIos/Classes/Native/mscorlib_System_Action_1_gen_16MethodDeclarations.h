#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Uri>
struct Action_1_t1119;
// System.Object
struct Object_t;
// System.Uri
struct Uri_t709;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Uri>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m30668(__this, ___object, ___method, method) (( void (*) (Action_1_t1119 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m22987_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Uri>::Invoke(T)
#define Action_1_Invoke_m30669(__this, ___obj, method) (( void (*) (Action_1_t1119 *, Uri_t709 *, const MethodInfo*))Action_1_Invoke_m22989_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Uri>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m30670(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t1119 *, Uri_t709 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m22991_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Uri>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m30671(__this, ___result, method) (( void (*) (Action_1_t1119 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m22993_gshared)(__this, ___result, method)
