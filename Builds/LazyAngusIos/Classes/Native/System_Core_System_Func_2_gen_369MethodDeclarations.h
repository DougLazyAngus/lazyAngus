﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>
struct Func_2_t7132;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>
struct Dictionary_2_t7134;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m45790(__this, ___object, ___method, method) (( void (*) (Func_2_t7132 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7490_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::Invoke(T)
#define Func_2_Invoke_m45791(__this, ___arg1, method) (( Object_t * (*) (Func_2_t7132 *, Dictionary_2_t7134 *, const MethodInfo*))Func_2_Invoke_m30855_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m45792(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7132 *, Dictionary_2_t7134 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30857_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m45793(__this, ___result, method) (( Object_t * (*) (Func_2_t7132 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30859_gshared)(__this, ___result, method)
