#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>
struct Transform_1_t6116;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m32627_gshared (Transform_1_t6116 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m32627(__this, ___object, ___method, method) (( void (*) (Transform_1_t6116 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m32627_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t6105  Transform_1_Invoke_m32628_gshared (Transform_1_t6116 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m32628(__this, ___key, ___value, method) (( KeyValuePair_2_t6105  (*) (Transform_1_t6116 *, int64_t, uint8_t, const MethodInfo*))Transform_1_Invoke_m32628_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m32629_gshared (Transform_1_t6116 * __this, int64_t ___key, uint8_t ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m32629(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t6116 *, int64_t, uint8_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m32629_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t6105  Transform_1_EndInvoke_m32630_gshared (Transform_1_t6116 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m32630(__this, ___result, method) (( KeyValuePair_2_t6105  (*) (Transform_1_t6116 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m32630_gshared)(__this, ___result, method)
