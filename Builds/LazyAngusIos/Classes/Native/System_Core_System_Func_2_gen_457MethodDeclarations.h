#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Char>,System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct Func_2_t7414;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Char>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_79.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Char>,System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
#include "System_Core_System_Func_2_gen_448MethodDeclarations.h"
#define Func_2__ctor_m48670(__this, ___object, ___method, method) (( void (*) (Func_2_t7414 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m48456_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Char>,System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Invoke(T)
#define Func_2_Invoke_m48671(__this, ___arg1, method) (( KeyValuePair_2_t7194  (*) (Func_2_t7414 *, KeyValuePair_2_t7265 , const MethodInfo*))Func_2_Invoke_m48458_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Char>,System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m48672(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7414 *, KeyValuePair_2_t7265 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m48460_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Char>,System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m48673(__this, ___result, method) (( KeyValuePair_2_t7194  (*) (Func_2_t7414 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m48462_gshared)(__this, ___result, method)
