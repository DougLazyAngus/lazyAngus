#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
struct Func_2_t7315;
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
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "System_Core_System_Func_2_gen_412MethodDeclarations.h"
#define Func_2__ctor_m47438(__this, ___object, ___method, method) (( void (*) (Func_2_t7315 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m47416_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Invoke(T)
#define Func_2_Invoke_m47439(__this, ___arg1, method) (( KeyValuePair_2_t6215  (*) (Func_2_t7315 *, KeyValuePair_2_t7205 , const MethodInfo*))Func_2_Invoke_m47418_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m47440(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7315 *, KeyValuePair_2_t7205 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m47420_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m47441(__this, ___result, method) (( KeyValuePair_2_t6215  (*) (Func_2_t7315 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m47422_gshared)(__this, ___result, method)
