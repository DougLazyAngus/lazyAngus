#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<Parse.ParseFile,System.Object>
struct Func_2_t6876;
// System.Object
struct Object_t;
// Parse.ParseFile
struct ParseFile_t1240;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<Parse.ParseFile,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m42209(__this, ___object, ___method, method) (( void (*) (Func_2_t6876 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7457_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<Parse.ParseFile,System.Object>::Invoke(T)
#define Func_2_Invoke_m42210(__this, ___arg1, method) (( Object_t * (*) (Func_2_t6876 *, ParseFile_t1240 *, const MethodInfo*))Func_2_Invoke_m30822_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<Parse.ParseFile,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m42211(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6876 *, ParseFile_t1240 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30824_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<Parse.ParseFile,System.Object>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m42212(__this, ___result, method) (( Object_t * (*) (Func_2_t6876 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30826_gshared)(__this, ___result, method)
