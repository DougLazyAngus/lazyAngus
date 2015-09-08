#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Char,System.Single>
struct Func_2_t7393;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Char,System.Single>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.UInt16,System.Single>
#include "System_Core_System_Func_2_gen_254MethodDeclarations.h"
#define Func_2__ctor_m46222(__this, ___object, ___method, method) (( void (*) (Func_2_t7393 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m46047_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Char,System.Single>::Invoke(T)
#define Func_2_Invoke_m46223(__this, ___arg1, method) (( float (*) (Func_2_t7393 *, uint16_t, const MethodInfo*))Func_2_Invoke_m46048_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Char,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m46224(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7393 *, uint16_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m46049_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Char,System.Single>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m46225(__this, ___result, method) (( float (*) (Func_2_t7393 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m46050_gshared)(__this, ___result, method)
