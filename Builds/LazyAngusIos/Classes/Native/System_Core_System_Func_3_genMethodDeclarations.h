﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_t1132;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_3__ctor_m7063_gshared (Func_3_t1132 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_3__ctor_m7063(__this, ___object, ___method, method) (( void (*) (Func_3_t1132 *, Object_t *, IntPtr_t, const MethodInfo*))Func_3__ctor_m7063_gshared)(__this, ___object, ___method, method)
// TResult System.Func`3<System.Object,System.Object,System.Object>::Invoke(T1,T2)
extern "C" Object_t * Func_3_Invoke_m29902_gshared (Func_3_t1132 * __this, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method);
#define Func_3_Invoke_m29902(__this, ___arg1, ___arg2, method) (( Object_t * (*) (Func_3_t1132 *, Object_t *, Object_t *, const MethodInfo*))Func_3_Invoke_m29902_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult System.Func`3<System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_3_BeginInvoke_m29904_gshared (Func_3_t1132 * __this, Object_t * ___arg1, Object_t * ___arg2, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_3_BeginInvoke_m29904(__this, ___arg1, ___arg2, ___callback, ___object, method) (( Object_t * (*) (Func_3_t1132 *, Object_t *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_3_BeginInvoke_m29904_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// TResult System.Func`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_3_EndInvoke_m29906_gshared (Func_3_t1132 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_3_EndInvoke_m29906(__this, ___result, method) (( Object_t * (*) (Func_3_t1132 *, Object_t *, const MethodInfo*))Func_3_EndInvoke_m29906_gshared)(__this, ___result, method)