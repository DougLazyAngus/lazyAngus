#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>,System.Collections.DictionaryEntry>
struct Transform_1_t6038;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>
struct List_1_t704;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_1MethodDeclarations.h"
#define Transform_1__ctor_m27290(__this, ___object, ___method, method) (( void (*) (Transform_1_t6038 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m25699_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m27291(__this, ___key, ___value, method) (( DictionaryEntry_t2167  (*) (Transform_1_t6038 *, int32_t, List_1_t704 *, const MethodInfo*))Transform_1_Invoke_m25700_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m27292(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t6038 *, int32_t, List_1_t704 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m25701_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m27293(__this, ___result, method) (( DictionaryEntry_t2167  (*) (Transform_1_t6038 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m25702_gshared)(__this, ___result, method)
