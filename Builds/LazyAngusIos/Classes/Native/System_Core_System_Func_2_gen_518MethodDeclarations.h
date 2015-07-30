#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Func_2_t7512;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m50044_gshared (Func_2_t7512 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m50044(__this, ___object, ___method, method) (( void (*) (Func_2_t7512 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m50044_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Invoke(T)
extern "C" KeyValuePair_2_t5484  Func_2_Invoke_m50046_gshared (Func_2_t7512 * __this, KeyValuePair_2_t7129  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m50046(__this, ___arg1, method) (( KeyValuePair_2_t5484  (*) (Func_2_t7512 *, KeyValuePair_2_t7129 , const MethodInfo*))Func_2_Invoke_m50046_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m50048_gshared (Func_2_t7512 * __this, KeyValuePair_2_t7129  ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m50048(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7512 *, KeyValuePair_2_t7129 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m50048_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t5484  Func_2_EndInvoke_m50050_gshared (Func_2_t7512 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m50050(__this, ___result, method) (( KeyValuePair_2_t5484  (*) (Func_2_t7512 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m50050_gshared)(__this, ___result, method)
