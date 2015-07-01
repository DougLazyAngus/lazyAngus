#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>
struct Transform_1_t3870;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t388;
// System.AsyncCallback
struct AsyncCallback_t389;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25732_gshared (Transform_1_t3870 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m25732(__this, ___object, ___method, method) (( void (*) (Transform_1_t3870 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m25732_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::Invoke(TKey,TValue)
extern "C" uint64_t Transform_1_Invoke_m25733_gshared (Transform_1_t3870 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m25733(__this, ___key, ___value, method) (( uint64_t (*) (Transform_1_t3870 *, uint64_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m25733_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m25734_gshared (Transform_1_t3870 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m25734(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3870 *, uint64_t, Object_t *, AsyncCallback_t389 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m25734_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::EndInvoke(System.IAsyncResult)
extern "C" uint64_t Transform_1_EndInvoke_m25735_gshared (Transform_1_t3870 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m25735(__this, ___result, method) (( uint64_t (*) (Transform_1_t3870 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m25735_gshared)(__this, ___result, method)
