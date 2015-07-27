#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t3932;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Comparison`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m26283_gshared (Comparison_1_t3932 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m26283(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3932 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m26283_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m26284_gshared (Comparison_1_t3932 * __this, UICharInfo_t970  ___x, UICharInfo_t970  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m26284(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3932 *, UICharInfo_t970 , UICharInfo_t970 , const MethodInfo*))Comparison_1_Invoke_m26284_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m26285_gshared (Comparison_1_t3932 * __this, UICharInfo_t970  ___x, UICharInfo_t970  ___y, AsyncCallback_t346 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m26285(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3932 *, UICharInfo_t970 , UICharInfo_t970 , AsyncCallback_t346 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m26285_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m26286_gshared (Comparison_1_t3932 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m26286(__this, ___result, method) (( int32_t (*) (Comparison_1_t3932 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m26286_gshared)(__this, ___result, method)
