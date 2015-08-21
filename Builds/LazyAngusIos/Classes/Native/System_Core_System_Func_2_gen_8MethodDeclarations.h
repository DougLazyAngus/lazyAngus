#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Boolean>
struct Func_2_t1085;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_57MethodDeclarations.h"
#define Func_2__ctor_m7363(__this, ___object, ___method, method) (( void (*) (Func_2_t1085 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m30266_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m30273(__this, ___arg1, method) (( bool (*) (Func_2_t1085 *, Object_t *, const MethodInfo*))Func_2_Invoke_m30268_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m30274(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1085 *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30270_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m30275(__this, ___result, method) (( bool (*) (Func_2_t1085 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30272_gshared)(__this, ___result, method)
