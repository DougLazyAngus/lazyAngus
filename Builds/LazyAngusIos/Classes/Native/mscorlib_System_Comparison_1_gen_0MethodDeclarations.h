#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t923;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m6104_gshared (Comparison_1_t923 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m6104(__this, ___object, ___method, method) (( void (*) (Comparison_1_t923 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m6104_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m33445_gshared (Comparison_1_t923 * __this, RaycastHit_t788  ___x, RaycastHit_t788  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m33445(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t923 *, RaycastHit_t788 , RaycastHit_t788 , const MethodInfo*))Comparison_1_Invoke_m33445_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m33446_gshared (Comparison_1_t923 * __this, RaycastHit_t788  ___x, RaycastHit_t788  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m33446(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t923 *, RaycastHit_t788 , RaycastHit_t788 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m33446_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m33447_gshared (Comparison_1_t923 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m33447(__this, ___result, method) (( int32_t (*) (Comparison_1_t923 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m33447_gshared)(__this, ___result, method)
