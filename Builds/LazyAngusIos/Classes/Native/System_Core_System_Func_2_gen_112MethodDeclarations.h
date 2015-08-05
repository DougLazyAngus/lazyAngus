#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Byte,System.Boolean>
struct Func_2_t6312;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Byte,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Byte,System.Byte>
#include "System_Core_System_Func_2_gen_110MethodDeclarations.h"
#define Func_2__ctor_m35174(__this, ___object, ___method, method) (( void (*) (Func_2_t6312 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m35135_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Byte,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m35175(__this, ___arg1, method) (( bool (*) (Func_2_t6312 *, uint8_t, const MethodInfo*))Func_2_Invoke_m35136_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Byte,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m35176(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6312 *, uint8_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m35137_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Byte,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m35177(__this, ___result, method) (( bool (*) (Func_2_t6312 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m35138_gshared)(__this, ___result, method)
