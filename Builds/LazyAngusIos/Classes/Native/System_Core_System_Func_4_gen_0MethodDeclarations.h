#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`4<System.Object,System.Object,System.Object,System.Object>
struct Func_4_t8955;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_4__ctor_m64754_gshared (Func_4_t8955 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_4__ctor_m64754(__this, ___object, ___method, method) (( void (*) (Func_4_t8955 *, Object_t *, IntPtr_t, const MethodInfo*))Func_4__ctor_m64754_gshared)(__this, ___object, ___method, method)
// TResult System.Func`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3)
extern "C" Object_t * Func_4_Invoke_m64756_gshared (Func_4_t8955 * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, const MethodInfo* method);
#define Func_4_Invoke_m64756(__this, ___arg1, ___arg2, ___arg3, method) (( Object_t * (*) (Func_4_t8955 *, Object_t *, Object_t *, Object_t *, const MethodInfo*))Func_4_Invoke_m64756_gshared)(__this, ___arg1, ___arg2, ___arg3, method)
// System.IAsyncResult System.Func`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_4_BeginInvoke_m64758_gshared (Func_4_t8955 * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_4_BeginInvoke_m64758(__this, ___arg1, ___arg2, ___arg3, ___callback, ___object, method) (( Object_t * (*) (Func_4_t8955 *, Object_t *, Object_t *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_4_BeginInvoke_m64758_gshared)(__this, ___arg1, ___arg2, ___arg3, ___callback, ___object, method)
// TResult System.Func`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_4_EndInvoke_m64760_gshared (Func_4_t8955 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_4_EndInvoke_m64760(__this, ___result, method) (( Object_t * (*) (Func_4_t8955 *, Object_t *, const MethodInfo*))Func_4_EndInvoke_m64760_gshared)(__this, ___result, method)
