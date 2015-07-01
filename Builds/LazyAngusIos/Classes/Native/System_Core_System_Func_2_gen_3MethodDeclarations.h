#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t43;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t388;
// System.AsyncCallback
struct AsyncCallback_t389;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>
#include "System_Core_System_Func_2_gen_2MethodDeclarations.h"
#define Func_2__ctor_m16950(__this, ___object, ___method, method) (( void (*) (Func_2_t43 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m16943_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m16951(__this, ___arg1, method) (( bool (*) (Func_2_t43 *, KeyValuePair_2_t40 , const MethodInfo*))Func_2_Invoke_m16945_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m16952(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t43 *, KeyValuePair_2_t40 , AsyncCallback_t389 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m16947_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m16953(__this, ___result, method) (( bool (*) (Func_2_t43 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m16949_gshared)(__this, ___result, method)
