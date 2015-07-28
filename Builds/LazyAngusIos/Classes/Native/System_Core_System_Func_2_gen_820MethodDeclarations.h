﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,System.Single>
struct Func_2_t8240;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1327;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,System.Single>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Single>
#include "System_Core_System_Func_2_gen_58MethodDeclarations.h"
#define Func_2__ctor_m58774(__this, ___object, ___method, method) (( void (*) (Func_2_t8240 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m29547_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,System.Single>::Invoke(T)
#define Func_2_Invoke_m58775(__this, ___arg1, method) (( float (*) (Func_2_t8240 *, Task_1_t1327 *, const MethodInfo*))Func_2_Invoke_m29549_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m58776(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t8240 *, Task_1_t1327 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m29551_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,System.Single>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m58777(__this, ___result, method) (( float (*) (Func_2_t8240 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m29553_gshared)(__this, ___result, method)