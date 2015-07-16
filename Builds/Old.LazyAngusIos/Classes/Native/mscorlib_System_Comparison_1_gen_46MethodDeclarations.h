#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t3865;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m25353_gshared (Comparison_1_t3865 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m25353(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3865 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m25353_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m25354_gshared (Comparison_1_t3865 * __this, UILineInfo_t912  ___x, UILineInfo_t912  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m25354(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3865 *, UILineInfo_t912 , UILineInfo_t912 , const MethodInfo*))Comparison_1_Invoke_m25354_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m25355_gshared (Comparison_1_t3865 * __this, UILineInfo_t912  ___x, UILineInfo_t912  ___y, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m25355(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3865 *, UILineInfo_t912 , UILineInfo_t912 , AsyncCallback_t387 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m25355_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m25356_gshared (Comparison_1_t3865 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m25356(__this, ___result, method) (( int32_t (*) (Comparison_1_t3865 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m25356_gshared)(__this, ___result, method)
