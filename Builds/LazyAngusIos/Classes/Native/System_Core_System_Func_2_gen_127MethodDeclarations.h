#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Char,System.Boolean>
struct Func_2_t6416;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Char,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.UInt16,System.Byte>
#include "System_Core_System_Func_2_gen_117MethodDeclarations.h"
#define Func_2__ctor_m36344(__this, ___object, ___method, method) (( void (*) (Func_2_t6416 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m36085_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Char,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m36345(__this, ___arg1, method) (( bool (*) (Func_2_t6416 *, uint16_t, const MethodInfo*))Func_2_Invoke_m36086_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Char,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m36346(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6416 *, uint16_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m36087_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Char,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m36347(__this, ___result, method) (( bool (*) (Func_2_t6416 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m36088_gshared)(__this, ___result, method)
