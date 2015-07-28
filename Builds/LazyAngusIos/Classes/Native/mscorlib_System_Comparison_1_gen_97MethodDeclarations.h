#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t8362;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m60288_gshared (Comparison_1_t8362 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m60288(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8362 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m60288_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m60289_gshared (Comparison_1_t8362 * __this, UILineInfo_t1009  ___x, UILineInfo_t1009  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m60289(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8362 *, UILineInfo_t1009 , UILineInfo_t1009 , const MethodInfo*))Comparison_1_Invoke_m60289_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m60290_gshared (Comparison_1_t8362 * __this, UILineInfo_t1009  ___x, UILineInfo_t1009  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m60290(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8362 *, UILineInfo_t1009 , UILineInfo_t1009 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m60290_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m60291_gshared (Comparison_1_t8362 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m60291(__this, ___result, method) (( int32_t (*) (Comparison_1_t8362 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m60291_gshared)(__this, ___result, method)
