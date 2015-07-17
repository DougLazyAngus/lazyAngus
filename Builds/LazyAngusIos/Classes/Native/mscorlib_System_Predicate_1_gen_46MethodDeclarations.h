#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t3927;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Predicate`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m26262_gshared (Predicate_1_t3927 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m26262(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3927 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m26262_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m26263_gshared (Predicate_1_t3927 * __this, UICharInfo_t968  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m26263(__this, ___obj, method) (( bool (*) (Predicate_1_t3927 *, UICharInfo_t968 , const MethodInfo*))Predicate_1_Invoke_m26263_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UICharInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m26264_gshared (Predicate_1_t3927 * __this, UICharInfo_t968  ___obj, AsyncCallback_t344 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m26264(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3927 *, UICharInfo_t968 , AsyncCallback_t344 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m26264_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m26265_gshared (Predicate_1_t3927 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m26265(__this, ___result, method) (( bool (*) (Predicate_1_t3927 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m26265_gshared)(__this, ___result, method)
