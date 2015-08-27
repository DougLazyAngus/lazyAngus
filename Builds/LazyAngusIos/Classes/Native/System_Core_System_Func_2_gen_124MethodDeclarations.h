#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Int64,System.Boolean>
struct Func_2_t6411;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Int64,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Int64,System.Byte>
#include "System_Core_System_Func_2_gen_123MethodDeclarations.h"
#define Func_2__ctor_m36302(__this, ___object, ___method, method) (( void (*) (Func_2_t6411 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m36283_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Int64,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m36303(__this, ___arg1, method) (( bool (*) (Func_2_t6411 *, int64_t, const MethodInfo*))Func_2_Invoke_m36284_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Int64,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m36304(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6411 *, int64_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m36285_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Int64,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m36305(__this, ___result, method) (( bool (*) (Func_2_t6411 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m36286_gshared)(__this, ___result, method)
