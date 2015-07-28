#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct Func_2_t7342;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
#include "System_Core_System_Func_2_gen_463MethodDeclarations.h"
#define Func_2__ctor_m48033(__this, ___object, ___method, method) (( void (*) (Func_2_t7342 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m48034_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Invoke(T)
#define Func_2_Invoke_m48035(__this, ___arg1, method) (( KeyValuePair_2_t7124  (*) (Func_2_t7342 *, KeyValuePair_2_t720 , const MethodInfo*))Func_2_Invoke_m48036_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m48037(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7342 *, KeyValuePair_2_t720 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m48038_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m48039(__this, ___result, method) (( KeyValuePair_2_t7124  (*) (Func_2_t7342 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m48040_gshared)(__this, ___result, method)
