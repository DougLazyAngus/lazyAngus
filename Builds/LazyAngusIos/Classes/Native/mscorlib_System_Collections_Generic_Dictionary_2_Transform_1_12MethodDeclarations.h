#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,AN_ActivityTemplate,System.Collections.DictionaryEntry>
struct Transform_1_t5475;
// System.Object
struct Object_t;
// AN_ActivityTemplate
struct AN_ActivityTemplate_t117;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,AN_ActivityTemplate,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_1MethodDeclarations.h"
#define Transform_1__ctor_m22683(__this, ___object, ___method, method) (( void (*) (Transform_1_t5475 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m21311_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,AN_ActivityTemplate,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m22684(__this, ___key, ___value, method) (( DictionaryEntry_t2140  (*) (Transform_1_t5475 *, int32_t, AN_ActivityTemplate_t117 *, const MethodInfo*))Transform_1_Invoke_m21312_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,AN_ActivityTemplate,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m22685(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t5475 *, int32_t, AN_ActivityTemplate_t117 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m21313_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,AN_ActivityTemplate,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m22686(__this, ___result, method) (( DictionaryEntry_t2140  (*) (Transform_1_t5475 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m21314_gshared)(__this, ___result, method)
