#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<System.Byte>
struct Func_1_t5669;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_1__ctor_m26264_gshared (Func_1_t5669 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_1__ctor_m26264(__this, ___object, ___method, method) (( void (*) (Func_1_t5669 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m26264_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<System.Byte>::Invoke()
extern "C" uint8_t Func_1_Invoke_m26266_gshared (Func_1_t5669 * __this, const MethodInfo* method);
#define Func_1_Invoke_m26266(__this, method) (( uint8_t (*) (Func_1_t5669 *, const MethodInfo*))Func_1_Invoke_m26266_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.Byte>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * Func_1_BeginInvoke_m26268_gshared (Func_1_t5669 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_1_BeginInvoke_m26268(__this, ___callback, ___object, method) (( Object_t * (*) (Func_1_t5669 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m26268_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Func_1_EndInvoke_m26270_gshared (Func_1_t5669 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_1_EndInvoke_m26270(__this, ___result, method) (( uint8_t (*) (Func_1_t5669 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m26270_gshared)(__this, ___result, method)
