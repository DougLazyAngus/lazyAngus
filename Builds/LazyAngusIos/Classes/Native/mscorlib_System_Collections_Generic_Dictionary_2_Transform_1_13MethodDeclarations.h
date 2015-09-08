#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>,System.Collections.DictionaryEntry>
struct Transform_1_t6031;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>
struct List_1_t697;
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
#define Transform_1__ctor_m27233(__this, ___object, ___method, method) (( void (*) (Transform_1_t6031 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m25642_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m27234(__this, ___key, ___value, method) (( DictionaryEntry_t2160  (*) (Transform_1_t6031 *, int32_t, List_1_t697 *, const MethodInfo*))Transform_1_Invoke_m25643_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m27235(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t6031 *, int32_t, List_1_t697 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m25644_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m27236(__this, ___result, method) (( DictionaryEntry_t2160  (*) (Transform_1_t6031 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m25645_gshared)(__this, ___result, method)
