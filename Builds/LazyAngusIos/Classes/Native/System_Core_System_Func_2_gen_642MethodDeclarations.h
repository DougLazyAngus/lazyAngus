#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct Func_2_t8460;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m59217_gshared (Func_2_t8460 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m59217(__this, ___object, ___method, method) (( void (*) (Func_2_t8460 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m59217_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Invoke(T)
extern "C" KeyValuePair_2_t7578  Func_2_Invoke_m59219_gshared (Func_2_t8460 * __this, KeyValuePair_2_t7572  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m59219(__this, ___arg1, method) (( KeyValuePair_2_t7578  (*) (Func_2_t8460 *, KeyValuePair_2_t7572 , const MethodInfo*))Func_2_Invoke_m59219_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m59221_gshared (Func_2_t8460 * __this, KeyValuePair_2_t7572  ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m59221(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t8460 *, KeyValuePair_2_t7572 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m59221_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t7578  Func_2_EndInvoke_m59223_gshared (Func_2_t8460 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m59223(__this, ___result, method) (( KeyValuePair_2_t7578  (*) (Func_2_t8460 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m59223_gshared)(__this, ___result, method)
