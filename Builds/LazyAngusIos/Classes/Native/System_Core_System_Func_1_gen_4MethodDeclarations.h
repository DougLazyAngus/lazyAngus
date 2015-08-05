#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<Parse.ParseUser>
struct Func_1_t1267;
// System.Object
struct Object_t;
// Parse.ParseUser
struct ParseUser_t1254;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<Parse.ParseUser>::.ctor(System.Object,System.IntPtr)
// System.Func`1<System.Object>
#include "System_Core_System_Func_1_gen_6MethodDeclarations.h"
#define Func_1__ctor_m7466(__this, ___object, ___method, method) (( void (*) (Func_1_t1267 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m29884_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<Parse.ParseUser>::Invoke()
#define Func_1_Invoke_m34240(__this, method) (( ParseUser_t1254 * (*) (Func_1_t1267 *, const MethodInfo*))Func_1_Invoke_m29886_gshared)(__this, method)
// System.IAsyncResult System.Func`1<Parse.ParseUser>::BeginInvoke(System.AsyncCallback,System.Object)
#define Func_1_BeginInvoke_m34241(__this, ___callback, ___object, method) (( Object_t * (*) (Func_1_t1267 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m29888_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<Parse.ParseUser>::EndInvoke(System.IAsyncResult)
#define Func_1_EndInvoke_m34242(__this, ___result, method) (( ParseUser_t1254 * (*) (Func_1_t1267 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m29890_gshared)(__this, ___result, method)
