#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t3810;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t388;
// System.AsyncCallback
struct AsyncCallback_t389;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Predicate`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m24985_gshared (Predicate_1_t3810 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m24985(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3810 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m24985_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m24986_gshared (Predicate_1_t3810 * __this, UICharInfo_t867  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m24986(__this, ___obj, method) (( bool (*) (Predicate_1_t3810 *, UICharInfo_t867 , const MethodInfo*))Predicate_1_Invoke_m24986_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UICharInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m24987_gshared (Predicate_1_t3810 * __this, UICharInfo_t867  ___obj, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m24987(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3810 *, UICharInfo_t867 , AsyncCallback_t389 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m24987_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m24988_gshared (Predicate_1_t3810 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m24988(__this, ___result, method) (( bool (*) (Predicate_1_t3810 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m24988_gshared)(__this, ___result, method)
