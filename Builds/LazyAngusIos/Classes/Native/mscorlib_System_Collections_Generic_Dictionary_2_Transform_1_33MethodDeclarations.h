#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,LevelDescription,System.Collections.DictionaryEntry>
struct Transform_1_t3687;
// System.Object
struct Object_t;
// LevelDescription
struct LevelDescription_t489;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,LevelDescription,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_9MethodDeclarations.h"
#define Transform_1__ctor_m22673(__this, ___object, ___method, method) (( void (*) (Transform_1_t3687 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m18579_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,LevelDescription,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m22674(__this, ___key, ___value, method) (( DictionaryEntry_t2180  (*) (Transform_1_t3687 *, int32_t, LevelDescription_t489 *, const MethodInfo*))Transform_1_Invoke_m18580_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,LevelDescription,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m22675(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3687 *, int32_t, LevelDescription_t489 *, AsyncCallback_t344 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m18581_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,LevelDescription,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m22676(__this, ___result, method) (( DictionaryEntry_t2180  (*) (Transform_1_t3687 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m18582_gshared)(__this, ___result, method)
