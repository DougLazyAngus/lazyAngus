#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<System.Byte>
struct Func_1_t6218;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_1__ctor_m30608_gshared (Func_1_t6218 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_1__ctor_m30608(__this, ___object, ___method, method) (( void (*) (Func_1_t6218 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m30608_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<System.Byte>::Invoke()
extern "C" uint8_t Func_1_Invoke_m30610_gshared (Func_1_t6218 * __this, const MethodInfo* method);
#define Func_1_Invoke_m30610(__this, method) (( uint8_t (*) (Func_1_t6218 *, const MethodInfo*))Func_1_Invoke_m30610_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.Byte>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * Func_1_BeginInvoke_m30612_gshared (Func_1_t6218 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_1_BeginInvoke_m30612(__this, ___callback, ___object, method) (( Object_t * (*) (Func_1_t6218 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m30612_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Func_1_EndInvoke_m30614_gshared (Func_1_t6218 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_1_EndInvoke_m30614(__this, ___result, method) (( uint8_t (*) (Func_1_t6218 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m30614_gshared)(__this, ___result, method)
