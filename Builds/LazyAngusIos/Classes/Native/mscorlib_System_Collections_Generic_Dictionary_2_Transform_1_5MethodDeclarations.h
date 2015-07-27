#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String[],System.Collections.DictionaryEntry>
struct Transform_1_t3417;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t45;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String[],System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m18169(__this, ___object, ___method, method) (( void (*) (Transform_1_t3417 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m17788_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String[],System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m18170(__this, ___key, ___value, method) (( DictionaryEntry_t2180  (*) (Transform_1_t3417 *, String_t*, StringU5BU5D_t45*, const MethodInfo*))Transform_1_Invoke_m17789_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String[],System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m18171(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3417 *, String_t*, StringU5BU5D_t45*, AsyncCallback_t344 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m17790_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String[],System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m18172(__this, ___result, method) (( DictionaryEntry_t2180  (*) (Transform_1_t3417 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m17791_gshared)(__this, ___result, method)
