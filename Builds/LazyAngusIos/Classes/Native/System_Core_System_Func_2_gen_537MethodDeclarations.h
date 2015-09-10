#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct Func_2_t8227;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m56228_gshared (Func_2_t8227 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m56228(__this, ___object, ___method, method) (( void (*) (Func_2_t8227 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m56228_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Invoke(T)
extern "C" KeyValuePair_2_t7816  Func_2_Invoke_m56230_gshared (Func_2_t8227 * __this, KeyValuePair_2_t6764  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m56230(__this, ___arg1, method) (( KeyValuePair_2_t7816  (*) (Func_2_t8227 *, KeyValuePair_2_t6764 , const MethodInfo*))Func_2_Invoke_m56230_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m56232_gshared (Func_2_t8227 * __this, KeyValuePair_2_t6764  ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m56232(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t8227 *, KeyValuePair_2_t6764 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m56232_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t7816  Func_2_EndInvoke_m56234_gshared (Func_2_t8227 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m56234(__this, ___result, method) (( KeyValuePair_2_t7816  (*) (Func_2_t8227 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m56234_gshared)(__this, ___result, method)
