#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct Func_2_t7189;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "System_Core_System_Func_2_gen_380MethodDeclarations.h"
#define Func_2__ctor_m46457(__this, ___object, ___method, method) (( void (*) (Func_2_t7189 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m46458_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Invoke(T)
#define Func_2_Invoke_m46459(__this, ___arg1, method) (( KeyValuePair_2_t778  (*) (Func_2_t7189 *, KeyValuePair_2_t7190 , const MethodInfo*))Func_2_Invoke_m46460_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m46461(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7189 *, KeyValuePair_2_t7190 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m46462_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m46463(__this, ___result, method) (( KeyValuePair_2_t778  (*) (Func_2_t7189 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m46464_gshared)(__this, ___result, method)
