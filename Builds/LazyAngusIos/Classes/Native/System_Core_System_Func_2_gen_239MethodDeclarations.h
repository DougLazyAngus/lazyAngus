#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Boolean,System.Double>
struct Func_2_t6682;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Boolean,System.Double>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Byte,System.Double>
#include "System_Core_System_Func_2_gen_238MethodDeclarations.h"
#define Func_2__ctor_m40075(__this, ___object, ___method, method) (( void (*) (Func_2_t6682 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m40056_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Boolean,System.Double>::Invoke(T)
#define Func_2_Invoke_m40076(__this, ___arg1, method) (( double (*) (Func_2_t6682 *, bool, const MethodInfo*))Func_2_Invoke_m40057_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Boolean,System.Double>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m40077(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6682 *, bool, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m40058_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Boolean,System.Double>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m40078(__this, ___result, method) (( double (*) (Func_2_t6682 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m40059_gshared)(__this, ___result, method)
