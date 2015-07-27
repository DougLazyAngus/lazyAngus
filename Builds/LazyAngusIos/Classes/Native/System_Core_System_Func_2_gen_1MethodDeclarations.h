#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>
struct Func_2_t900;
// System.Object
struct Object_t;
// UnityEngine.UI.ILayoutElement
struct ILayoutElement_t941;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Single>
#include "System_Core_System_Func_2_gen_6MethodDeclarations.h"
#define Func_2__ctor_m5570(__this, ___object, ___method, method) (( void (*) (Func_2_t900 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m25424_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::Invoke(T)
#define Func_2_Invoke_m25425(__this, ___arg1, method) (( float (*) (Func_2_t900 *, Object_t *, const MethodInfo*))Func_2_Invoke_m25426_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m25427(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t900 *, Object_t *, AsyncCallback_t346 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m25428_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m25429(__this, ___result, method) (( float (*) (Func_2_t900 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m25430_gshared)(__this, ___result, method)
