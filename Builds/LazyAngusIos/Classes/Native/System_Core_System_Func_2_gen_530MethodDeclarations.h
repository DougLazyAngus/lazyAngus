#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct Func_2_t7617;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "System_Core_System_Func_2_gen_531MethodDeclarations.h"
#define Func_2__ctor_m51146(__this, ___object, ___method, method) (( void (*) (Func_2_t7617 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m51147_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Invoke(T)
#define Func_2_Invoke_m51148(__this, ___arg1, method) (( KeyValuePair_2_t5544  (*) (Func_2_t7617 *, KeyValuePair_2_t7082 , const MethodInfo*))Func_2_Invoke_m51149_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m51150(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7617 *, KeyValuePair_2_t7082 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m51151_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m51152(__this, ___result, method) (( KeyValuePair_2_t5544  (*) (Func_2_t7617 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m51153_gshared)(__this, ___result, method)
