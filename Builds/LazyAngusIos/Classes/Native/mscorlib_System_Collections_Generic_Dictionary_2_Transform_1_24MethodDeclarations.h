#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GPScore,System.Collections.DictionaryEntry>
struct Transform_1_t6113;
// System.Object
struct Object_t;
// GPScore
struct GPScore_t343;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GPScore,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_1MethodDeclarations.h"
#define Transform_1__ctor_m28565(__this, ___object, ___method, method) (( void (*) (Transform_1_t6113 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m25699_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GPScore,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m28566(__this, ___key, ___value, method) (( DictionaryEntry_t2167  (*) (Transform_1_t6113 *, int32_t, GPScore_t343 *, const MethodInfo*))Transform_1_Invoke_m25700_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GPScore,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m28567(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t6113 *, int32_t, GPScore_t343 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m25701_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GPScore,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m28568(__this, ___result, method) (( DictionaryEntry_t2167  (*) (Transform_1_t6113 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m25702_gshared)(__this, ___result, method)
