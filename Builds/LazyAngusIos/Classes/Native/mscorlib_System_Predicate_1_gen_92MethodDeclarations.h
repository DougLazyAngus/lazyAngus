﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct Predicate_1_t8303;
// System.Object
struct Object_t;
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t2640;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m59386(__this, ___object, ___method, method) (( void (*) (Predicate_1_t8303 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21401_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Invoke(T)
#define Predicate_1_Invoke_m59387(__this, ___obj, method) (( bool (*) (Predicate_1_t8303 *, GcLeaderboard_t2640 *, const MethodInfo*))Predicate_1_Invoke_m21402_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m59388(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t8303 *, GcLeaderboard_t2640 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21403_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m59389(__this, ___result, method) (( bool (*) (Predicate_1_t8303 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21404_gshared)(__this, ___result, method)