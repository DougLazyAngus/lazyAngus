#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct Func_2_t8221;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
#include "System_Core_System_Func_2_gen_542MethodDeclarations.h"
#define Func_2__ctor_m56235(__this, ___object, ___method, method) (( void (*) (Func_2_t8221 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m56236_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Invoke(T)
#define Func_2_Invoke_m56237(__this, ___arg1, method) (( KeyValuePair_2_t7805  (*) (Func_2_t8221 *, KeyValuePair_2_t7776 , const MethodInfo*))Func_2_Invoke_m56238_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m56239(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t8221 *, KeyValuePair_2_t7776 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m56240_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m56241(__this, ___result, method) (( KeyValuePair_2_t7805  (*) (Func_2_t8221 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m56242_gshared)(__this, ___result, method)
