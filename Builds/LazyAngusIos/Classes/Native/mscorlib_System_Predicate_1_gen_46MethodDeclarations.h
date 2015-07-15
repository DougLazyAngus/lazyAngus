#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t3862;
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

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m25343_gshared (Predicate_1_t3862 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m25343(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3862 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m25343_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m25344_gshared (Predicate_1_t3862 * __this, UILineInfo_t912  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m25344(__this, ___obj, method) (( bool (*) (Predicate_1_t3862 *, UILineInfo_t912 , const MethodInfo*))Predicate_1_Invoke_m25344_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m25345_gshared (Predicate_1_t3862 * __this, UILineInfo_t912  ___obj, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m25345(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3862 *, UILineInfo_t912 , AsyncCallback_t387 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m25345_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m25346_gshared (Predicate_1_t3862 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m25346(__this, ___result, method) (( bool (*) (Predicate_1_t3862 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m25346_gshared)(__this, ___result, method)
