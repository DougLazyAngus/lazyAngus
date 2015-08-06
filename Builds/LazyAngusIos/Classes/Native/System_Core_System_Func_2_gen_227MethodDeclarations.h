#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.SByte,System.Char>
struct Func_2_t6667;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.SByte,System.Char>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.SByte,System.UInt16>
#include "System_Core_System_Func_2_gen_163MethodDeclarations.h"
#define Func_2__ctor_m39710(__this, ___object, ___method, method) (( void (*) (Func_2_t6667 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m37156_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.SByte,System.Char>::Invoke(T)
#define Func_2_Invoke_m39711(__this, ___arg1, method) (( uint16_t (*) (Func_2_t6667 *, int8_t, const MethodInfo*))Func_2_Invoke_m37157_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.SByte,System.Char>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m39712(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6667 *, int8_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m37158_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.SByte,System.Char>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m39713(__this, ___result, method) (( uint16_t (*) (Func_2_t6667 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m37159_gshared)(__this, ___result, method)
