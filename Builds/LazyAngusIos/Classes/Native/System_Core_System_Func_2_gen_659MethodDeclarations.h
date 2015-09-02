#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct Func_2_t7976;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m55566_gshared (Func_2_t7976 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m55566(__this, ___object, ___method, method) (( void (*) (Func_2_t7976 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m55566_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Invoke(T)
extern "C" KeyValuePair_2_t7036  Func_2_Invoke_m55568_gshared (Func_2_t7976 * __this, KeyValuePair_2_t7279  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m55568(__this, ___arg1, method) (( KeyValuePair_2_t7036  (*) (Func_2_t7976 *, KeyValuePair_2_t7279 , const MethodInfo*))Func_2_Invoke_m55568_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m55570_gshared (Func_2_t7976 * __this, KeyValuePair_2_t7279  ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m55570(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7976 *, KeyValuePair_2_t7279 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m55570_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t7036  Func_2_EndInvoke_m55572_gshared (Func_2_t7976 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m55572(__this, ___result, method) (( KeyValuePair_2_t7036  (*) (Func_2_t7976 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m55572_gshared)(__this, ___result, method)
