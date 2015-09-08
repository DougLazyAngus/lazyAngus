#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`6<System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_6_t1443;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`6<System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object,System.IAsyncResult>::.ctor(System.Object,System.IntPtr)
// System.Func`6<System.Object,System.Int32,System.Int32,System.Object,System.Object,System.Object>
#include "Parse_Unity_System_Func_6_gen_1MethodDeclarations.h"
#define Func_6__ctor_m7469(__this, ___object, ___method, method) (( void (*) (Func_6_t1443 *, Object_t *, IntPtr_t, const MethodInfo*))Func_6__ctor_m35335_gshared)(__this, ___object, ___method, method)
// TResult System.Func`6<System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object,System.IAsyncResult>::Invoke(TArg1,TArg2,TArg3,TArg4,TArg5)
#define Func_6_Invoke_m35336(__this, ___arg1, ___arg2, ___arg3, ___arg4, ___arg5, method) (( Object_t * (*) (Func_6_t1443 *, ByteU5BU5D_t66*, int32_t, int32_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_6_Invoke_m35337_gshared)(__this, ___arg1, ___arg2, ___arg3, ___arg4, ___arg5, method)
// System.IAsyncResult System.Func`6<System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object,System.IAsyncResult>::BeginInvoke(TArg1,TArg2,TArg3,TArg4,TArg5,System.AsyncCallback,System.Object)
#define Func_6_BeginInvoke_m35338(__this, ___arg1, ___arg2, ___arg3, ___arg4, ___arg5, ___callback, ___object, method) (( Object_t * (*) (Func_6_t1443 *, ByteU5BU5D_t66*, int32_t, int32_t, AsyncCallback_t386 *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_6_BeginInvoke_m35339_gshared)(__this, ___arg1, ___arg2, ___arg3, ___arg4, ___arg5, ___callback, ___object, method)
// TResult System.Func`6<System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object,System.IAsyncResult>::EndInvoke(System.IAsyncResult)
#define Func_6_EndInvoke_m35340(__this, ___result, method) (( Object_t * (*) (Func_6_t1443 *, Object_t *, const MethodInfo*))Func_6_EndInvoke_m35341_gshared)(__this, ___result, method)
