#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<UnityEngine.Font>
struct Action_1_t1061;
// System.Object
struct Object_t;
// UnityEngine.Font
struct Font_t914;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<UnityEngine.Font>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m5897(__this, ___object, ___method, method) (( void (*) (Action_1_t1061 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m23233_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.Font>::Invoke(T)
#define Action_1_Invoke_m29060(__this, ___obj, method) (( void (*) (Action_1_t1061 *, Font_t914 *, const MethodInfo*))Action_1_Invoke_m23235_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.Font>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m29061(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t1061 *, Font_t914 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m23237_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.Font>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m29062(__this, ___result, method) (( void (*) (Action_1_t1061 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m23239_gshared)(__this, ___result, method)
