#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t3856;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Comparison`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m25209_gshared (Comparison_1_t3856 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m25209(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3856 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m25209_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m25210_gshared (Comparison_1_t3856 * __this, UICharInfo_t914  ___x, UICharInfo_t914  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m25210(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3856 *, UICharInfo_t914 , UICharInfo_t914 , const MethodInfo*))Comparison_1_Invoke_m25210_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m25211_gshared (Comparison_1_t3856 * __this, UICharInfo_t914  ___x, UICharInfo_t914  ___y, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m25211(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3856 *, UICharInfo_t914 , UICharInfo_t914 , AsyncCallback_t387 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m25211_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m25212_gshared (Comparison_1_t3856 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m25212(__this, ___result, method) (( int32_t (*) (Comparison_1_t3856 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m25212_gshared)(__this, ___result, method)
