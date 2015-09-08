#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct Func_2_t8028;
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

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m53918_gshared (Func_2_t8028 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m53918(__this, ___object, ___method, method) (( void (*) (Func_2_t8028 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m53918_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Invoke(T)
extern "C" KeyValuePair_2_t7775  Func_2_Invoke_m53920_gshared (Func_2_t8028 * __this, KeyValuePair_2_t7775  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m53920(__this, ___arg1, method) (( KeyValuePair_2_t7775  (*) (Func_2_t8028 *, KeyValuePair_2_t7775 , const MethodInfo*))Func_2_Invoke_m53920_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m53922_gshared (Func_2_t8028 * __this, KeyValuePair_2_t7775  ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m53922(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t8028 *, KeyValuePair_2_t7775 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m53922_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t7775  Func_2_EndInvoke_m53924_gshared (Func_2_t8028 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m53924(__this, ___result, method) (( KeyValuePair_2_t7775  (*) (Func_2_t8028 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m53924_gshared)(__this, ___result, method)
