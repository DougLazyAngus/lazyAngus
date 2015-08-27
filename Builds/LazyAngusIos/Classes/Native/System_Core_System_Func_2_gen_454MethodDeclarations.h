#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct Func_2_t7414;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m48706_gshared (Func_2_t7414 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m48706(__this, ___object, ___method, method) (( void (*) (Func_2_t7414 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m48706_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Invoke(T)
extern "C" KeyValuePair_2_t7199  Func_2_Invoke_m48708_gshared (Func_2_t7414 * __this, KeyValuePair_2_t7250  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m48708(__this, ___arg1, method) (( KeyValuePair_2_t7199  (*) (Func_2_t7414 *, KeyValuePair_2_t7250 , const MethodInfo*))Func_2_Invoke_m48708_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m48710_gshared (Func_2_t7414 * __this, KeyValuePair_2_t7250  ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m48710(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7414 *, KeyValuePair_2_t7250 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m48710_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t7199  Func_2_EndInvoke_m48712_gshared (Func_2_t7414 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m48712(__this, ___result, method) (( KeyValuePair_2_t7199  (*) (Func_2_t7414 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m48712_gshared)(__this, ___result, method)
