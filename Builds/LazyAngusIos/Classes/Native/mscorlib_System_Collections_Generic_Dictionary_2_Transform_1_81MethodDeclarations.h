#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseGeoPoint,System.Collections.DictionaryEntry>
struct Transform_1_t7056;
// System.Object
struct Object_t;
// System.String
struct String_t;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseGeoPoint,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_84MethodDeclarations.h"
#define Transform_1__ctor_m44797(__this, ___object, ___method, method) (( void (*) (Transform_1_t7056 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m44798_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseGeoPoint,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m44799(__this, ___key, ___value, method) (( DictionaryEntry_t2090  (*) (Transform_1_t7056 *, String_t*, ParseGeoPoint_t1196 , const MethodInfo*))Transform_1_Invoke_m44800_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseGeoPoint,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m44801(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t7056 *, String_t*, ParseGeoPoint_t1196 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m44802_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseGeoPoint,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m44803(__this, ___result, method) (( DictionaryEntry_t2090  (*) (Transform_1_t7056 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m44804_gshared)(__this, ___result, method)
