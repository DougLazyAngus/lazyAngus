#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Threading.Tasks.Task`1<System.Byte>>
struct Action_1_t5883;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1369;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Byte>>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m29924(__this, ___object, ___method, method) (( void (*) (Action_1_t5883 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m22987_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Byte>>::Invoke(T)
#define Action_1_Invoke_m29925(__this, ___obj, method) (( void (*) (Action_1_t5883 *, Task_1_t1369 *, const MethodInfo*))Action_1_Invoke_m22989_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Threading.Tasks.Task`1<System.Byte>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m29926(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t5883 *, Task_1_t1369 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m22991_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Byte>>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m29927(__this, ___result, method) (( void (*) (Action_1_t5883 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m22993_gshared)(__this, ___result, method)
