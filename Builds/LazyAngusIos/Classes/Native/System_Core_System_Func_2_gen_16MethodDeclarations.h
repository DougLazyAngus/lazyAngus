#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Boolean>
struct Func_2_t1231;
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

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>
#include "System_Core_System_Func_2_gen_55MethodDeclarations.h"
#define Func_2__ctor_m7596(__this, ___object, ___method, method) (( void (*) (Func_2_t1231 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m26368_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m36782(__this, ___arg1, method) (( bool (*) (Func_2_t1231 *, KeyValuePair_2_t791 , const MethodInfo*))Func_2_Invoke_m26370_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m36783(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1231 *, KeyValuePair_2_t791 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m26372_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m36784(__this, ___result, method) (( bool (*) (Func_2_t1231 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m26374_gshared)(__this, ___result, method)
