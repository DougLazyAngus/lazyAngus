#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,FacebookUserInfo,System.Collections.DictionaryEntry>
struct Transform_1_t3468;
// System.Object
struct Object_t;
// System.String
struct String_t;
// FacebookUserInfo
struct FacebookUserInfo_t202;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,FacebookUserInfo,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m19249(__this, ___object, ___method, method) (( void (*) (Transform_1_t3468 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m17207_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,FacebookUserInfo,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m19250(__this, ___key, ___value, method) (( DictionaryEntry_t1710  (*) (Transform_1_t3468 *, String_t*, FacebookUserInfo_t202 *, const MethodInfo*))Transform_1_Invoke_m17208_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,FacebookUserInfo,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m19251(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3468 *, String_t*, FacebookUserInfo_t202 *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m17209_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,FacebookUserInfo,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m19252(__this, ___result, method) (( DictionaryEntry_t1710  (*) (Transform_1_t3468 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m17210_gshared)(__this, ___result, method)
