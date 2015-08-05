#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct Func_2_t7711;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m52406_gshared (Func_2_t7711 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m52406(__this, ___object, ___method, method) (( void (*) (Func_2_t7711 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m52406_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Invoke(T)
extern "C" KeyValuePair_2_t7184  Func_2_Invoke_m52408_gshared (Func_2_t7711 * __this, KeyValuePair_2_t7133  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m52408(__this, ___arg1, method) (( KeyValuePair_2_t7184  (*) (Func_2_t7711 *, KeyValuePair_2_t7133 , const MethodInfo*))Func_2_Invoke_m52408_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m52410_gshared (Func_2_t7711 * __this, KeyValuePair_2_t7133  ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m52410(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7711 *, KeyValuePair_2_t7133 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m52410_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t7184  Func_2_EndInvoke_m52412_gshared (Func_2_t7711 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m52412(__this, ___result, method) (( KeyValuePair_2_t7184  (*) (Func_2_t7711 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m52412_gshared)(__this, ___result, method)
