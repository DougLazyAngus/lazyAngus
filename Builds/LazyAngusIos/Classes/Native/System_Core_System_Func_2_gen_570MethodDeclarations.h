#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct Func_2_t7653;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m51707_gshared (Func_2_t7653 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m51707(__this, ___object, ___method, method) (( void (*) (Func_2_t7653 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m51707_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Invoke(T)
extern "C" KeyValuePair_2_t7172  Func_2_Invoke_m51709_gshared (Func_2_t7653 * __this, KeyValuePair_2_t5487  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m51709(__this, ___arg1, method) (( KeyValuePair_2_t7172  (*) (Func_2_t7653 *, KeyValuePair_2_t5487 , const MethodInfo*))Func_2_Invoke_m51709_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m51711_gshared (Func_2_t7653 * __this, KeyValuePair_2_t5487  ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m51711(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7653 *, KeyValuePair_2_t5487 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m51711_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t7172  Func_2_EndInvoke_m51713_gshared (Func_2_t7653 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m51713(__this, ___result, method) (( KeyValuePair_2_t7172  (*) (Func_2_t7653 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m51713_gshared)(__this, ___result, method)
