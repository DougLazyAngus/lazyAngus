#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t8440;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m61022_gshared (Predicate_1_t8440 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m61022(__this, ___object, ___method, method) (( void (*) (Predicate_1_t8440 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m61022_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m61023_gshared (Predicate_1_t8440 * __this, UILineInfo_t1076  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m61023(__this, ___obj, method) (( bool (*) (Predicate_1_t8440 *, UILineInfo_t1076 , const MethodInfo*))Predicate_1_Invoke_m61023_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m61024_gshared (Predicate_1_t8440 * __this, UILineInfo_t1076  ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m61024(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t8440 *, UILineInfo_t1076 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m61024_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m61025_gshared (Predicate_1_t8440 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m61025(__this, ___result, method) (( bool (*) (Predicate_1_t8440 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m61025_gshared)(__this, ___result, method)
