#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct Func_2_t7745;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m52620_gshared (Func_2_t7745 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m52620(__this, ___object, ___method, method) (( void (*) (Func_2_t7745 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m52620_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Invoke(T)
extern "C" KeyValuePair_2_t7243  Func_2_Invoke_m52622_gshared (Func_2_t7745 * __this, KeyValuePair_2_t7000  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m52622(__this, ___arg1, method) (( KeyValuePair_2_t7243  (*) (Func_2_t7745 *, KeyValuePair_2_t7000 , const MethodInfo*))Func_2_Invoke_m52622_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m52624_gshared (Func_2_t7745 * __this, KeyValuePair_2_t7000  ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m52624(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7745 *, KeyValuePair_2_t7000 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m52624_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t7243  Func_2_EndInvoke_m52626_gshared (Func_2_t7745 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m52626(__this, ___result, method) (( KeyValuePair_2_t7243  (*) (Func_2_t7745 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m52626_gshared)(__this, ___result, method)
