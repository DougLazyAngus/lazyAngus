#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t8438;
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
extern "C" void Comparison_1__ctor_m60972_gshared (Comparison_1_t8438 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m60972(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8438 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m60972_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m60973_gshared (Comparison_1_t8438 * __this, UICharInfo_t1076  ___x, UICharInfo_t1076  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m60973(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8438 *, UICharInfo_t1076 , UICharInfo_t1076 , const MethodInfo*))Comparison_1_Invoke_m60973_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m60974_gshared (Comparison_1_t8438 * __this, UICharInfo_t1076  ___x, UICharInfo_t1076  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m60974(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8438 *, UICharInfo_t1076 , UICharInfo_t1076 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m60974_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m60975_gshared (Comparison_1_t8438 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m60975(__this, ___result, method) (( int32_t (*) (Comparison_1_t8438 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m60975_gshared)(__this, ___result, method)
