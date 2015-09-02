#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Func_2_t7310;
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
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m47325_gshared (Func_2_t7310 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m47325(__this, ___object, ___method, method) (( void (*) (Func_2_t7310 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m47325_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T)
extern "C" KeyValuePair_2_t70  Func_2_Invoke_m47327_gshared (Func_2_t7310 * __this, KeyValuePair_2_t7036  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m47327(__this, ___arg1, method) (( KeyValuePair_2_t70  (*) (Func_2_t7310 *, KeyValuePair_2_t7036 , const MethodInfo*))Func_2_Invoke_m47327_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m47329_gshared (Func_2_t7310 * __this, KeyValuePair_2_t7036  ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m47329(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7310 *, KeyValuePair_2_t7036 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m47329_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t70  Func_2_EndInvoke_m47331_gshared (Func_2_t7310 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m47331(__this, ___result, method) (( KeyValuePair_2_t70  (*) (Func_2_t7310 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m47331_gshared)(__this, ___result, method)
