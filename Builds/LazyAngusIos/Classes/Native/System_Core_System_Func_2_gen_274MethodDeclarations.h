#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,Parse.ParseRole>
struct Func_2_t7459;
// System.Object
struct Object_t;
// Parse.ParseRole
struct ParseRole_t1321;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,Parse.ParseRole>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m46989(__this, ___object, ___method, method) (( void (*) (Func_2_t7459 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7639_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,Parse.ParseRole>::Invoke(T)
#define Func_2_Invoke_m46990(__this, ___arg1, method) (( ParseRole_t1321 * (*) (Func_2_t7459 *, Object_t *, const MethodInfo*))Func_2_Invoke_m35435_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,Parse.ParseRole>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m46991(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7459 *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m35437_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,Parse.ParseRole>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m46992(__this, ___result, method) (( ParseRole_t1321 * (*) (Func_2_t7459 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m35439_gshared)(__this, ___result, method)
