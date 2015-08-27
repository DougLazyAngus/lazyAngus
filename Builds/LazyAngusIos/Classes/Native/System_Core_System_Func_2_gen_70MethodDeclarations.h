#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Linq.IGrouping`2<System.String,System.String>,System.Boolean>
struct Func_2_t6117;
// System.Object
struct Object_t;
// System.Linq.IGrouping`2<System.String,System.String>
struct IGrouping_2_t2424;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Linq.IGrouping`2<System.String,System.String>,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_57MethodDeclarations.h"
#define Func_2__ctor_m32570(__this, ___object, ___method, method) (( void (*) (Func_2_t6117 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m30299_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Linq.IGrouping`2<System.String,System.String>,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m32571(__this, ___arg1, method) (( bool (*) (Func_2_t6117 *, Object_t*, const MethodInfo*))Func_2_Invoke_m30301_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Linq.IGrouping`2<System.String,System.String>,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m32572(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6117 *, Object_t*, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30303_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Linq.IGrouping`2<System.String,System.String>,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m32573(__this, ___result, method) (( bool (*) (Func_2_t6117 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30305_gshared)(__this, ___result, method)
