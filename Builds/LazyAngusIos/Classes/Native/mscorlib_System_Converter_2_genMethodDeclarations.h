#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Converter`2<System.Object,System.Object>
struct Converter_2_t4049;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t388;
// System.AsyncCallback
struct AsyncCallback_t389;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Converter_2__ctor_m27768_gshared (Converter_2_t4049 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Converter_2__ctor_m27768(__this, ___object, ___method, method) (( void (*) (Converter_2_t4049 *, Object_t *, IntPtr_t, const MethodInfo*))Converter_2__ctor_m27768_gshared)(__this, ___object, ___method, method)
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
extern "C" Object_t * Converter_2_Invoke_m27769_gshared (Converter_2_t4049 * __this, Object_t * ___input, const MethodInfo* method);
#define Converter_2_Invoke_m27769(__this, ___input, method) (( Object_t * (*) (Converter_2_t4049 *, Object_t *, const MethodInfo*))Converter_2_Invoke_m27769_gshared)(__this, ___input, method)
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern "C" Object_t * Converter_2_BeginInvoke_m27770_gshared (Converter_2_t4049 * __this, Object_t * ___input, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Converter_2_BeginInvoke_m27770(__this, ___input, ___callback, ___object, method) (( Object_t * (*) (Converter_2_t4049 *, Object_t *, AsyncCallback_t389 *, Object_t *, const MethodInfo*))Converter_2_BeginInvoke_m27770_gshared)(__this, ___input, ___callback, ___object, method)
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Converter_2_EndInvoke_m27771_gshared (Converter_2_t4049 * __this, Object_t * ___result, const MethodInfo* method);
#define Converter_2_EndInvoke_m27771(__this, ___result, method) (( Object_t * (*) (Converter_2_t4049 *, Object_t *, const MethodInfo*))Converter_2_EndInvoke_m27771_gshared)(__this, ___result, method)
