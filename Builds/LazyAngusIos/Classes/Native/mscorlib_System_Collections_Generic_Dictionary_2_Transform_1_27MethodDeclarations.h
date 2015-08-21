#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,FBScore,System.Collections.DictionaryEntry>
struct Transform_1_t5574;
// System.Object
struct Object_t;
// System.String
struct String_t;
// FBScore
struct FBScore_t293;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,FBScore,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5MethodDeclarations.h"
#define Transform_1__ctor_m24634(__this, ___object, ___method, method) (( void (*) (Transform_1_t5574 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m21953_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,FBScore,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m24635(__this, ___key, ___value, method) (( DictionaryEntry_t2137  (*) (Transform_1_t5574 *, String_t*, FBScore_t293 *, const MethodInfo*))Transform_1_Invoke_m21954_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,FBScore,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m24636(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t5574 *, String_t*, FBScore_t293 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m21955_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,FBScore,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m24637(__this, ___result, method) (( DictionaryEntry_t2137  (*) (Transform_1_t5574 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m21956_gshared)(__this, ___result, method)
