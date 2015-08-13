#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<UnityEngine.Texture2D>
struct Action_1_t268;
// System.Object
struct Object_t;
// UnityEngine.Texture2D
struct Texture2D_t108;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<UnityEngine.Texture2D>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m3838(__this, ___object, ___method, method) (( void (*) (Action_1_t268 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m23233_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.Texture2D>::Invoke(T)
#define Action_1_Invoke_m24293(__this, ___obj, method) (( void (*) (Action_1_t268 *, Texture2D_t108 *, const MethodInfo*))Action_1_Invoke_m23235_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.Texture2D>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m24294(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t268 *, Texture2D_t108 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m23237_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.Texture2D>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m24295(__this, ___result, method) (( void (*) (Action_1_t268 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m23239_gshared)(__this, ___result, method)
