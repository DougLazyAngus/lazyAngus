#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct Func_2_t7857;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
#include "System_Core_System_Func_2_gen_622MethodDeclarations.h"
#define Func_2__ctor_m54194(__this, ___object, ___method, method) (( void (*) (Func_2_t7857 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m54195_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::Invoke(T)
#define Func_2_Invoke_m54196(__this, ___arg1, method) (( KeyValuePair_2_t7082  (*) (Func_2_t7857 *, KeyValuePair_2_t7190 , const MethodInfo*))Func_2_Invoke_m54197_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m54198(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7857 *, KeyValuePair_2_t7190 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m54199_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m54200(__this, ___result, method) (( KeyValuePair_2_t7082  (*) (Func_2_t7857 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m54201_gshared)(__this, ___result, method)
