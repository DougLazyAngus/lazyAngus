#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Boolean,System.Int32>
struct Func_2_t7148;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Boolean,System.Int32>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Byte,System.Int32>
#include "System_Core_System_Func_2_gen_173MethodDeclarations.h"
#define Func_2__ctor_m43024(__this, ___object, ___method, method) (( void (*) (Func_2_t7148 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m43005_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Boolean,System.Int32>::Invoke(T)
#define Func_2_Invoke_m43025(__this, ___arg1, method) (( int32_t (*) (Func_2_t7148 *, bool, const MethodInfo*))Func_2_Invoke_m43006_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Boolean,System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m43026(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7148 *, bool, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m43007_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Boolean,System.Int32>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m43027(__this, ___result, method) (( int32_t (*) (Func_2_t7148 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m43008_gshared)(__this, ___result, method)
