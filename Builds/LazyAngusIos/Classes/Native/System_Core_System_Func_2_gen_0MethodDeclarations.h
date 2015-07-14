#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<UnityEngine.UI.Toggle,System.Boolean>
struct Func_2_t822;
// System.Object
struct Object_t;
// UnityEngine.UI.Toggle
struct Toggle_t819;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_4MethodDeclarations.h"
#define Func_2__ctor_m4917(__this, ___object, ___method, method) (( void (*) (Func_2_t822 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m24210_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m24211(__this, ___arg1, method) (( bool (*) (Func_2_t822 *, Toggle_t819 *, const MethodInfo*))Func_2_Invoke_m24212_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m24213(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t822 *, Toggle_t819 *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m24214_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m24215(__this, ___result, method) (( bool (*) (Func_2_t822 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m24216_gshared)(__this, ___result, method)
