#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct Func_2_t7512;
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
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m49858_gshared (Func_2_t7512 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m49858(__this, ___object, ___method, method) (( void (*) (Func_2_t7512 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m49858_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Invoke(T)
extern "C" KeyValuePair_2_t7239  Func_2_Invoke_m49860_gshared (Func_2_t7512 * __this, KeyValuePair_2_t7290  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m49860(__this, ___arg1, method) (( KeyValuePair_2_t7239  (*) (Func_2_t7512 *, KeyValuePair_2_t7290 , const MethodInfo*))Func_2_Invoke_m49860_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m49862_gshared (Func_2_t7512 * __this, KeyValuePair_2_t7290  ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m49862(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7512 *, KeyValuePair_2_t7290 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m49862_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t7239  Func_2_EndInvoke_m49864_gshared (Func_2_t7512 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m49864(__this, ___result, method) (( KeyValuePair_2_t7239  (*) (Func_2_t7512 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m49864_gshared)(__this, ___result, method)
