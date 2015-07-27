#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.FacebookDelegate
struct FacebookDelegate_t391;
// System.Object
struct Object_t;
// FBResult
struct FBResult_t239;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Facebook.FacebookDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void FacebookDelegate__ctor_m3052 (FacebookDelegate_t391 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.FacebookDelegate::Invoke(FBResult)
extern "C" void FacebookDelegate_Invoke_m3053 (FacebookDelegate_t391 * __this, FBResult_t239 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_FacebookDelegate_t391(Il2CppObject* delegate, FBResult_t239 * ___result);
// System.IAsyncResult Facebook.FacebookDelegate::BeginInvoke(FBResult,System.AsyncCallback,System.Object)
extern "C" Object_t * FacebookDelegate_BeginInvoke_m3054 (FacebookDelegate_t391 * __this, FBResult_t239 * ___result, AsyncCallback_t344 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.FacebookDelegate::EndInvoke(System.IAsyncResult)
extern "C" void FacebookDelegate_EndInvoke_m3055 (FacebookDelegate_t391 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
