#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Char,System.SByte>
struct Func_2_t6463;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Char,System.SByte>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.UInt16,System.SByte>
#include "System_Core_System_Func_2_gen_139MethodDeclarations.h"
#define Func_2__ctor_m36916(__this, ___object, ___method, method) (( void (*) (Func_2_t6463 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m36741_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Char,System.SByte>::Invoke(T)
#define Func_2_Invoke_m36917(__this, ___arg1, method) (( int8_t (*) (Func_2_t6463 *, uint16_t, const MethodInfo*))Func_2_Invoke_m36742_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Char,System.SByte>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m36918(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6463 *, uint16_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m36743_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Char,System.SByte>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m36919(__this, ___result, method) (( int8_t (*) (Func_2_t6463 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m36744_gshared)(__this, ___result, method)
