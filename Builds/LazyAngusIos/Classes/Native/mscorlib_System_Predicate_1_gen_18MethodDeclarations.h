#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<TwitterUserInfo>
struct Predicate_1_t5633;
// System.Object
struct Object_t;
// TwitterUserInfo
struct TwitterUserInfo_t308;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<TwitterUserInfo>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m25736(__this, ___object, ___method, method) (( void (*) (Predicate_1_t5633 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21720_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<TwitterUserInfo>::Invoke(T)
#define Predicate_1_Invoke_m25737(__this, ___obj, method) (( bool (*) (Predicate_1_t5633 *, TwitterUserInfo_t308 *, const MethodInfo*))Predicate_1_Invoke_m21721_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<TwitterUserInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m25738(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t5633 *, TwitterUserInfo_t308 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21722_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<TwitterUserInfo>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m25739(__this, ___result, method) (( bool (*) (Predicate_1_t5633 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21723_gshared)(__this, ___result, method)
