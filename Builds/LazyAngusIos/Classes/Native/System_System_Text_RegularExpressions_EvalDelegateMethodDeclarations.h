#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.EvalDelegate
struct EvalDelegate_t4521;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.RxInterpreter
struct RxInterpreter_t4522;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Text.RegularExpressions.EvalDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void EvalDelegate__ctor_m18072 (EvalDelegate_t4521 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.EvalDelegate::Invoke(System.Text.RegularExpressions.RxInterpreter,System.Int32,System.Int32&)
extern "C" bool EvalDelegate_Invoke_m18073 (EvalDelegate_t4521 * __this, RxInterpreter_t4522 * ___interp, int32_t ___strpos, int32_t* ___strpos_result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_EvalDelegate_t4521(Il2CppObject* delegate, RxInterpreter_t4522 * ___interp, int32_t ___strpos, int32_t* ___strpos_result);
// System.IAsyncResult System.Text.RegularExpressions.EvalDelegate::BeginInvoke(System.Text.RegularExpressions.RxInterpreter,System.Int32,System.Int32&,System.AsyncCallback,System.Object)
extern "C" Object_t * EvalDelegate_BeginInvoke_m18074 (EvalDelegate_t4521 * __this, RxInterpreter_t4522 * ___interp, int32_t ___strpos, int32_t* ___strpos_result, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.EvalDelegate::EndInvoke(System.Int32&,System.IAsyncResult)
extern "C" bool EvalDelegate_EndInvoke_m18075 (EvalDelegate_t4521 * __this, int32_t* ___strpos_result, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
