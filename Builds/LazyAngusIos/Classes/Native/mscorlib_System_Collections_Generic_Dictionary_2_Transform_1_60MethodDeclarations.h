#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>
struct Transform_1_t4062;
// System.Object
struct Object_t;
// UnityEngine.Event
struct Event_t681;
struct Event_t681_marshaled;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_20MethodDeclarations.h"
#define Transform_1__ctor_m27949(__this, ___object, ___method, method) (( void (*) (Transform_1_t4062 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m19815_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m27950(__this, ___key, ___value, method) (( DictionaryEntry_t2180  (*) (Transform_1_t4062 *, Event_t681 *, int32_t, const MethodInfo*))Transform_1_Invoke_m19816_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m27951(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4062 *, Event_t681 *, int32_t, AsyncCallback_t344 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m19817_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m27952(__this, ___result, method) (( DictionaryEntry_t2180  (*) (Transform_1_t4062 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m19818_gshared)(__this, ___result, method)
