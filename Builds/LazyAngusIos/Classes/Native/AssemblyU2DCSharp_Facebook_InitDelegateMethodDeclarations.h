#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.InitDelegate
struct InitDelegate_t377;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Facebook.InitDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void InitDelegate__ctor_m3048 (InitDelegate_t377 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.InitDelegate::Invoke()
extern "C" void InitDelegate_Invoke_m3049 (InitDelegate_t377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_InitDelegate_t377(Il2CppObject* delegate);
// System.IAsyncResult Facebook.InitDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * InitDelegate_BeginInvoke_m3050 (InitDelegate_t377 * __this, AsyncCallback_t344 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.InitDelegate::EndInvoke(System.IAsyncResult)
extern "C" void InitDelegate_EndInvoke_m3051 (InitDelegate_t377 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
