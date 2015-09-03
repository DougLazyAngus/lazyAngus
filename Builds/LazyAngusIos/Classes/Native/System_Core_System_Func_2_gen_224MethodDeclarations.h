#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Char>
struct Func_2_t7305;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Char>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.UInt16>
#include "System_Core_System_Func_2_gen_160MethodDeclarations.h"
#define Func_2__ctor_m45035(__this, ___object, ___method, method) (( void (*) (Func_2_t7305 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m42293_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Char>::Invoke(T)
#define Func_2_Invoke_m45036(__this, ___arg1, method) (( uint16_t (*) (Func_2_t7305 *, Object_t *, const MethodInfo*))Func_2_Invoke_m42294_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Char>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m45037(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7305 *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m42295_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Char>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m45038(__this, ___result, method) (( uint16_t (*) (Func_2_t7305 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m42296_gshared)(__this, ___result, method)
