#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
struct Getter_2_t4125;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Getter_2__ctor_m28138_gshared (Getter_2_t4125 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Getter_2__ctor_m28138(__this, ___object, ___method, method) (( void (*) (Getter_2_t4125 *, Object_t *, IntPtr_t, const MethodInfo*))Getter_2__ctor_m28138_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Getter_2_Invoke_m28139_gshared (Getter_2_t4125 * __this, Object_t * ____this, const MethodInfo* method);
#define Getter_2_Invoke_m28139(__this, ____this, method) (( Object_t * (*) (Getter_2_t4125 *, Object_t *, const MethodInfo*))Getter_2_Invoke_m28139_gshared)(__this, ____this, method)
// System.IAsyncResult System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Getter_2_BeginInvoke_m28140_gshared (Getter_2_t4125 * __this, Object_t * ____this, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Getter_2_BeginInvoke_m28140(__this, ____this, ___callback, ___object, method) (( Object_t * (*) (Getter_2_t4125 *, Object_t *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Getter_2_BeginInvoke_m28140_gshared)(__this, ____this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Getter_2_EndInvoke_m28141_gshared (Getter_2_t4125 * __this, Object_t * ___result, const MethodInfo* method);
#define Getter_2_EndInvoke_m28141(__this, ___result, method) (( Object_t * (*) (Getter_2_t4125 *, Object_t *, const MethodInfo*))Getter_2_EndInvoke_m28141_gshared)(__this, ___result, method)
