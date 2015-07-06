#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t3834;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Predicate`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m25143_gshared (Predicate_1_t3834 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m25143(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3834 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m25143_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m25144_gshared (Predicate_1_t3834 * __this, UICharInfo_t889  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m25144(__this, ___obj, method) (( bool (*) (Predicate_1_t3834 *, UICharInfo_t889 , const MethodInfo*))Predicate_1_Invoke_m25144_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UICharInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m25145_gshared (Predicate_1_t3834 * __this, UICharInfo_t889  ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m25145(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3834 *, UICharInfo_t889 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m25145_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m25146_gshared (Predicate_1_t3834 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m25146(__this, ___result, method) (( bool (*) (Predicate_1_t3834 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m25146_gshared)(__this, ___result, method)
