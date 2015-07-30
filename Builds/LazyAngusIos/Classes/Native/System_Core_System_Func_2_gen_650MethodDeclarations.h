#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct Func_2_t7849;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
#include "System_Core_System_Func_2_gen_651MethodDeclarations.h"
#define Func_2__ctor_m54240(__this, ___object, ___method, method) (( void (*) (Func_2_t7849 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m54241_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::Invoke(T)
#define Func_2_Invoke_m54242(__this, ___arg1, method) (( KeyValuePair_2_t6981  (*) (Func_2_t7849 *, KeyValuePair_2_t7131 , const MethodInfo*))Func_2_Invoke_m54243_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m54244(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7849 *, KeyValuePair_2_t7131 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m54245_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m54246(__this, ___result, method) (( KeyValuePair_2_t6981  (*) (Func_2_t7849 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m54247_gshared)(__this, ___result, method)
