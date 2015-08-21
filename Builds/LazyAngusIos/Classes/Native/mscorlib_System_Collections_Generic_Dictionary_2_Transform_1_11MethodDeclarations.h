#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>,System.Collections.DictionaryEntry>
struct Transform_1_t5462;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.List`1<AN_PropertyTemplate>
struct List_1_t123;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5MethodDeclarations.h"
#define Transform_1__ctor_m22551(__this, ___object, ___method, method) (( void (*) (Transform_1_t5462 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m21953_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m22552(__this, ___key, ___value, method) (( DictionaryEntry_t2137  (*) (Transform_1_t5462 *, String_t*, List_1_t123 *, const MethodInfo*))Transform_1_Invoke_m21954_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m22553(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t5462 *, String_t*, List_1_t123 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m21955_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m22554(__this, ___result, method) (( DictionaryEntry_t2137  (*) (Transform_1_t5462 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m21956_gshared)(__this, ___result, method)
