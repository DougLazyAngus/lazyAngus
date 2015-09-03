#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object>
struct Func_2_t7663;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t122;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m49733(__this, ___object, ___method, method) (( void (*) (Func_2_t7663 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7626_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object>::Invoke(T)
#define Func_2_Invoke_m49734(__this, ___arg1, method) (( Object_t * (*) (Func_2_t7663 *, Dictionary_2_t122 *, const MethodInfo*))Func_2_Invoke_m35410_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m49735(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7663 *, Dictionary_2_t122 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m35412_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m49736(__this, ___result, method) (( Object_t * (*) (Func_2_t7663 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m35414_gshared)(__this, ___result, method)
