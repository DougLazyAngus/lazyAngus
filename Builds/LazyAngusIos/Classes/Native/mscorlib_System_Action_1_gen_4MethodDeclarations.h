#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<FB_APIResult>
struct Action_1_t212;
// System.Object
struct Object_t;
// FB_APIResult
struct FB_APIResult_t230;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<FB_APIResult>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_16MethodDeclarations.h"
#define Action_1__ctor_m2741(__this, ___object, ___method, method) (( void (*) (Action_1_t212 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m18503_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<FB_APIResult>::Invoke(T)
#define Action_1_Invoke_m19915(__this, ___obj, method) (( void (*) (Action_1_t212 *, FB_APIResult_t230 *, const MethodInfo*))Action_1_Invoke_m18505_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<FB_APIResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m19916(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t212 *, FB_APIResult_t230 *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m18507_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<FB_APIResult>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m19917(__this, ___result, method) (( void (*) (Action_1_t212 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m18509_gshared)(__this, ___result, method)
