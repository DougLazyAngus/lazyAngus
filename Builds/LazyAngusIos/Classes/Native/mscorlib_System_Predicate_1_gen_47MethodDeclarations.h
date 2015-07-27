#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t3938;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m26421_gshared (Predicate_1_t3938 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m26421(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3938 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m26421_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m26422_gshared (Predicate_1_t3938 * __this, UILineInfo_t968  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m26422(__this, ___obj, method) (( bool (*) (Predicate_1_t3938 *, UILineInfo_t968 , const MethodInfo*))Predicate_1_Invoke_m26422_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m26423_gshared (Predicate_1_t3938 * __this, UILineInfo_t968  ___obj, AsyncCallback_t346 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m26423(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3938 *, UILineInfo_t968 , AsyncCallback_t346 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m26423_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m26424_gshared (Predicate_1_t3938 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m26424(__this, ___result, method) (( bool (*) (Predicate_1_t3938 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m26424_gshared)(__this, ___result, method)
