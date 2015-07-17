#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Boolean>
struct Action_1_t235;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Byte>
#include "mscorlib_System_Action_1_gen_18MethodDeclarations.h"
#define Action_1__ctor_m3260(__this, ___object, ___method, method) (( void (*) (Action_1_t235 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m20924_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Boolean>::Invoke(T)
#define Action_1_Invoke_m20925(__this, ___obj, method) (( void (*) (Action_1_t235 *, bool, const MethodInfo*))Action_1_Invoke_m20926_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m20927(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t235 *, bool, AsyncCallback_t344 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m20928_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m20929(__this, ___result, method) (( void (*) (Action_1_t235 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m20930_gshared)(__this, ___result, method)
