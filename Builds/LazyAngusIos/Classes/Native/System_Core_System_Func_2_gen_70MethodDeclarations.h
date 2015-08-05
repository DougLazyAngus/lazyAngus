#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Linq.IGrouping`2<System.String,System.String>,System.Boolean>
struct Func_2_t6038;
// System.Object
struct Object_t;
// System.Linq.IGrouping`2<System.String,System.String>
struct IGrouping_2_t2373;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Linq.IGrouping`2<System.String,System.String>,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_57MethodDeclarations.h"
#define Func_2__ctor_m31765(__this, ___object, ___method, method) (( void (*) (Func_2_t6038 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m29494_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Linq.IGrouping`2<System.String,System.String>,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m31766(__this, ___arg1, method) (( bool (*) (Func_2_t6038 *, Object_t*, const MethodInfo*))Func_2_Invoke_m29496_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Linq.IGrouping`2<System.String,System.String>,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m31767(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6038 *, Object_t*, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m29498_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Linq.IGrouping`2<System.String,System.String>,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m31768(__this, ___result, method) (( bool (*) (Func_2_t6038 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m29500_gshared)(__this, ___result, method)
