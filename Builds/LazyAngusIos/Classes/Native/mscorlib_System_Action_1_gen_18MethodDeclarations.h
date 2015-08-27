#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Byte[]>
struct Action_1_t1249;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Byte[]>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m7524(__this, ___object, ___method, method) (( void (*) (Action_1_t1249 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m23253_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Byte[]>::Invoke(T)
#define Action_1_Invoke_m33305(__this, ___obj, method) (( void (*) (Action_1_t1249 *, ByteU5BU5D_t66*, const MethodInfo*))Action_1_Invoke_m23255_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Byte[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m33306(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t1249 *, ByteU5BU5D_t66*, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m23257_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Byte[]>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m33307(__this, ___result, method) (( void (*) (Action_1_t1249 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m23259_gshared)(__this, ___result, method)
