#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Int64>
struct Transform_1_t5929;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Int64>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m30421_gshared (Transform_1_t5929 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m30421(__this, ___object, ___method, method) (( void (*) (Transform_1_t5929 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m30421_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Int64>::Invoke(TKey,TValue)
extern "C" int64_t Transform_1_Invoke_m30422_gshared (Transform_1_t5929 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m30422(__this, ___key, ___value, method) (( int64_t (*) (Transform_1_t5929 *, int64_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m30422_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Int64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m30423_gshared (Transform_1_t5929 * __this, int64_t ___key, Object_t * ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m30423(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t5929 *, int64_t, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m30423_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Int64>::EndInvoke(System.IAsyncResult)
extern "C" int64_t Transform_1_EndInvoke_m30424_gshared (Transform_1_t5929 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m30424(__this, ___result, method) (( int64_t (*) (Transform_1_t5929 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m30424_gshared)(__this, ___result, method)
