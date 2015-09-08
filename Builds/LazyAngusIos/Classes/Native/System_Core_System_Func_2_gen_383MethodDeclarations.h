#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Func_2_t7767;
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
extern "C" void Func_2__ctor_m51130_gshared (Func_2_t7767 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m51130(__this, ___object, ___method, method) (( void (*) (Func_2_t7767 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m51130_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T)
extern "C" KeyValuePair_2_t70  Func_2_Invoke_m51132_gshared (Func_2_t7767 * __this, KeyValuePair_2_t7764  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m51132(__this, ___arg1, method) (( KeyValuePair_2_t70  (*) (Func_2_t7767 *, KeyValuePair_2_t7764 , const MethodInfo*))Func_2_Invoke_m51132_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m51134_gshared (Func_2_t7767 * __this, KeyValuePair_2_t7764  ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m51134(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7767 *, KeyValuePair_2_t7764 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m51134_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t70  Func_2_EndInvoke_m51136_gshared (Func_2_t7767 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m51136(__this, ___result, method) (( KeyValuePair_2_t70  (*) (Func_2_t7767 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m51136_gshared)(__this, ___result, method)
