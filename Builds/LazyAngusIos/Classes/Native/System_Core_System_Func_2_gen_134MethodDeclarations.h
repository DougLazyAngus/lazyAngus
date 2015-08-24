#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.SByte>
struct Func_2_t6430;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.SByte>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m36547_gshared (Func_2_t6430 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m36547(__this, ___object, ___method, method) (( void (*) (Func_2_t6430 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m36547_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.SByte>::Invoke(T)
extern "C" int8_t Func_2_Invoke_m36548_gshared (Func_2_t6430 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m36548(__this, ___arg1, method) (( int8_t (*) (Func_2_t6430 *, Object_t *, const MethodInfo*))Func_2_Invoke_m36548_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.SByte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m36549_gshared (Func_2_t6430 * __this, Object_t * ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m36549(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6430 *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m36549_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.SByte>::EndInvoke(System.IAsyncResult)
extern "C" int8_t Func_2_EndInvoke_m36550_gshared (Func_2_t6430 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m36550(__this, ___result, method) (( int8_t (*) (Func_2_t6430 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m36550_gshared)(__this, ___result, method)
