#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t8370;
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
extern "C" void Predicate_1__ctor_m60353_gshared (Predicate_1_t8370 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m60353(__this, ___object, ___method, method) (( void (*) (Predicate_1_t8370 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m60353_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m60354_gshared (Predicate_1_t8370 * __this, UILineInfo_t1019  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m60354(__this, ___obj, method) (( bool (*) (Predicate_1_t8370 *, UILineInfo_t1019 , const MethodInfo*))Predicate_1_Invoke_m60354_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m60355_gshared (Predicate_1_t8370 * __this, UILineInfo_t1019  ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m60355(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t8370 *, UILineInfo_t1019 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m60355_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m60356_gshared (Predicate_1_t8370 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m60356(__this, ___result, method) (( bool (*) (Predicate_1_t8370 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m60356_gshared)(__this, ___result, method)
