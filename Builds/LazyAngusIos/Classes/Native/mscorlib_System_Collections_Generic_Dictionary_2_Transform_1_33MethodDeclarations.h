#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t3696;
// System.Object
struct Object_t;
// UnityEngine.UI.Graphic
struct Graphic_t708;
// System.IAsyncResult
struct IAsyncResult_t388;
// System.AsyncCallback
struct AsyncCallback_t389;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_16MethodDeclarations.h"
#define Transform_1__ctor_m23479(__this, ___object, ___method, method) (( void (*) (Transform_1_t3696 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m18414_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m23480(__this, ___key, ___value, method) (( DictionaryEntry_t1663  (*) (Transform_1_t3696 *, Graphic_t708 *, int32_t, const MethodInfo*))Transform_1_Invoke_m18415_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m23481(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3696 *, Graphic_t708 *, int32_t, AsyncCallback_t389 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m18416_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m23482(__this, ___result, method) (( DictionaryEntry_t1663  (*) (Transform_1_t3696 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m18417_gshared)(__this, ___result, method)
