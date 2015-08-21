#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Collections.Generic.List`1<Parse.ParseACL>>
struct Func_2_t6975;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<Parse.ParseACL>
struct List_1_t6970;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Collections.Generic.List`1<Parse.ParseACL>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m43619(__this, ___object, ___method, method) (( void (*) (Func_2_t6975 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7458_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Collections.Generic.List`1<Parse.ParseACL>>::Invoke(T)
#define Func_2_Invoke_m43620(__this, ___arg1, method) (( List_1_t6970 * (*) (Func_2_t6975 *, Object_t *, const MethodInfo*))Func_2_Invoke_m30823_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Collections.Generic.List`1<Parse.ParseACL>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m43621(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6975 *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30825_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Collections.Generic.List`1<Parse.ParseACL>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m43622(__this, ___result, method) (( List_1_t6970 * (*) (Func_2_t6975 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30827_gshared)(__this, ___result, method)
