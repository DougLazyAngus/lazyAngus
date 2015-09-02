#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Func_2_t7231;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m46855_gshared (Func_2_t7231 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m46855(__this, ___object, ___method, method) (( void (*) (Func_2_t7231 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m46855_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T)
extern "C" KeyValuePair_2_t70  Func_2_Invoke_m46857_gshared (Func_2_t7231 * __this, KeyValuePair_2_t7228  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m46857(__this, ___arg1, method) (( KeyValuePair_2_t70  (*) (Func_2_t7231 *, KeyValuePair_2_t7228 , const MethodInfo*))Func_2_Invoke_m46857_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m46859_gshared (Func_2_t7231 * __this, KeyValuePair_2_t7228  ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m46859(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7231 *, KeyValuePair_2_t7228 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m46859_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t70  Func_2_EndInvoke_m46861_gshared (Func_2_t7231 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m46861(__this, ___result, method) (( KeyValuePair_2_t70  (*) (Func_2_t7231 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m46861_gshared)(__this, ___result, method)
