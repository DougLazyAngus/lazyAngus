#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
struct Func_2_t7309;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_47.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "System_Core_System_Func_2_gen_405MethodDeclarations.h"
#define Func_2__ctor_m47304(__this, ___object, ___method, method) (( void (*) (Func_2_t7309 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m47258_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Invoke(T)
#define Func_2_Invoke_m47305(__this, ___arg1, method) (( KeyValuePair_2_t6215  (*) (Func_2_t7309 *, KeyValuePair_2_t7183 , const MethodInfo*))Func_2_Invoke_m47260_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m47306(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7309 *, KeyValuePair_2_t7183 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m47262_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m47307(__this, ___result, method) (( KeyValuePair_2_t6215  (*) (Func_2_t7309 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m47264_gshared)(__this, ___result, method)
