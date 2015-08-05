#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,Parse.ParseFile>
struct Func_2_t6803;
// System.Object
struct Object_t;
// Parse.ParseFile
struct ParseFile_t1191;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,Parse.ParseFile>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m41469(__this, ___object, ___method, method) (( void (*) (Func_2_t6803 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7222_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,Parse.ParseFile>::Invoke(T)
#define Func_2_Invoke_m41470(__this, ___arg1, method) (( ParseFile_t1191 * (*) (Func_2_t6803 *, Object_t *, const MethodInfo*))Func_2_Invoke_m30055_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,Parse.ParseFile>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m41471(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6803 *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30057_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,Parse.ParseFile>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m41472(__this, ___result, method) (( ParseFile_t1191 * (*) (Func_2_t6803 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30059_gshared)(__this, ___result, method)
