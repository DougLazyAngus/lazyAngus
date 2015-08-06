#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Char>
struct Func_2_t6664;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Char>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.UInt16>
#include "System_Core_System_Func_2_gen_160MethodDeclarations.h"
#define Func_2__ctor_m39650(__this, ___object, ___method, method) (( void (*) (Func_2_t6664 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m36908_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Char>::Invoke(T)
#define Func_2_Invoke_m39651(__this, ___arg1, method) (( uint16_t (*) (Func_2_t6664 *, Object_t *, const MethodInfo*))Func_2_Invoke_m36909_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Char>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m39652(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6664 *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m36910_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Char>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m39653(__this, ___result, method) (( uint16_t (*) (Func_2_t6664 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m36911_gshared)(__this, ___result, method)
