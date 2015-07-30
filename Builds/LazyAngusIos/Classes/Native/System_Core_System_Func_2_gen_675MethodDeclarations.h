#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct Func_2_t7916;
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
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_60.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "System_Core_System_Func_2_gen_676MethodDeclarations.h"
#define Func_2__ctor_m55046(__this, ___object, ___method, method) (( void (*) (Func_2_t7916 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m55047_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Invoke(T)
#define Func_2_Invoke_m55048(__this, ___arg1, method) (( KeyValuePair_2_t727  (*) (Func_2_t7916 *, KeyValuePair_2_t7054 , const MethodInfo*))Func_2_Invoke_m55049_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m55050(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7916 *, KeyValuePair_2_t7054 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m55051_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m55052(__this, ___result, method) (( KeyValuePair_2_t727  (*) (Func_2_t7916 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m55053_gshared)(__this, ___result, method)
