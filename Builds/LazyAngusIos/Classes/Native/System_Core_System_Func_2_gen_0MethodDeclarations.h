#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<UnityEngine.UI.Toggle,System.Boolean>
struct Func_2_t877;
// System.Object
struct Object_t;
// UnityEngine.UI.Toggle
struct Toggle_t874;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_4MethodDeclarations.h"
#define Func_2__ctor_m5524(__this, ___object, ___method, method) (( void (*) (Func_2_t877 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m25298_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m25299(__this, ___arg1, method) (( bool (*) (Func_2_t877 *, Toggle_t874 *, const MethodInfo*))Func_2_Invoke_m25300_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m25301(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t877 *, Toggle_t874 *, AsyncCallback_t344 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m25302_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m25303(__this, ___result, method) (( bool (*) (Func_2_t877 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m25304_gshared)(__this, ___result, method)
