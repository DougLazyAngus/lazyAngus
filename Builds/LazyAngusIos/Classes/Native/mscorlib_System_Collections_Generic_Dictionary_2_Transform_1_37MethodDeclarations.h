#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t3815;
// System.Object
struct Object_t;
// UnityEngine.UI.Graphic
struct Graphic_t812;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_20MethodDeclarations.h"
#define Transform_1__ctor_m24771(__this, ___object, ___method, method) (( void (*) (Transform_1_t3815 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m19822_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m24772(__this, ___key, ___value, method) (( DictionaryEntry_t2181  (*) (Transform_1_t3815 *, Graphic_t812 *, int32_t, const MethodInfo*))Transform_1_Invoke_m19823_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m24773(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3815 *, Graphic_t812 *, int32_t, AsyncCallback_t346 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m19824_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m24774(__this, ___result, method) (( DictionaryEntry_t2181  (*) (Transform_1_t3815 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m19825_gshared)(__this, ___result, method)
