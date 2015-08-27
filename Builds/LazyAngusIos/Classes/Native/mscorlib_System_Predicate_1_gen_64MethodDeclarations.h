﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<Parse.ParseGeoPoint>
struct Predicate_1_t6873;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Predicate`1<Parse.ParseGeoPoint>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m42205_gshared (Predicate_1_t6873 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m42205(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6873 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m42205_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Parse.ParseGeoPoint>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m42206_gshared (Predicate_1_t6873 * __this, ParseGeoPoint_t1248  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m42206(__this, ___obj, method) (( bool (*) (Predicate_1_t6873 *, ParseGeoPoint_t1248 , const MethodInfo*))Predicate_1_Invoke_m42206_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Parse.ParseGeoPoint>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m42207_gshared (Predicate_1_t6873 * __this, ParseGeoPoint_t1248  ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m42207(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6873 *, ParseGeoPoint_t1248 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m42207_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Parse.ParseGeoPoint>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m42208_gshared (Predicate_1_t6873 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m42208(__this, ___result, method) (( bool (*) (Predicate_1_t6873 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m42208_gshared)(__this, ___result, method)
