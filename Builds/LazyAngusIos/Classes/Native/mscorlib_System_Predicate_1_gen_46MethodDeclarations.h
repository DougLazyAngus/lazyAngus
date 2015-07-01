#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t3819;
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

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m25129_gshared (Predicate_1_t3819 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m25129(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3819 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m25129_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m25130_gshared (Predicate_1_t3819 * __this, UILineInfo_t865  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m25130(__this, ___obj, method) (( bool (*) (Predicate_1_t3819 *, UILineInfo_t865 , const MethodInfo*))Predicate_1_Invoke_m25130_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m25131_gshared (Predicate_1_t3819 * __this, UILineInfo_t865  ___obj, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m25131(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3819 *, UILineInfo_t865 , AsyncCallback_t389 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m25131_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m25132_gshared (Predicate_1_t3819 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m25132(__this, ___result, method) (( bool (*) (Predicate_1_t3819 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m25132_gshared)(__this, ___result, method)
