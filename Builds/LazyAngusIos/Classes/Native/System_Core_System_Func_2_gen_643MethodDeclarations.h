#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct Func_2_t7898;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
#include "System_Core_System_Func_2_gen_644MethodDeclarations.h"
#define Func_2__ctor_m54652(__this, ___object, ___method, method) (( void (*) (Func_2_t7898 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m54653_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::Invoke(T)
#define Func_2_Invoke_m54654(__this, ___arg1, method) (( KeyValuePair_2_t7062  (*) (Func_2_t7898 *, KeyValuePair_2_t778 , const MethodInfo*))Func_2_Invoke_m54655_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m54656(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7898 *, KeyValuePair_2_t778 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m54657_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m54658(__this, ___result, method) (( KeyValuePair_2_t7062  (*) (Func_2_t7898 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m54659_gshared)(__this, ___result, method)
