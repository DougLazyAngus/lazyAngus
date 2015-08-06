#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t8359;
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
extern "C" void Predicate_1__ctor_m60189_gshared (Predicate_1_t8359 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m60189(__this, ___object, ___method, method) (( void (*) (Predicate_1_t8359 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m60189_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m60190_gshared (Predicate_1_t8359 * __this, UICharInfo_t1019  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m60190(__this, ___obj, method) (( bool (*) (Predicate_1_t8359 *, UICharInfo_t1019 , const MethodInfo*))Predicate_1_Invoke_m60190_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UICharInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m60191_gshared (Predicate_1_t8359 * __this, UICharInfo_t1019  ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m60191(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t8359 *, UICharInfo_t1019 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m60191_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m60192_gshared (Predicate_1_t8359 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m60192(__this, ___result, method) (( bool (*) (Predicate_1_t8359 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m60192_gshared)(__this, ___result, method)
