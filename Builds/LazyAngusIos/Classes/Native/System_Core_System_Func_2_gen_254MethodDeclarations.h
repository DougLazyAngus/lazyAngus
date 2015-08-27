﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.UInt16,System.Single>
struct Func_2_t6815;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.UInt16,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m41454_gshared (Func_2_t6815 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m41454(__this, ___object, ___method, method) (( void (*) (Func_2_t6815 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m41454_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.UInt16,System.Single>::Invoke(T)
extern "C" float Func_2_Invoke_m41455_gshared (Func_2_t6815 * __this, uint16_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m41455(__this, ___arg1, method) (( float (*) (Func_2_t6815 *, uint16_t, const MethodInfo*))Func_2_Invoke_m41455_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.UInt16,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m41456_gshared (Func_2_t6815 * __this, uint16_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m41456(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6815 *, uint16_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m41456_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.UInt16,System.Single>::EndInvoke(System.IAsyncResult)
extern "C" float Func_2_EndInvoke_m41457_gshared (Func_2_t6815 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m41457(__this, ___result, method) (( float (*) (Func_2_t6815 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m41457_gshared)(__this, ___result, method)
