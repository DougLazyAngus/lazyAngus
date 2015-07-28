#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,LevelDescription,System.Collections.DictionaryEntry>
struct Transform_1_t5657;
// System.Object
struct Object_t;
// LevelDescription
struct LevelDescription_t533;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,LevelDescription,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_1MethodDeclarations.h"
#define Transform_1__ctor_m26624(__this, ___object, ___method, method) (( void (*) (Transform_1_t5657 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m20970_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,LevelDescription,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m26625(__this, ___key, ___value, method) (( DictionaryEntry_t2079  (*) (Transform_1_t5657 *, int32_t, LevelDescription_t533 *, const MethodInfo*))Transform_1_Invoke_m20971_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,LevelDescription,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m26626(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t5657 *, int32_t, LevelDescription_t533 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m20972_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,LevelDescription,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m26627(__this, ___result, method) (( DictionaryEntry_t2079  (*) (Transform_1_t5657 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m20973_gshared)(__this, ___result, method)
