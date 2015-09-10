#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t9018;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Comparison`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m65683_gshared (Comparison_1_t9018 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m65683(__this, ___object, ___method, method) (( void (*) (Comparison_1_t9018 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m65683_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m65684_gshared (Comparison_1_t9018 * __this, UICharInfo_t1106  ___x, UICharInfo_t1106  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m65684(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t9018 *, UICharInfo_t1106 , UICharInfo_t1106 , const MethodInfo*))Comparison_1_Invoke_m65684_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m65685_gshared (Comparison_1_t9018 * __this, UICharInfo_t1106  ___x, UICharInfo_t1106  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m65685(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t9018 *, UICharInfo_t1106 , UICharInfo_t1106 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m65685_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m65686_gshared (Comparison_1_t9018 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m65686(__this, ___result, method) (( int32_t (*) (Comparison_1_t9018 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m65686_gshared)(__this, ___result, method)
