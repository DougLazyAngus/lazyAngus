#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseGeoPoint,System.Collections.DictionaryEntry>
struct Transform_1_t7126;
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
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_85MethodDeclarations.h"
#define Transform_1__ctor_m45469(__this, ___object, ___method, method) (( void (*) (Transform_1_t7126 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m45470_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseGeoPoint,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m45471(__this, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Transform_1_t7126 *, String_t*, ParseGeoPoint_t1247 , const MethodInfo*))Transform_1_Invoke_m45472_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseGeoPoint,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m45473(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t7126 *, String_t*, ParseGeoPoint_t1247 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m45474_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseGeoPoint,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m45475(__this, ___result, method) (( DictionaryEntry_t2139  (*) (Transform_1_t7126 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m45476_gshared)(__this, ___result, method)
