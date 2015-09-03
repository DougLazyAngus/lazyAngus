#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Collections.Generic.List`1<System.Object>>
struct Func_2_t7515;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t698;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Collections.Generic.List`1<System.Object>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m47827(__this, ___object, ___method, method) (( void (*) (Func_2_t7515 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7626_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Collections.Generic.List`1<System.Object>>::Invoke(T)
#define Func_2_Invoke_m47828(__this, ___arg1, method) (( List_1_t698 * (*) (Func_2_t7515 *, Object_t *, const MethodInfo*))Func_2_Invoke_m35410_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Collections.Generic.List`1<System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m47829(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7515 *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m35412_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Collections.Generic.List`1<System.Object>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m47830(__this, ___result, method) (( List_1_t698 * (*) (Func_2_t7515 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m35414_gshared)(__this, ___result, method)
