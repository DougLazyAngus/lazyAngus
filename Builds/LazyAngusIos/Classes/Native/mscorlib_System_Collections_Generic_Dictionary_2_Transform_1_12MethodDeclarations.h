﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>,System.Collections.DictionaryEntry>
struct Transform_1_t3406;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>
struct List_1_t539;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_9MethodDeclarations.h"
#define Transform_1__ctor_m18208(__this, ___object, ___method, method) (( void (*) (Transform_1_t3406 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m18034_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m18209(__this, ___key, ___value, method) (( DictionaryEntry_t1718  (*) (Transform_1_t3406 *, int32_t, List_1_t539 *, const MethodInfo*))Transform_1_Invoke_m18035_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m18210(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3406 *, int32_t, List_1_t539 *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m18036_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m18211(__this, ___result, method) (( DictionaryEntry_t1718  (*) (Transform_1_t3406 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m18037_gshared)(__this, ___result, method)
