#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct Func_2_t7132;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "System_Core_System_Func_2_gen_385MethodDeclarations.h"
#define Func_2__ctor_m45793(__this, ___object, ___method, method) (( void (*) (Func_2_t7132 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m45794_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Invoke(T)
#define Func_2_Invoke_m45795(__this, ___arg1, method) (( KeyValuePair_2_t730  (*) (Func_2_t7132 *, KeyValuePair_2_t7135 , const MethodInfo*))Func_2_Invoke_m45796_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m45797(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7132 *, KeyValuePair_2_t7135 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m45798_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m45799(__this, ___result, method) (( KeyValuePair_2_t730  (*) (Func_2_t7132 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m45800_gshared)(__this, ___result, method)
