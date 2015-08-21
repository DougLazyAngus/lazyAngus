#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<GameAnalyticsSDK.Studio>
struct Predicate_1_t5677;
// System.Object
struct Object_t;
// GameAnalyticsSDK.Studio
struct Studio_t489;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<GameAnalyticsSDK.Studio>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m26428(__this, ___object, ___method, method) (( void (*) (Predicate_1_t5677 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21709_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<GameAnalyticsSDK.Studio>::Invoke(T)
#define Predicate_1_Invoke_m26429(__this, ___obj, method) (( bool (*) (Predicate_1_t5677 *, Studio_t489 *, const MethodInfo*))Predicate_1_Invoke_m21710_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<GameAnalyticsSDK.Studio>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m26430(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t5677 *, Studio_t489 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21711_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<GameAnalyticsSDK.Studio>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m26431(__this, ___result, method) (( bool (*) (Predicate_1_t5677 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21712_gshared)(__this, ___result, method)
