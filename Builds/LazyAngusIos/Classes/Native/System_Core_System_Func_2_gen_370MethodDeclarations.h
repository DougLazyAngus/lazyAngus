#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>
struct Func_2_t7147;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>
struct Dictionary_2_t7131;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m45808(__this, ___object, ___method, method) (( void (*) (Func_2_t7147 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7457_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>::Invoke(T)
#define Func_2_Invoke_m45809(__this, ___arg1, method) (( Dictionary_2_t7131 * (*) (Func_2_t7147 *, Object_t *, const MethodInfo*))Func_2_Invoke_m30822_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m45810(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7147 *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30824_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m45811(__this, ___result, method) (( Dictionary_2_t7131 * (*) (Func_2_t7147 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30826_gshared)(__this, ___result, method)
