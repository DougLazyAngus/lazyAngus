#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t8438;
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
extern "C" void Predicate_1__ctor_m60994_gshared (Predicate_1_t8438 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m60994(__this, ___object, ___method, method) (( void (*) (Predicate_1_t8438 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m60994_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m60995_gshared (Predicate_1_t8438 * __this, UICharInfo_t1079  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m60995(__this, ___obj, method) (( bool (*) (Predicate_1_t8438 *, UICharInfo_t1079 , const MethodInfo*))Predicate_1_Invoke_m60995_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UICharInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m60996_gshared (Predicate_1_t8438 * __this, UICharInfo_t1079  ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m60996(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t8438 *, UICharInfo_t1079 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m60996_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m60997_gshared (Predicate_1_t8438 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m60997(__this, ___result, method) (( bool (*) (Predicate_1_t8438 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m60997_gshared)(__this, ___result, method)
