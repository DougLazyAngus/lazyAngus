﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Networking.Match.MatchDesc>
struct Comparison_1_t3880;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.MatchDesc
struct MatchDesc_t1100;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<UnityEngine.Networking.Match.MatchDesc>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m25738(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3880 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m16807_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Networking.Match.MatchDesc>::Invoke(T,T)
#define Comparison_1_Invoke_m25739(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3880 *, MatchDesc_t1100 *, MatchDesc_t1100 *, const MethodInfo*))Comparison_1_Invoke_m16808_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Networking.Match.MatchDesc>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m25740(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3880 *, MatchDesc_t1100 *, MatchDesc_t1100 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m16809_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Networking.Match.MatchDesc>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m25741(__this, ___result, method) (( int32_t (*) (Comparison_1_t3880 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m16810_gshared)(__this, ___result, method)