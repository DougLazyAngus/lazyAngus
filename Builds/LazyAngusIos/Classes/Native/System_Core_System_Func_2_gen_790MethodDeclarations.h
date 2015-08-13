#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseRole>>>
struct Func_2_t8233;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseRole>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_130.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseRole>>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "System_Core_System_Func_2_gen_66MethodDeclarations.h"
#define Func_2__ctor_m59058(__this, ___object, ___method, method) (( void (*) (Func_2_t8233 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m31419_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseRole>>>::Invoke(T)
#define Func_2_Invoke_m59059(__this, ___arg1, method) (( KeyValuePair_2_t8232  (*) (Func_2_t8233 *, KeyValuePair_2_t777 , const MethodInfo*))Func_2_Invoke_m31421_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseRole>>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m59060(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t8233 *, KeyValuePair_2_t777 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m31423_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseRole>>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m59061(__this, ___result, method) (( KeyValuePair_2_t8232  (*) (Func_2_t8233 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m31425_gshared)(__this, ___result, method)
