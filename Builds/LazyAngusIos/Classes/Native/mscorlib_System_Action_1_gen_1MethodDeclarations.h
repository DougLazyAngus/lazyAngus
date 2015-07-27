#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<UnityEngine.Texture2D>
struct Action_1_t228;
// System.Object
struct Object_t;
// UnityEngine.Texture2D
struct Texture2D_t68;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<UnityEngine.Texture2D>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_17MethodDeclarations.h"
#define Action_1__ctor_m3250(__this, ___object, ___method, method) (( void (*) (Action_1_t228 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m19154_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.Texture2D>::Invoke(T)
#define Action_1_Invoke_m20166(__this, ___obj, method) (( void (*) (Action_1_t228 *, Texture2D_t68 *, const MethodInfo*))Action_1_Invoke_m19156_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.Texture2D>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m20167(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t228 *, Texture2D_t68 *, AsyncCallback_t346 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m19158_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.Texture2D>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m20168(__this, ___result, method) (( void (*) (Action_1_t228 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m19160_gshared)(__this, ___result, method)
