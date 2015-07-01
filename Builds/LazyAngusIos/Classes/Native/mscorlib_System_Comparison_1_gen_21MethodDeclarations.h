#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<ExplicitMouseDesc>
struct Comparison_1_t3542;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t388;
// System.AsyncCallback
struct AsyncCallback_t389;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// ExplicitMouseDesc
#include "AssemblyU2DCSharp_ExplicitMouseDesc.h"

// System.Void System.Comparison`1<ExplicitMouseDesc>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m20885_gshared (Comparison_1_t3542 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m20885(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3542 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m20885_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<ExplicitMouseDesc>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m20886_gshared (Comparison_1_t3542 * __this, ExplicitMouseDesc_t413  ___x, ExplicitMouseDesc_t413  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m20886(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3542 *, ExplicitMouseDesc_t413 , ExplicitMouseDesc_t413 , const MethodInfo*))Comparison_1_Invoke_m20886_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<ExplicitMouseDesc>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m20887_gshared (Comparison_1_t3542 * __this, ExplicitMouseDesc_t413  ___x, ExplicitMouseDesc_t413  ___y, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m20887(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3542 *, ExplicitMouseDesc_t413 , ExplicitMouseDesc_t413 , AsyncCallback_t389 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m20887_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<ExplicitMouseDesc>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m20888_gshared (Comparison_1_t3542 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m20888(__this, ___result, method) (( int32_t (*) (Comparison_1_t3542 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m20888_gshared)(__this, ___result, method)
