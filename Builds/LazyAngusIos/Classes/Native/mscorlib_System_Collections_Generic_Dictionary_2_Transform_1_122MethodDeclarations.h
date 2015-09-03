#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>,System.Collections.DictionaryEntry>
struct Transform_1_t9232;
// System.Object
struct Object_t;
// System.ComponentModel.WeakObjectWrapper
struct WeakObjectWrapper_t4268;
// System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>
struct LinkedList_1_t9223;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5MethodDeclarations.h"
#define Transform_1__ctor_m68759(__this, ___object, ___method, method) (( void (*) (Transform_1_t9232 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m26306_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m68760(__this, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Transform_1_t9232 *, WeakObjectWrapper_t4268 *, LinkedList_1_t9223 *, const MethodInfo*))Transform_1_Invoke_m26307_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m68761(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t9232 *, WeakObjectWrapper_t4268 *, LinkedList_1_t9223 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m26308_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m68762(__this, ___result, method) (( DictionaryEntry_t2156  (*) (Transform_1_t9232 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m26309_gshared)(__this, ___result, method)
