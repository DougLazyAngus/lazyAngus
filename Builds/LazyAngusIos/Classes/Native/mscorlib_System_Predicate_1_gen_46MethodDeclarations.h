#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t3860;
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
extern "C" void Predicate_1__ctor_m25318_gshared (Predicate_1_t3860 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m25318(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3860 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m25318_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m25319_gshared (Predicate_1_t3860 * __this, UILineInfo_t911  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m25319(__this, ___obj, method) (( bool (*) (Predicate_1_t3860 *, UILineInfo_t911 , const MethodInfo*))Predicate_1_Invoke_m25319_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m25320_gshared (Predicate_1_t3860 * __this, UILineInfo_t911  ___obj, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m25320(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3860 *, UILineInfo_t911 , AsyncCallback_t387 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m25320_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m25321_gshared (Predicate_1_t3860 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m25321(__this, ___result, method) (( bool (*) (Predicate_1_t3860 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m25321_gshared)(__this, ___result, method)
