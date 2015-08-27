﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Double>>
struct Func_2_t7097;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Double>
struct Dictionary_2_t7081;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Double>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m45127(__this, ___object, ___method, method) (( void (*) (Func_2_t7097 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7490_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Double>>::Invoke(T)
#define Func_2_Invoke_m45128(__this, ___arg1, method) (( Dictionary_2_t7081 * (*) (Func_2_t7097 *, Object_t *, const MethodInfo*))Func_2_Invoke_m30855_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Double>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m45129(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7097 *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30857_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Double>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m45130(__this, ___result, method) (( Dictionary_2_t7081 * (*) (Func_2_t7097 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30859_gshared)(__this, ___result, method)
