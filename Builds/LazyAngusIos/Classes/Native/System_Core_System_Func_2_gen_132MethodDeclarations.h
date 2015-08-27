﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Boolean,System.Byte>
struct Func_2_t6428;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Boolean,System.Byte>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Byte,System.Byte>
#include "System_Core_System_Func_2_gen_110MethodDeclarations.h"
#define Func_2__ctor_m36507(__this, ___object, ___method, method) (( void (*) (Func_2_t6428 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m35933_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Boolean,System.Byte>::Invoke(T)
#define Func_2_Invoke_m36508(__this, ___arg1, method) (( uint8_t (*) (Func_2_t6428 *, bool, const MethodInfo*))Func_2_Invoke_m35934_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Boolean,System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m36509(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6428 *, bool, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m35935_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Boolean,System.Byte>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m36510(__this, ___result, method) (( uint8_t (*) (Func_2_t6428 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m35936_gshared)(__this, ___result, method)
