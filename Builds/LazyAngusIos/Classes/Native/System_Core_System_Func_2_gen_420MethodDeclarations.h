#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct Func_2_t7331;
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
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "System_Core_System_Func_2_gen_421MethodDeclarations.h"
#define Func_2__ctor_m47616(__this, ___object, ___method, method) (( void (*) (Func_2_t7331 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m47617_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Invoke(T)
#define Func_2_Invoke_m47618(__this, ___arg1, method) (( KeyValuePair_2_t7183  (*) (Func_2_t7331 *, KeyValuePair_2_t7234 , const MethodInfo*))Func_2_Invoke_m47619_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m47620(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7331 *, KeyValuePair_2_t7234 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m47621_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m47622(__this, ___result, method) (( KeyValuePair_2_t7183  (*) (Func_2_t7331 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m47623_gshared)(__this, ___result, method)
