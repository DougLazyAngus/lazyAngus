#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseFile>>>
struct Func_2_t8638;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseFile>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_89.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseFile>>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "System_Core_System_Func_2_gen_66MethodDeclarations.h"
#define Func_2__ctor_m61511(__this, ___object, ___method, method) (( void (*) (Func_2_t8638 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m36102_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseFile>>>::Invoke(T)
#define Func_2_Invoke_m61512(__this, ___arg1, method) (( KeyValuePair_2_t8637  (*) (Func_2_t8638 *, KeyValuePair_2_t791 , const MethodInfo*))Func_2_Invoke_m36104_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseFile>>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m61513(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t8638 *, KeyValuePair_2_t791 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m36106_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<Parse.ParseFile>>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m61514(__this, ___result, method) (( KeyValuePair_2_t8637  (*) (Func_2_t8638 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m36108_gshared)(__this, ___result, method)
