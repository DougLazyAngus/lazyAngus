#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,System.String>>
struct Func_2_t7582;
// System.Object
struct Object_t;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t706;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,System.String>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m48743(__this, ___object, ___method, method) (( void (*) (Func_2_t7582 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7626_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,System.String>>::Invoke(T)
#define Func_2_Invoke_m48744(__this, ___arg1, method) (( Object_t* (*) (Func_2_t7582 *, Object_t *, const MethodInfo*))Func_2_Invoke_m35410_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,System.String>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m48745(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7582 *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m35412_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Collections.Generic.IDictionary`2<System.String,System.String>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m48746(__this, ___result, method) (( Object_t* (*) (Func_2_t7582 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m35414_gshared)(__this, ___result, method)
