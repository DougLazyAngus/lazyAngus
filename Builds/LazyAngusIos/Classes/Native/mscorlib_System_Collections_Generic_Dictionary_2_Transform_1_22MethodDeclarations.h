#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,FBScore,System.Collections.DictionaryEntry>
struct Transform_1_t3429;
// System.Object
struct Object_t;
// System.String
struct String_t;
// FBScore
struct FBScore_t225;
// System.IAsyncResult
struct IAsyncResult_t388;
// System.AsyncCallback
struct AsyncCallback_t389;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,FBScore,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m19107(__this, ___object, ___method, method) (( void (*) (Transform_1_t3429 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m16879_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,FBScore,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m19108(__this, ___key, ___value, method) (( DictionaryEntry_t1663  (*) (Transform_1_t3429 *, String_t*, FBScore_t225 *, const MethodInfo*))Transform_1_Invoke_m16880_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,FBScore,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m19109(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3429 *, String_t*, FBScore_t225 *, AsyncCallback_t389 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m16881_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,FBScore,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m19110(__this, ___result, method) (( DictionaryEntry_t1663  (*) (Transform_1_t3429 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m16882_gshared)(__this, ___result, method)
