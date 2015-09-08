#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Func_2_t8531;
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
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m60085_gshared (Func_2_t8531 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m60085(__this, ___object, ___method, method) (( void (*) (Func_2_t8531 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m60085_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T)
extern "C" KeyValuePair_2_t70  Func_2_Invoke_m60087_gshared (Func_2_t8531 * __this, KeyValuePair_2_t7589  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m60087(__this, ___arg1, method) (( KeyValuePair_2_t70  (*) (Func_2_t8531 *, KeyValuePair_2_t7589 , const MethodInfo*))Func_2_Invoke_m60087_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m60089_gshared (Func_2_t8531 * __this, KeyValuePair_2_t7589  ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m60089(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t8531 *, KeyValuePair_2_t7589 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m60089_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t70  Func_2_EndInvoke_m60091_gshared (Func_2_t8531 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m60091(__this, ___result, method) (( KeyValuePair_2_t70  (*) (Func_2_t8531 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m60091_gshared)(__this, ___result, method)
