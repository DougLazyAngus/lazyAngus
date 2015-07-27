#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t3937;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m26414_gshared (Predicate_1_t3937 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m26414(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3937 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m26414_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m26415_gshared (Predicate_1_t3937 * __this, UILineInfo_t967  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m26415(__this, ___obj, method) (( bool (*) (Predicate_1_t3937 *, UILineInfo_t967 , const MethodInfo*))Predicate_1_Invoke_m26415_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m26416_gshared (Predicate_1_t3937 * __this, UILineInfo_t967  ___obj, AsyncCallback_t344 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m26416(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3937 *, UILineInfo_t967 , AsyncCallback_t344 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m26416_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m26417_gshared (Predicate_1_t3937 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m26417(__this, ___result, method) (( bool (*) (Predicate_1_t3937 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m26417_gshared)(__this, ___result, method)
