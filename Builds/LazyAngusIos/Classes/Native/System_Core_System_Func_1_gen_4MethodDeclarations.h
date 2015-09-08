#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<Parse.ParseUser>
struct Func_1_t1336;
// System.Object
struct Object_t;
// Parse.ParseUser
struct ParseUser_t1323;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<Parse.ParseUser>::.ctor(System.Object,System.IntPtr)
// System.Func`1<System.Object>
#include "System_Core_System_Func_1_gen_7MethodDeclarations.h"
#define Func_1__ctor_m7888(__this, ___object, ___method, method) (( void (*) (Func_1_t1336 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m35257_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<Parse.ParseUser>::Invoke()
#define Func_1_Invoke_m39629(__this, method) (( ParseUser_t1323 * (*) (Func_1_t1336 *, const MethodInfo*))Func_1_Invoke_m35259_gshared)(__this, method)
// System.IAsyncResult System.Func`1<Parse.ParseUser>::BeginInvoke(System.AsyncCallback,System.Object)
#define Func_1_BeginInvoke_m39630(__this, ___callback, ___object, method) (( Object_t * (*) (Func_1_t1336 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m35261_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<Parse.ParseUser>::EndInvoke(System.IAsyncResult)
#define Func_1_EndInvoke_m39631(__this, ___result, method) (( ParseUser_t1323 * (*) (Func_1_t1336 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m35263_gshared)(__this, ___result, method)
