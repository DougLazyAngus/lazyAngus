#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<FacebookUserInfo>
struct Action_1_t227;
// System.Object
struct Object_t;
// FacebookUserInfo
struct FacebookUserInfo_t202;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<FacebookUserInfo>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_16MethodDeclarations.h"
#define Action_1__ctor_m2775(__this, ___object, ___method, method) (( void (*) (Action_1_t227 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m18503_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<FacebookUserInfo>::Invoke(T)
#define Action_1_Invoke_m20115(__this, ___obj, method) (( void (*) (Action_1_t227 *, FacebookUserInfo_t202 *, const MethodInfo*))Action_1_Invoke_m18505_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<FacebookUserInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m20116(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t227 *, FacebookUserInfo_t202 *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m18507_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<FacebookUserInfo>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m20117(__this, ___result, method) (( void (*) (Action_1_t227 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m18509_gshared)(__this, ___result, method)
