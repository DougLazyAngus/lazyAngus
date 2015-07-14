#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Converter`2<System.Object,System.Object>
struct Converter_2_t4090;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Converter_2__ctor_m27957_gshared (Converter_2_t4090 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Converter_2__ctor_m27957(__this, ___object, ___method, method) (( void (*) (Converter_2_t4090 *, Object_t *, IntPtr_t, const MethodInfo*))Converter_2__ctor_m27957_gshared)(__this, ___object, ___method, method)
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
extern "C" Object_t * Converter_2_Invoke_m27958_gshared (Converter_2_t4090 * __this, Object_t * ___input, const MethodInfo* method);
#define Converter_2_Invoke_m27958(__this, ___input, method) (( Object_t * (*) (Converter_2_t4090 *, Object_t *, const MethodInfo*))Converter_2_Invoke_m27958_gshared)(__this, ___input, method)
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern "C" Object_t * Converter_2_BeginInvoke_m27959_gshared (Converter_2_t4090 * __this, Object_t * ___input, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Converter_2_BeginInvoke_m27959(__this, ___input, ___callback, ___object, method) (( Object_t * (*) (Converter_2_t4090 *, Object_t *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Converter_2_BeginInvoke_m27959_gshared)(__this, ___input, ___callback, ___object, method)
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Converter_2_EndInvoke_m27960_gshared (Converter_2_t4090 * __this, Object_t * ___result, const MethodInfo* method);
#define Converter_2_EndInvoke_m27960(__this, ___result, method) (( Object_t * (*) (Converter_2_t4090 *, Object_t *, const MethodInfo*))Converter_2_EndInvoke_m27960_gshared)(__this, ___result, method)
