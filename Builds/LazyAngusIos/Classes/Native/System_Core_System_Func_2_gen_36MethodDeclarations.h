#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<Parse.ParseFile,System.Boolean>
struct Func_2_t1235;
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

// System.Void System.Func`2<Parse.ParseFile,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_57MethodDeclarations.h"
#define Func_2__ctor_m7361(__this, ___object, ___method, method) (( void (*) (Func_2_t1235 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m29499_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<Parse.ParseFile,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m32747(__this, ___arg1, method) (( bool (*) (Func_2_t1235 *, ParseFile_t1191 *, const MethodInfo*))Func_2_Invoke_m29501_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<Parse.ParseFile,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m32748(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1235 *, ParseFile_t1191 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m29503_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<Parse.ParseFile,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m32749(__this, ___result, method) (( bool (*) (Func_2_t1235 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m29505_gshared)(__this, ___result, method)
