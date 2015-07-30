#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.UInt32,System.Boolean>
struct Func_2_t6326;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.UInt32,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.UInt32,System.Byte>
#include "System_Core_System_Func_2_gen_121MethodDeclarations.h"
#define Func_2__ctor_m35426(__this, ___object, ___method, method) (( void (*) (Func_2_t6326 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m35407_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.UInt32,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m35427(__this, ___arg1, method) (( bool (*) (Func_2_t6326 *, uint32_t, const MethodInfo*))Func_2_Invoke_m35408_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.UInt32,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m35428(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6326 *, uint32_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m35409_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.UInt32,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m35429(__this, ___result, method) (( bool (*) (Func_2_t6326 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m35410_gshared)(__this, ___result, method)
