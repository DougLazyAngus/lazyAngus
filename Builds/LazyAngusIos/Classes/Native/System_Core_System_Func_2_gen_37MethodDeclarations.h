#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<Parse.ParseFile,System.Threading.Tasks.Task>
struct Func_2_t1439;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1155;
// Parse.ParseFile
struct ParseFile_t1187;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<Parse.ParseFile,System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m7337(__this, ___object, ___method, method) (( void (*) (Func_2_t1439 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7197_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<Parse.ParseFile,System.Threading.Tasks.Task>::Invoke(T)
#define Func_2_Invoke_m33355(__this, ___arg1, method) (( Task_t1155 * (*) (Func_2_t1439 *, ParseFile_t1187 *, const MethodInfo*))Func_2_Invoke_m30027_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<Parse.ParseFile,System.Threading.Tasks.Task>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m33356(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1439 *, ParseFile_t1187 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30029_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<Parse.ParseFile,System.Threading.Tasks.Task>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m33357(__this, ___result, method) (( Task_t1155 * (*) (Func_2_t1439 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30031_gshared)(__this, ___result, method)
