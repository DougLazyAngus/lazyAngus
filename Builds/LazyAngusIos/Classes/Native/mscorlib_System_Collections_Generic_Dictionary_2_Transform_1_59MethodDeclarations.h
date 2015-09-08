#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.Internal.ParseJSONCacheItem,System.Collections.DictionaryEntry>
struct Transform_1_t6795;
// System.Object
struct Object_t;
// Parse.Internal.ParseJSONCacheItem
struct ParseJSONCacheItem_t1219;
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
#define Transform_1__ctor_m38420(__this, ___object, ___method, method) (( void (*) (Transform_1_t6795 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m26319_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.Internal.ParseJSONCacheItem,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m38421(__this, ___key, ___value, method) (( DictionaryEntry_t2160  (*) (Transform_1_t6795 *, Object_t *, ParseJSONCacheItem_t1219 *, const MethodInfo*))Transform_1_Invoke_m26320_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.Internal.ParseJSONCacheItem,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m38422(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t6795 *, Object_t *, ParseJSONCacheItem_t1219 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m26321_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.Internal.ParseJSONCacheItem,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m38423(__this, ___result, method) (( DictionaryEntry_t2160  (*) (Transform_1_t6795 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m26322_gshared)(__this, ___result, method)
