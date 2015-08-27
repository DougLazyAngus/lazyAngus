#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct Func_2_t7783;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
#include "System_Core_System_Func_2_gen_588MethodDeclarations.h"
#define Func_2__ctor_m53152(__this, ___object, ___method, method) (( void (*) (Func_2_t7783 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m53153_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Invoke(T)
#define Func_2_Invoke_m53154(__this, ___arg1, method) (( KeyValuePair_2_t7263  (*) (Func_2_t7783 *, KeyValuePair_2_t7201 , const MethodInfo*))Func_2_Invoke_m53155_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m53156(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7783 *, KeyValuePair_2_t7201 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m53157_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m53158(__this, ___result, method) (( KeyValuePair_2_t7263  (*) (Func_2_t7783 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m53159_gshared)(__this, ___result, method)
