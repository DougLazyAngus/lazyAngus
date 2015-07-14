#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Boolean>
struct Action_1_t209;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Byte>
#include "mscorlib_System_Action_1_gen_18MethodDeclarations.h"
#define Action_1__ctor_m2679(__this, ___object, ___method, method) (( void (*) (Action_1_t209 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m19841_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Boolean>::Invoke(T)
#define Action_1_Invoke_m19842(__this, ___obj, method) (( void (*) (Action_1_t209 *, bool, const MethodInfo*))Action_1_Invoke_m19843_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m19844(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t209 *, bool, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m19845_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m19846(__this, ___result, method) (( void (*) (Action_1_t209 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m19847_gshared)(__this, ___result, method)
