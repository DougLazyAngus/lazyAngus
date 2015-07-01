#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t3674;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t388;
// System.AsyncCallback
struct AsyncCallback_t389;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Comparison`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m23003_gshared (Comparison_1_t3674 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m23003(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3674 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m23003_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m23004_gshared (Comparison_1_t3674 * __this, UIVertex_t737  ___x, UIVertex_t737  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m23004(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3674 *, UIVertex_t737 , UIVertex_t737 , const MethodInfo*))Comparison_1_Invoke_m23004_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UIVertex>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m23005_gshared (Comparison_1_t3674 * __this, UIVertex_t737  ___x, UIVertex_t737  ___y, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m23005(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3674 *, UIVertex_t737 , UIVertex_t737 , AsyncCallback_t389 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m23005_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m23006_gshared (Comparison_1_t3674 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m23006(__this, ___result, method) (( int32_t (*) (Comparison_1_t3674 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m23006_gshared)(__this, ___result, method)
