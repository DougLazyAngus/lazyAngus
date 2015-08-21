#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct Func_2_t7489;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m49604_gshared (Func_2_t7489 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m49604(__this, ___object, ___method, method) (( void (*) (Func_2_t7489 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m49604_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Invoke(T)
extern "C" KeyValuePair_2_t7207  Func_2_Invoke_m49606_gshared (Func_2_t7489 * __this, KeyValuePair_2_t7004  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m49606(__this, ___arg1, method) (( KeyValuePair_2_t7207  (*) (Func_2_t7489 *, KeyValuePair_2_t7004 , const MethodInfo*))Func_2_Invoke_m49606_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m49608_gshared (Func_2_t7489 * __this, KeyValuePair_2_t7004  ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m49608(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7489 *, KeyValuePair_2_t7004 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m49608_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t7207  Func_2_EndInvoke_m49610_gshared (Func_2_t7489 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m49610(__this, ___result, method) (( KeyValuePair_2_t7207  (*) (Func_2_t7489 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m49610_gshared)(__this, ___result, method)
