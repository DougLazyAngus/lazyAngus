#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Linq.Expressions.Expression>
struct Action_1_t3323;
// System.Object
struct Object_t;
// System.Linq.Expressions.Expression
struct Expression_t1467;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Linq.Expressions.Expression>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m11548(__this, ___object, ___method, method) (( void (*) (Action_1_t3323 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m22959_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Linq.Expressions.Expression>::Invoke(T)
#define Action_1_Invoke_m62488(__this, ___obj, method) (( void (*) (Action_1_t3323 *, Expression_t1467 *, const MethodInfo*))Action_1_Invoke_m22961_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Linq.Expressions.Expression>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m62489(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t3323 *, Expression_t1467 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m22963_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Linq.Expressions.Expression>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m62490(__this, ___result, method) (( void (*) (Action_1_t3323 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m22965_gshared)(__this, ___result, method)
