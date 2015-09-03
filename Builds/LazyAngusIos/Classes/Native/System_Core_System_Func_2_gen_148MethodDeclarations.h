#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Byte,System.Int16>
struct Func_2_t7055;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Byte,System.Int16>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m41919_gshared (Func_2_t7055 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m41919(__this, ___object, ___method, method) (( void (*) (Func_2_t7055 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m41919_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Byte,System.Int16>::Invoke(T)
extern "C" int16_t Func_2_Invoke_m41920_gshared (Func_2_t7055 * __this, uint8_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m41920(__this, ___arg1, method) (( int16_t (*) (Func_2_t7055 *, uint8_t, const MethodInfo*))Func_2_Invoke_m41920_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Byte,System.Int16>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m41921_gshared (Func_2_t7055 * __this, uint8_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m41921(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7055 *, uint8_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m41921_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Byte,System.Int16>::EndInvoke(System.IAsyncResult)
extern "C" int16_t Func_2_EndInvoke_m41922_gshared (Func_2_t7055 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m41922(__this, ___result, method) (( int16_t (*) (Func_2_t7055 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m41922_gshared)(__this, ___result, method)
