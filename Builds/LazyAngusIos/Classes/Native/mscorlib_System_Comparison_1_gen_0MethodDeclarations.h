#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t896;
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
extern "C" void Comparison_1__ctor_m5864_gshared (Comparison_1_t896 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m5864(__this, ___object, ___method, method) (( void (*) (Comparison_1_t896 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m5864_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m28780_gshared (Comparison_1_t896 * __this, RaycastHit_t761  ___x, RaycastHit_t761  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m28780(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t896 *, RaycastHit_t761 , RaycastHit_t761 , const MethodInfo*))Comparison_1_Invoke_m28780_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m28781_gshared (Comparison_1_t896 * __this, RaycastHit_t761  ___x, RaycastHit_t761  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m28781(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t896 *, RaycastHit_t761 , RaycastHit_t761 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m28781_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m28782_gshared (Comparison_1_t896 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m28782(__this, ___result, method) (( int32_t (*) (Comparison_1_t896 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m28782_gshared)(__this, ___result, method)
