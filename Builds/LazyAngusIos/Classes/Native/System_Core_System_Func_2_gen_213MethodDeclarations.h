#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Boolean,System.UInt64>
struct Func_2_t6630;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Boolean,System.UInt64>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Byte,System.UInt64>
#include "System_Core_System_Func_2_gen_212MethodDeclarations.h"
#define Func_2__ctor_m39279(__this, ___object, ___method, method) (( void (*) (Func_2_t6630 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m39260_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Boolean,System.UInt64>::Invoke(T)
#define Func_2_Invoke_m39280(__this, ___arg1, method) (( uint64_t (*) (Func_2_t6630 *, bool, const MethodInfo*))Func_2_Invoke_m39261_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Boolean,System.UInt64>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m39281(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6630 *, bool, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m39262_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Boolean,System.UInt64>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m39282(__this, ___result, method) (( uint64_t (*) (Func_2_t6630 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m39263_gshared)(__this, ___result, method)
