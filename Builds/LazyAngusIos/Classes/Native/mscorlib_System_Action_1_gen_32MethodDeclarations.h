#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Linq.Expressions.ParameterExpression>
struct Action_1_t3810;
// System.Object
struct Object_t;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t3789;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Linq.Expressions.ParameterExpression>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m15245(__this, ___object, ___method, method) (( void (*) (Action_1_t3810 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m27650_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Linq.Expressions.ParameterExpression>::Invoke(T)
#define Action_1_Invoke_m68573(__this, ___obj, method) (( void (*) (Action_1_t3810 *, ParameterExpression_t3789 *, const MethodInfo*))Action_1_Invoke_m27652_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Linq.Expressions.ParameterExpression>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m68574(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t3810 *, ParameterExpression_t3789 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m27654_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Linq.Expressions.ParameterExpression>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m68575(__this, ___result, method) (( void (*) (Action_1_t3810 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m27656_gshared)(__this, ___result, method)
