#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<System.String>
struct Func_1_t1418;
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
#include "System_Core_System_Func_1_gen_7MethodDeclarations.h"
#define Func_1__ctor_m7281(__this, ___object, ___method, method) (( void (*) (Func_1_t1418 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m30656_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<System.String>::Invoke()
#define Func_1_Invoke_m30657(__this, method) (( String_t* (*) (Func_1_t1418 *, const MethodInfo*))Func_1_Invoke_m30658_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.String>::BeginInvoke(System.AsyncCallback,System.Object)
#define Func_1_BeginInvoke_m30659(__this, ___callback, ___object, method) (( Object_t * (*) (Func_1_t1418 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m30660_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<System.String>::EndInvoke(System.IAsyncResult)
#define Func_1_EndInvoke_m30661(__this, ___result, method) (( String_t* (*) (Func_1_t1418 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m30662_gshared)(__this, ___result, method)
