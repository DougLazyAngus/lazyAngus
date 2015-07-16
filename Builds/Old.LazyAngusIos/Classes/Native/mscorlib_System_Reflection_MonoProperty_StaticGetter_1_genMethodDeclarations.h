#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t4117;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void StaticGetter_1__ctor_m28101_gshared (StaticGetter_1_t4117 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define StaticGetter_1__ctor_m28101(__this, ___object, ___method, method) (( void (*) (StaticGetter_1_t4117 *, Object_t *, IntPtr_t, const MethodInfo*))StaticGetter_1__ctor_m28101_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern "C" Object_t * StaticGetter_1_Invoke_m28102_gshared (StaticGetter_1_t4117 * __this, const MethodInfo* method);
#define StaticGetter_1_Invoke_m28102(__this, method) (( Object_t * (*) (StaticGetter_1_t4117 *, const MethodInfo*))StaticGetter_1_Invoke_m28102_gshared)(__this, method)
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * StaticGetter_1_BeginInvoke_m28103_gshared (StaticGetter_1_t4117 * __this, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method);
#define StaticGetter_1_BeginInvoke_m28103(__this, ___callback, ___object, method) (( Object_t * (*) (StaticGetter_1_t4117 *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))StaticGetter_1_BeginInvoke_m28103_gshared)(__this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * StaticGetter_1_EndInvoke_m28104_gshared (StaticGetter_1_t4117 * __this, Object_t * ___result, const MethodInfo* method);
#define StaticGetter_1_EndInvoke_m28104(__this, ___result, method) (( Object_t * (*) (StaticGetter_1_t4117 *, Object_t *, const MethodInfo*))StaticGetter_1_EndInvoke_m28104_gshared)(__this, ___result, method)
