#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.TimeZoneInfo/AdjustmentRule>
struct Predicate_1_t8625;
// System.Object
struct Object_t;
// System.TimeZoneInfo/AdjustmentRule
struct AdjustmentRule_t3354;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.TimeZoneInfo/AdjustmentRule>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m63603(__this, ___object, ___method, method) (( void (*) (Predicate_1_t8625 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21723_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.TimeZoneInfo/AdjustmentRule>::Invoke(T)
#define Predicate_1_Invoke_m63604(__this, ___obj, method) (( bool (*) (Predicate_1_t8625 *, AdjustmentRule_t3354 *, const MethodInfo*))Predicate_1_Invoke_m21724_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.TimeZoneInfo/AdjustmentRule>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m63605(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t8625 *, AdjustmentRule_t3354 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21725_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.TimeZoneInfo/AdjustmentRule>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m63606(__this, ___result, method) (( bool (*) (Predicate_1_t8625 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21726_gshared)(__this, ___result, method)
