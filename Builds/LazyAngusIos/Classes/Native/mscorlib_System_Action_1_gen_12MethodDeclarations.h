#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<UnityEngine.Font>
struct Action_1_t995;
// System.Object
struct Object_t;
// UnityEngine.Font
struct Font_t845;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<UnityEngine.Font>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m5568(__this, ___object, ___method, method) (( void (*) (Action_1_t995 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m22912_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.Font>::Invoke(T)
#define Action_1_Invoke_m28293(__this, ___obj, method) (( void (*) (Action_1_t995 *, Font_t845 *, const MethodInfo*))Action_1_Invoke_m22914_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.Font>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m28294(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t995 *, Font_t845 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m22916_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.Font>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m28295(__this, ___result, method) (( void (*) (Action_1_t995 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m22918_gshared)(__this, ___result, method)
