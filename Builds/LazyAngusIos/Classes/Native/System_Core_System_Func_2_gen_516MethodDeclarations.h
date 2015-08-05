#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
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
// System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m50032_gshared (Func_2_t7512 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m50032(__this, ___object, ___method, method) (( void (*) (Func_2_t7512 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m50032_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Invoke(T)
extern "C" KeyValuePair_2_t5488  Func_2_Invoke_m50034_gshared (Func_2_t7512 * __this, KeyValuePair_2_t7122  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m50034(__this, ___arg1, method) (( KeyValuePair_2_t5488  (*) (Func_2_t7512 *, KeyValuePair_2_t7122 , const MethodInfo*))Func_2_Invoke_m50034_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m50036_gshared (Func_2_t7512 * __this, KeyValuePair_2_t7122  ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m50036(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7512 *, KeyValuePair_2_t7122 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m50036_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t5488  Func_2_EndInvoke_m50038_gshared (Func_2_t7512 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m50038(__this, ___result, method) (( KeyValuePair_2_t5488  (*) (Func_2_t7512 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m50038_gshared)(__this, ___result, method)
