#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t3822;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t388;
// System.AsyncCallback
struct AsyncCallback_t389;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m25139_gshared (Comparison_1_t3822 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m25139(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3822 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m25139_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m25140_gshared (Comparison_1_t3822 * __this, UILineInfo_t865  ___x, UILineInfo_t865  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m25140(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3822 *, UILineInfo_t865 , UILineInfo_t865 , const MethodInfo*))Comparison_1_Invoke_m25140_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m25141_gshared (Comparison_1_t3822 * __this, UILineInfo_t865  ___x, UILineInfo_t865  ___y, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m25141(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3822 *, UILineInfo_t865 , UILineInfo_t865 , AsyncCallback_t389 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m25141_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m25142_gshared (Comparison_1_t3822 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m25142(__this, ___result, method) (( int32_t (*) (Comparison_1_t3822 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m25142_gshared)(__this, ___result, method)
