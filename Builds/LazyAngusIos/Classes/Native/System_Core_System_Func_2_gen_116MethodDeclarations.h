#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Int16,System.Boolean>
struct Func_2_t6963;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Int16,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Int16,System.Byte>
#include "System_Core_System_Func_2_gen_115MethodDeclarations.h"
#define Func_2__ctor_m40687(__this, ___object, ___method, method) (( void (*) (Func_2_t6963 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m40668_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Int16,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m40688(__this, ___arg1, method) (( bool (*) (Func_2_t6963 *, int16_t, const MethodInfo*))Func_2_Invoke_m40669_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Int16,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m40689(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6963 *, int16_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m40670_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Int16,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m40690(__this, ___result, method) (( bool (*) (Func_2_t6963 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m40671_gshared)(__this, ___result, method)
