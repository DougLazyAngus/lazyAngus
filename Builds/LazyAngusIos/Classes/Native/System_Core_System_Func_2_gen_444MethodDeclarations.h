#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct Func_2_t7959;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m53098_gshared (Func_2_t7959 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m53098(__this, ___object, ___method, method) (( void (*) (Func_2_t7959 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m53098_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Invoke(T)
extern "C" KeyValuePair_2_t7764  Func_2_Invoke_m53100_gshared (Func_2_t7959 * __this, KeyValuePair_2_t7764  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m53100(__this, ___arg1, method) (( KeyValuePair_2_t7764  (*) (Func_2_t7959 *, KeyValuePair_2_t7764 , const MethodInfo*))Func_2_Invoke_m53100_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m53102_gshared (Func_2_t7959 * __this, KeyValuePair_2_t7764  ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m53102(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7959 *, KeyValuePair_2_t7764 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m53102_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t7764  Func_2_EndInvoke_m53104_gshared (Func_2_t7959 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m53104(__this, ___result, method) (( KeyValuePair_2_t7764  (*) (Func_2_t7959 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m53104_gshared)(__this, ___result, method)
