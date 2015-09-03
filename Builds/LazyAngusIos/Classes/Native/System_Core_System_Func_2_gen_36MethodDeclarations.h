#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<Parse.ParseFile,System.Boolean>
struct Func_2_t1303;
// System.Object
struct Object_t;
// Parse.ParseFile
struct ParseFile_t1259;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<Parse.ParseFile,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_57MethodDeclarations.h"
#define Func_2__ctor_m7765(__this, ___object, ___method, method) (( void (*) (Func_2_t1303 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m34853_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<Parse.ParseFile,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m38110(__this, ___arg1, method) (( bool (*) (Func_2_t1303 *, ParseFile_t1259 *, const MethodInfo*))Func_2_Invoke_m34855_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<Parse.ParseFile,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m38111(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1303 *, ParseFile_t1259 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m34857_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<Parse.ParseFile,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m38112(__this, ___result, method) (( bool (*) (Func_2_t1303 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m34859_gshared)(__this, ___result, method)
