#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,TweetTemplate,System.Collections.DictionaryEntry>
struct Transform_1_t3490;
// System.Object
struct Object_t;
// System.String
struct String_t;
// TweetTemplate
struct TweetTemplate_t255;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,TweetTemplate,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m19971(__this, ___object, ___method, method) (( void (*) (Transform_1_t3490 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m17027_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,TweetTemplate,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m19972(__this, ___key, ___value, method) (( DictionaryEntry_t1685  (*) (Transform_1_t3490 *, String_t*, TweetTemplate_t255 *, const MethodInfo*))Transform_1_Invoke_m17028_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,TweetTemplate,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m19973(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3490 *, String_t*, TweetTemplate_t255 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m17029_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,TweetTemplate,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m19974(__this, ___result, method) (( DictionaryEntry_t1685  (*) (Transform_1_t3490 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m17030_gshared)(__this, ___result, method)
