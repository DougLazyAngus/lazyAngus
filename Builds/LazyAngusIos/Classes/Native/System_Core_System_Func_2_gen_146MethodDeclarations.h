#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Single,System.SByte>
struct Func_2_t7049;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Single,System.SByte>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m41757_gshared (Func_2_t7049 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m41757(__this, ___object, ___method, method) (( void (*) (Func_2_t7049 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m41757_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Single,System.SByte>::Invoke(T)
extern "C" int8_t Func_2_Invoke_m41758_gshared (Func_2_t7049 * __this, float ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m41758(__this, ___arg1, method) (( int8_t (*) (Func_2_t7049 *, float, const MethodInfo*))Func_2_Invoke_m41758_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Single,System.SByte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m41759_gshared (Func_2_t7049 * __this, float ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m41759(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7049 *, float, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m41759_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Single,System.SByte>::EndInvoke(System.IAsyncResult)
extern "C" int8_t Func_2_EndInvoke_m41760_gshared (Func_2_t7049 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m41760(__this, ___result, method) (( int8_t (*) (Func_2_t7049 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m41760_gshared)(__this, ___result, method)
