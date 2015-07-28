﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<Parse.ParseObject,System.String>
struct Func_2_t1138;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Parse.ParseObject
struct ParseObject_t1160;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<Parse.ParseObject,System.String>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m7092(__this, ___object, ___method, method) (( void (*) (Func_2_t1138 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7151_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<Parse.ParseObject,System.String>::Invoke(T)
#define Func_2_Invoke_m31265(__this, ___arg1, method) (( String_t* (*) (Func_2_t1138 *, ParseObject_t1160 *, const MethodInfo*))Func_2_Invoke_m29980_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<Parse.ParseObject,System.String>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m31266(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1138 *, ParseObject_t1160 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m29982_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<Parse.ParseObject,System.String>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m31267(__this, ___result, method) (( String_t* (*) (Func_2_t1138 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m29984_gshared)(__this, ___result, method)
