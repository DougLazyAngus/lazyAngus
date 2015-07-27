#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>
struct Transform_1_t3778;
// System.Object
struct Object_t;
// UnityEngine.Font
struct Font_t804;
// System.Collections.Generic.List`1<UnityEngine.UI.Text>
struct List_1_t953;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m24148(__this, ___object, ___method, method) (( void (*) (Transform_1_t3778 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m17795_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m24149(__this, ___key, ___value, method) (( DictionaryEntry_t2181  (*) (Transform_1_t3778 *, Font_t804 *, List_1_t953 *, const MethodInfo*))Transform_1_Invoke_m17796_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m24150(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3778 *, Font_t804 *, List_1_t953 *, AsyncCallback_t346 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m17797_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m24151(__this, ___result, method) (( DictionaryEntry_t2181  (*) (Transform_1_t3778 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m17798_gshared)(__this, ___result, method)
