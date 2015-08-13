#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Collections.Generic.List`1<Parse.ParseGeoPoint>>
struct Func_2_t6953;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<Parse.ParseGeoPoint>
struct List_1_t6860;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Collections.Generic.List`1<Parse.ParseGeoPoint>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m43244(__this, ___object, ___method, method) (( void (*) (Func_2_t6953 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7470_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Collections.Generic.List`1<Parse.ParseGeoPoint>>::Invoke(T)
#define Func_2_Invoke_m43245(__this, ___arg1, method) (( List_1_t6860 * (*) (Func_2_t6953 *, Object_t *, const MethodInfo*))Func_2_Invoke_m30734_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Collections.Generic.List`1<Parse.ParseGeoPoint>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m43246(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6953 *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30736_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Collections.Generic.List`1<Parse.ParseGeoPoint>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m43247(__this, ___result, method) (( List_1_t6860 * (*) (Func_2_t6953 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30738_gshared)(__this, ___result, method)
