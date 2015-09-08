#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.DictionaryEntry>
struct Transform_1_t7704;
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
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m50192_gshared (Transform_1_t7704 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m50192(__this, ___object, ___method, method) (( void (*) (Transform_1_t7704 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m50192_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t2157  Transform_1_Invoke_m50194_gshared (Transform_1_t7704 * __this, Object_t * ___key, ParseGeoPoint_t1265  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m50194(__this, ___key, ___value, method) (( DictionaryEntry_t2157  (*) (Transform_1_t7704 *, Object_t *, ParseGeoPoint_t1265 , const MethodInfo*))Transform_1_Invoke_m50194_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m50196_gshared (Transform_1_t7704 * __this, Object_t * ___key, ParseGeoPoint_t1265  ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m50196(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t7704 *, Object_t *, ParseGeoPoint_t1265 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m50196_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t2157  Transform_1_EndInvoke_m50198_gshared (Transform_1_t7704 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m50198(__this, ___result, method) (( DictionaryEntry_t2157  (*) (Transform_1_t7704 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m50198_gshared)(__this, ___result, method)
