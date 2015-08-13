#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>,System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct Func_2_t7352;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>,System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "System_Core_System_Func_2_gen_434MethodDeclarations.h"
#define Func_2__ctor_m47908(__this, ___object, ___method, method) (( void (*) (Func_2_t7352 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m47909_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>,System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Invoke(T)
#define Func_2_Invoke_m47910(__this, ___arg1, method) (( KeyValuePair_2_t7183  (*) (Func_2_t7352 *, KeyValuePair_2_t7055 , const MethodInfo*))Func_2_Invoke_m47911_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>,System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m47912(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7352 *, KeyValuePair_2_t7055 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m47913_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>,System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m47914(__this, ___result, method) (( KeyValuePair_2_t7183  (*) (Func_2_t7352 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m47915_gshared)(__this, ___result, method)
