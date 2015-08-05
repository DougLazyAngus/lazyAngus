#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t5485;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m23677_gshared (Transform_1_t5485 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m23677(__this, ___object, ___method, method) (( void (*) (Transform_1_t5485 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m23677_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t2089  Transform_1_Invoke_m23678_gshared (Transform_1_t5485 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m23678(__this, ___key, ___value, method) (( DictionaryEntry_t2089  (*) (Transform_1_t5485 *, Object_t *, int32_t, const MethodInfo*))Transform_1_Invoke_m23678_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m23679_gshared (Transform_1_t5485 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m23679(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t5485 *, Object_t *, int32_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m23679_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t2089  Transform_1_EndInvoke_m23680_gshared (Transform_1_t5485 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m23680(__this, ___result, method) (( DictionaryEntry_t2089  (*) (Transform_1_t5485 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m23680_gshared)(__this, ___result, method)
