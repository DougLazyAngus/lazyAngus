#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>,System.Collections.DictionaryEntry>
struct Transform_1_t3461;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>
struct List_1_t578;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_9MethodDeclarations.h"
#define Transform_1__ctor_m18939(__this, ___object, ___method, method) (( void (*) (Transform_1_t3461 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m18571_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m18940(__this, ___key, ___value, method) (( DictionaryEntry_t2179  (*) (Transform_1_t3461 *, int32_t, List_1_t578 *, const MethodInfo*))Transform_1_Invoke_m18572_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m18941(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3461 *, int32_t, List_1_t578 *, AsyncCallback_t344 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m18573_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m18942(__this, ___result, method) (( DictionaryEntry_t2179  (*) (Transform_1_t3461 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m18574_gshared)(__this, ___result, method)
