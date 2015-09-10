#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>
struct Func_2_t8581;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_61.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
#include "System_Core_System_Func_2_gen_678MethodDeclarations.h"
#define Func_2__ctor_m60586(__this, ___object, ___method, method) (( void (*) (Func_2_t8581 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m60587_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>::Invoke(T)
#define Func_2_Invoke_m60588(__this, ___arg1, method) (( KeyValuePair_2_t7712  (*) (Func_2_t8581 *, KeyValuePair_2_t802 , const MethodInfo*))Func_2_Invoke_m60589_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m60590(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t8581 *, KeyValuePair_2_t802 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m60591_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m60592(__this, ___result, method) (( KeyValuePair_2_t7712  (*) (Func_2_t8581 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m60593_gshared)(__this, ___result, method)
