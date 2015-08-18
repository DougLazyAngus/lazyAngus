#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_t1459;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m32098_gshared (Func_2_t1459 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m32098(__this, ___object, ___method, method) (( void (*) (Func_2_t1459 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m32098_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m32100_gshared (Func_2_t1459 * __this, KeyValuePair_2_t70  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m32100(__this, ___arg1, method) (( Object_t * (*) (Func_2_t1459 *, KeyValuePair_2_t70 , const MethodInfo*))Func_2_Invoke_m32100_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m32102_gshared (Func_2_t1459 * __this, KeyValuePair_2_t70  ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m32102(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1459 *, KeyValuePair_2_t70 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m32102_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m32104_gshared (Func_2_t1459 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m32104(__this, ___result, method) (( Object_t * (*) (Func_2_t1459 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m32104_gshared)(__this, ___result, method)
