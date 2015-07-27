#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t787;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m5251_gshared (Comparison_1_t787 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m5251(__this, ___object, ___method, method) (( void (*) (Comparison_1_t787 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m5251_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m23891_gshared (Comparison_1_t787 * __this, RaycastHit_t661  ___x, RaycastHit_t661  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m23891(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t787 *, RaycastHit_t661 , RaycastHit_t661 , const MethodInfo*))Comparison_1_Invoke_m23891_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m23892_gshared (Comparison_1_t787 * __this, RaycastHit_t661  ___x, RaycastHit_t661  ___y, AsyncCallback_t344 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m23892(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t787 *, RaycastHit_t661 , RaycastHit_t661 , AsyncCallback_t344 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m23892_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m23893_gshared (Comparison_1_t787 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m23893(__this, ___result, method) (( int32_t (*) (Comparison_1_t787 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m23893_gshared)(__this, ___result, method)
