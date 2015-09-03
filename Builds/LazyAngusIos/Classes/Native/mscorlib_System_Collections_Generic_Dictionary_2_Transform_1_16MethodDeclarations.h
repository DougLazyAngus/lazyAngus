#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,IOSADBanner,System.Collections.DictionaryEntry>
struct Transform_1_t6068;
// System.Object
struct Object_t;
// IOSADBanner
struct IOSADBanner_t150;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,IOSADBanner,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_1MethodDeclarations.h"
#define Transform_1__ctor_m27874(__this, ___object, ___method, method) (( void (*) (Transform_1_t6068 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m25629_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,IOSADBanner,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m27875(__this, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Transform_1_t6068 *, int32_t, IOSADBanner_t150 *, const MethodInfo*))Transform_1_Invoke_m25630_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,IOSADBanner,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m27876(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t6068 *, int32_t, IOSADBanner_t150 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m25631_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,IOSADBanner,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m27877(__this, ___result, method) (( DictionaryEntry_t2156  (*) (Transform_1_t6068 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m25632_gshared)(__this, ___result, method)
