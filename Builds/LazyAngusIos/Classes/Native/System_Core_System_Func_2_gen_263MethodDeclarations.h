#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.DateTime>
struct Func_2_t6766;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Func`2<System.Object,System.DateTime>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m40994_gshared (Func_2_t6766 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m40994(__this, ___object, ___method, method) (( void (*) (Func_2_t6766 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m40994_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.DateTime>::Invoke(T)
extern "C" DateTime_t287  Func_2_Invoke_m40995_gshared (Func_2_t6766 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m40995(__this, ___arg1, method) (( DateTime_t287  (*) (Func_2_t6766 *, Object_t *, const MethodInfo*))Func_2_Invoke_m40995_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.DateTime>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m40996_gshared (Func_2_t6766 * __this, Object_t * ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m40996(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6766 *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m40996_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.DateTime>::EndInvoke(System.IAsyncResult)
extern "C" DateTime_t287  Func_2_EndInvoke_m40997_gshared (Func_2_t6766 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m40997(__this, ___result, method) (( DateTime_t287  (*) (Func_2_t6766 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m40997_gshared)(__this, ___result, method)
