#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct Func_2_t7277;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m47165_gshared (Func_2_t7277 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m47165(__this, ___object, ___method, method) (( void (*) (Func_2_t7277 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m47165_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Invoke(T)
extern "C" KeyValuePair_2_t6110  Func_2_Invoke_m47167_gshared (Func_2_t7277 * __this, KeyValuePair_2_t6935  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m47167(__this, ___arg1, method) (( KeyValuePair_2_t6110  (*) (Func_2_t7277 *, KeyValuePair_2_t6935 , const MethodInfo*))Func_2_Invoke_m47167_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m47169_gshared (Func_2_t7277 * __this, KeyValuePair_2_t6935  ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m47169(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7277 *, KeyValuePair_2_t6935 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m47169_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t6110  Func_2_EndInvoke_m47171_gshared (Func_2_t7277 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m47171(__this, ___result, method) (( KeyValuePair_2_t6110  (*) (Func_2_t7277 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m47171_gshared)(__this, ___result, method)
