#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct Func_2_t7472;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m49549_gshared (Func_2_t7472 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m49549(__this, ___object, ___method, method) (( void (*) (Func_2_t7472 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m49549_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Invoke(T)
extern "C" KeyValuePair_2_t7140  Func_2_Invoke_m49551_gshared (Func_2_t7472 * __this, KeyValuePair_2_t6932  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m49551(__this, ___arg1, method) (( KeyValuePair_2_t7140  (*) (Func_2_t7472 *, KeyValuePair_2_t6932 , const MethodInfo*))Func_2_Invoke_m49551_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m49553_gshared (Func_2_t7472 * __this, KeyValuePair_2_t6932  ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m49553(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7472 *, KeyValuePair_2_t6932 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m49553_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t7140  Func_2_EndInvoke_m49555_gshared (Func_2_t7472 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m49555(__this, ___result, method) (( KeyValuePair_2_t7140  (*) (Func_2_t7472 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m49555_gshared)(__this, ___result, method)
