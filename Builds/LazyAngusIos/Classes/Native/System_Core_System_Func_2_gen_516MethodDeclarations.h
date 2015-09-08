#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Func_2_t8159;
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
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m55441_gshared (Func_2_t8159 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m55441(__this, ___object, ___method, method) (( void (*) (Func_2_t8159 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m55441_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Invoke(T)
extern "C" KeyValuePair_2_t6086  Func_2_Invoke_m55443_gshared (Func_2_t8159 * __this, KeyValuePair_2_t7769  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m55443(__this, ___arg1, method) (( KeyValuePair_2_t6086  (*) (Func_2_t8159 *, KeyValuePair_2_t7769 , const MethodInfo*))Func_2_Invoke_m55443_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m55445_gshared (Func_2_t8159 * __this, KeyValuePair_2_t7769  ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m55445(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t8159 *, KeyValuePair_2_t7769 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m55445_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t6086  Func_2_EndInvoke_m55447_gshared (Func_2_t8159 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m55447(__this, ___result, method) (( KeyValuePair_2_t6086  (*) (Func_2_t8159 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m55447_gshared)(__this, ___result, method)
