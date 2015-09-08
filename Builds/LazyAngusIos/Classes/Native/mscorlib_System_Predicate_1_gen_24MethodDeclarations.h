#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<GameAnalyticsSDK.Game>
struct Predicate_1_t6255;
// System.Object
struct Object_t;
// GameAnalyticsSDK.Game
struct Game_t490;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<GameAnalyticsSDK.Game>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m31176(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6255 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m26073_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<GameAnalyticsSDK.Game>::Invoke(T)
#define Predicate_1_Invoke_m31177(__this, ___obj, method) (( bool (*) (Predicate_1_t6255 *, Game_t490 *, const MethodInfo*))Predicate_1_Invoke_m26074_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<GameAnalyticsSDK.Game>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m31178(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6255 *, Game_t490 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m26075_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<GameAnalyticsSDK.Game>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m31179(__this, ___result, method) (( bool (*) (Predicate_1_t6255 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m26076_gshared)(__this, ___result, method)
