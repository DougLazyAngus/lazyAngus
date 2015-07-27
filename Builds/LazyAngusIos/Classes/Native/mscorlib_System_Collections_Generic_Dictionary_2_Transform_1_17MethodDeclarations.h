#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,AndroidADBanner,System.Collections.DictionaryEntry>
struct Transform_1_t3501;
// System.Object
struct Object_t;
// AndroidADBanner
struct AndroidADBanner_t175;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,AndroidADBanner,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_9MethodDeclarations.h"
#define Transform_1__ctor_m19617(__this, ___object, ___method, method) (( void (*) (Transform_1_t3501 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m18582_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,AndroidADBanner,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m19618(__this, ___key, ___value, method) (( DictionaryEntry_t2181  (*) (Transform_1_t3501 *, int32_t, AndroidADBanner_t175 *, const MethodInfo*))Transform_1_Invoke_m18583_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,AndroidADBanner,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m19619(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3501 *, int32_t, AndroidADBanner_t175 *, AsyncCallback_t346 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m18584_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,AndroidADBanner,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m19620(__this, ___result, method) (( DictionaryEntry_t2181  (*) (Transform_1_t3501 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m18585_gshared)(__this, ___result, method)
