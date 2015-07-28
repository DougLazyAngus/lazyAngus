#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct Func_2_t7598;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
#include "System_Core_System_Func_2_gen_557MethodDeclarations.h"
#define Func_2__ctor_m51098(__this, ___object, ___method, method) (( void (*) (Func_2_t7598 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m51099_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Invoke(T)
#define Func_2_Invoke_m51100(__this, ___arg1, method) (( KeyValuePair_2_t7153  (*) (Func_2_t7598 *, KeyValuePair_2_t6974 , const MethodInfo*))Func_2_Invoke_m51101_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m51102(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7598 *, KeyValuePair_2_t6974 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m51103_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m51104(__this, ___result, method) (( KeyValuePair_2_t7153  (*) (Func_2_t7598 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m51105_gshared)(__this, ___result, method)
