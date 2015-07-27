#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<UnityEngine.UI.Toggle,System.Boolean>
struct Func_2_t879;
// System.Object
struct Object_t;
// UnityEngine.UI.Toggle
struct Toggle_t876;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_4MethodDeclarations.h"
#define Func_2__ctor_m5535(__this, ___object, ___method, method) (( void (*) (Func_2_t879 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m25309_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m25310(__this, ___arg1, method) (( bool (*) (Func_2_t879 *, Toggle_t876 *, const MethodInfo*))Func_2_Invoke_m25311_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m25312(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t879 *, Toggle_t876 *, AsyncCallback_t346 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m25313_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m25314(__this, ___result, method) (( bool (*) (Func_2_t879 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m25315_gshared)(__this, ___result, method)
