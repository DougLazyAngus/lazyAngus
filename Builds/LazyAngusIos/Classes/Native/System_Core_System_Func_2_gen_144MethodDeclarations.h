#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Char,System.SByte>
struct Func_2_t6470;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Char,System.SByte>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.UInt16,System.SByte>
#include "System_Core_System_Func_2_gen_139MethodDeclarations.h"
#define Func_2__ctor_m37040(__this, ___object, ___method, method) (( void (*) (Func_2_t6470 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m36865_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Char,System.SByte>::Invoke(T)
#define Func_2_Invoke_m37041(__this, ___arg1, method) (( int8_t (*) (Func_2_t6470 *, uint16_t, const MethodInfo*))Func_2_Invoke_m36866_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Char,System.SByte>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m37042(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6470 *, uint16_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m36867_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Char,System.SByte>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m37043(__this, ___result, method) (( int8_t (*) (Func_2_t6470 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m36868_gshared)(__this, ___result, method)
