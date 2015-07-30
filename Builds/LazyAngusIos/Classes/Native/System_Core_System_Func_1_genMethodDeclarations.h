#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<System.String>
struct Func_1_t1367;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<System.String>::.ctor(System.Object,System.IntPtr)
// System.Func`1<System.Object>
#include "System_Core_System_Func_1_gen_6MethodDeclarations.h"
#define Func_1__ctor_m7021(__this, ___object, ___method, method) (( void (*) (Func_1_t1367 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m29861_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<System.String>::Invoke()
#define Func_1_Invoke_m29862(__this, method) (( String_t* (*) (Func_1_t1367 *, const MethodInfo*))Func_1_Invoke_m29863_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.String>::BeginInvoke(System.AsyncCallback,System.Object)
#define Func_1_BeginInvoke_m29864(__this, ___callback, ___object, method) (( Object_t * (*) (Func_1_t1367 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m29865_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<System.String>::EndInvoke(System.IAsyncResult)
#define Func_1_EndInvoke_m29866(__this, ___result, method) (( String_t* (*) (Func_1_t1367 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m29867_gshared)(__this, ___result, method)
