#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Byte,System.UInt16>
struct Func_2_t7103;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Byte,System.UInt16>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m42515_gshared (Func_2_t7103 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m42515(__this, ___object, ___method, method) (( void (*) (Func_2_t7103 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m42515_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Byte,System.UInt16>::Invoke(T)
extern "C" uint16_t Func_2_Invoke_m42516_gshared (Func_2_t7103 * __this, uint8_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m42516(__this, ___arg1, method) (( uint16_t (*) (Func_2_t7103 *, uint8_t, const MethodInfo*))Func_2_Invoke_m42516_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Byte,System.UInt16>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m42517_gshared (Func_2_t7103 * __this, uint8_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m42517(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7103 *, uint8_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m42517_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Byte,System.UInt16>::EndInvoke(System.IAsyncResult)
extern "C" uint16_t Func_2_EndInvoke_m42518_gshared (Func_2_t7103 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m42518(__this, ___result, method) (( uint16_t (*) (Func_2_t7103 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m42518_gshared)(__this, ___result, method)
