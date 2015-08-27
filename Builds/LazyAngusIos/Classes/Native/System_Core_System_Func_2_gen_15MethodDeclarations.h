﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Reflection.ParameterInfo,System.Type>
struct Func_2_t1209;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t1384;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Reflection.ParameterInfo,System.Type>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m7450(__this, ___object, ___method, method) (( void (*) (Func_2_t1209 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7490_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Reflection.ParameterInfo,System.Type>::Invoke(T)
#define Func_2_Invoke_m32201(__this, ___arg1, method) (( Type_t * (*) (Func_2_t1209 *, ParameterInfo_t1384 *, const MethodInfo*))Func_2_Invoke_m30855_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Reflection.ParameterInfo,System.Type>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m32202(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1209 *, ParameterInfo_t1384 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30857_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Reflection.ParameterInfo,System.Type>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m32203(__this, ___result, method) (( Type_t * (*) (Func_2_t1209 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30859_gshared)(__this, ___result, method)
