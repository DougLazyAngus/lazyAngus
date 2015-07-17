#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,GP_TBM_Match,System.Collections.DictionaryEntry>
struct Transform_1_t3535;
// System.Object
struct Object_t;
// System.String
struct String_t;
// GP_TBM_Match
struct GP_TBM_Match_t206;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,GP_TBM_Match,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m20205(__this, ___object, ___method, method) (( void (*) (Transform_1_t3535 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m17780_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,GP_TBM_Match,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m20206(__this, ___key, ___value, method) (( DictionaryEntry_t2179  (*) (Transform_1_t3535 *, String_t*, GP_TBM_Match_t206 *, const MethodInfo*))Transform_1_Invoke_m17781_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,GP_TBM_Match,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m20207(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3535 *, String_t*, GP_TBM_Match_t206 *, AsyncCallback_t344 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m17782_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,GP_TBM_Match,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m20208(__this, ___result, method) (( DictionaryEntry_t2179  (*) (Transform_1_t3535 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m17783_gshared)(__this, ___result, method)
