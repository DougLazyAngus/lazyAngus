#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t916;
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
extern "C" void Comparison_1__ctor_m6046_gshared (Comparison_1_t916 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m6046(__this, ___object, ___method, method) (( void (*) (Comparison_1_t916 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m6046_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m33388_gshared (Comparison_1_t916 * __this, RaycastHit_t781  ___x, RaycastHit_t781  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m33388(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t916 *, RaycastHit_t781 , RaycastHit_t781 , const MethodInfo*))Comparison_1_Invoke_m33388_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m33389_gshared (Comparison_1_t916 * __this, RaycastHit_t781  ___x, RaycastHit_t781  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m33389(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t916 *, RaycastHit_t781 , RaycastHit_t781 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m33389_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m33390_gshared (Comparison_1_t916 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m33390(__this, ___result, method) (( int32_t (*) (Comparison_1_t916 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m33390_gshared)(__this, ___result, method)
