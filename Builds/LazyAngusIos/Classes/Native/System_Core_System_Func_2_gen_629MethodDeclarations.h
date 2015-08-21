#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct Func_2_t7867;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m54295_gshared (Func_2_t7867 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m54295(__this, ___object, ___method, method) (( void (*) (Func_2_t7867 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m54295_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Invoke(T)
extern "C" KeyValuePair_2_t7010  Func_2_Invoke_m54297_gshared (Func_2_t7867 * __this, KeyValuePair_2_t7218  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m54297(__this, ___arg1, method) (( KeyValuePair_2_t7010  (*) (Func_2_t7867 *, KeyValuePair_2_t7218 , const MethodInfo*))Func_2_Invoke_m54297_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m54299_gshared (Func_2_t7867 * __this, KeyValuePair_2_t7218  ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m54299(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7867 *, KeyValuePair_2_t7218 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m54299_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t7010  Func_2_EndInvoke_m54301_gshared (Func_2_t7867 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m54301(__this, ___result, method) (( KeyValuePair_2_t7010  (*) (Func_2_t7867 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m54301_gshared)(__this, ___result, method)
