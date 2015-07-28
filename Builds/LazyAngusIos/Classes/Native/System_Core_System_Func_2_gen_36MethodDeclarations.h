#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<Parse.ParseFile,System.Boolean>
struct Func_2_t1224;
// System.Object
struct Object_t;
// Parse.ParseFile
struct ParseFile_t1180;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<Parse.ParseFile,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_57MethodDeclarations.h"
#define Func_2__ctor_m7290(__this, ___object, ___method, method) (( void (*) (Func_2_t1224 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m29424_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<Parse.ParseFile,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m32672(__this, ___arg1, method) (( bool (*) (Func_2_t1224 *, ParseFile_t1180 *, const MethodInfo*))Func_2_Invoke_m29426_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<Parse.ParseFile,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m32673(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1224 *, ParseFile_t1180 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m29428_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<Parse.ParseFile,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m32674(__this, ___result, method) (( bool (*) (Func_2_t1224 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m29430_gshared)(__this, ___result, method)
