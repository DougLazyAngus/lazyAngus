#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct Func_2_t7854;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
#include "System_Core_System_Func_2_gen_625MethodDeclarations.h"
#define Func_2__ctor_m54120(__this, ___object, ___method, method) (( void (*) (Func_2_t7854 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m54121_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::Invoke(T)
#define Func_2_Invoke_m54122(__this, ___arg1, method) (( KeyValuePair_2_t7075  (*) (Func_2_t7854 *, KeyValuePair_2_t7194 , const MethodInfo*))Func_2_Invoke_m54123_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m54124(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7854 *, KeyValuePair_2_t7194 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m54125_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m54126(__this, ___result, method) (( KeyValuePair_2_t7075  (*) (Func_2_t7854 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m54127_gshared)(__this, ___result, method)
