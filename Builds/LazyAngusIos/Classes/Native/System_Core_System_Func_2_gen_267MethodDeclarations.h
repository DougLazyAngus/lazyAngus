#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<Parse.ParseFile,System.Object>
struct Func_2_t6798;
// System.Object
struct Object_t;
// Parse.ParseFile
struct ParseFile_t1187;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<Parse.ParseFile,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m41421(__this, ___object, ___method, method) (( void (*) (Func_2_t6798 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7197_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<Parse.ParseFile,System.Object>::Invoke(T)
#define Func_2_Invoke_m41422(__this, ___arg1, method) (( Object_t * (*) (Func_2_t6798 *, ParseFile_t1187 *, const MethodInfo*))Func_2_Invoke_m30027_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<Parse.ParseFile,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m41423(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6798 *, ParseFile_t1187 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30029_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<Parse.ParseFile,System.Object>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m41424(__this, ___result, method) (( Object_t * (*) (Func_2_t6798 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30031_gshared)(__this, ___result, method)
