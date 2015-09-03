#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.Internal.ParseJSONCacheItem,System.Collections.DictionaryEntry>
struct Transform_1_t6789;
// System.Object
struct Object_t;
// Parse.Internal.ParseJSONCacheItem
struct ParseJSONCacheItem_t1215;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.Internal.ParseJSONCacheItem,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5MethodDeclarations.h"
#define Transform_1__ctor_m38395(__this, ___object, ___method, method) (( void (*) (Transform_1_t6789 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m26306_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.Internal.ParseJSONCacheItem,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m38396(__this, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Transform_1_t6789 *, Object_t *, ParseJSONCacheItem_t1215 *, const MethodInfo*))Transform_1_Invoke_m26307_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.Internal.ParseJSONCacheItem,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m38397(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t6789 *, Object_t *, ParseJSONCacheItem_t1215 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m26308_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.Internal.ParseJSONCacheItem,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m38398(__this, ___result, method) (( DictionaryEntry_t2156  (*) (Transform_1_t6789 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m26309_gshared)(__this, ___result, method)
