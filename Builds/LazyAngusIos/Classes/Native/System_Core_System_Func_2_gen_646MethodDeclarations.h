#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct Func_2_t7842;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_52.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m54151_gshared (Func_2_t7842 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m54151(__this, ___object, ___method, method) (( void (*) (Func_2_t7842 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m54151_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Invoke(T)
extern "C" KeyValuePair_2_t6926  Func_2_Invoke_m54153_gshared (Func_2_t7842 * __this, KeyValuePair_2_t6107  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m54153(__this, ___arg1, method) (( KeyValuePair_2_t6926  (*) (Func_2_t7842 *, KeyValuePair_2_t6107 , const MethodInfo*))Func_2_Invoke_m54153_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m54155_gshared (Func_2_t7842 * __this, KeyValuePair_2_t6107  ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m54155(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7842 *, KeyValuePair_2_t6107 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m54155_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t6926  Func_2_EndInvoke_m54157_gshared (Func_2_t7842 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m54157(__this, ___result, method) (( KeyValuePair_2_t6926  (*) (Func_2_t7842 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m54157_gshared)(__this, ___result, method)
