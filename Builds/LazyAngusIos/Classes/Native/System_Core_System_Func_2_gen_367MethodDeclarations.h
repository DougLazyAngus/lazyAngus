﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseObject>,System.Object>
struct Func_2_t7125;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,Parse.ParseObject>
struct Dictionary_2_t1489;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseObject>,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m45498(__this, ___object, ___method, method) (( void (*) (Func_2_t7125 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7490_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseObject>,System.Object>::Invoke(T)
#define Func_2_Invoke_m45499(__this, ___arg1, method) (( Object_t * (*) (Func_2_t7125 *, Dictionary_2_t1489 *, const MethodInfo*))Func_2_Invoke_m30855_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseObject>,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m45500(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7125 *, Dictionary_2_t1489 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30857_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseObject>,System.Object>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m45501(__this, ___result, method) (( Object_t * (*) (Func_2_t7125 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30859_gshared)(__this, ___result, method)
