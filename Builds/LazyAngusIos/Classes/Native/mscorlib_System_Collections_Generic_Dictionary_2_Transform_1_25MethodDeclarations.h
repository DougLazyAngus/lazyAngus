#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<FacebookProfileImageSize,UnityEngine.Texture2D,System.Collections.DictionaryEntry>
struct Transform_1_t3461;
// System.Object
struct Object_t;
// UnityEngine.Texture2D
struct Texture2D_t65;
// System.IAsyncResult
struct IAsyncResult_t388;
// System.AsyncCallback
struct AsyncCallback_t389;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// FacebookProfileImageSize
#include "AssemblyU2DCSharp_FacebookProfileImageSize.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<FacebookProfileImageSize,UnityEngine.Texture2D,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_9MethodDeclarations.h"
#define Transform_1__ctor_m19698(__this, ___object, ___method, method) (( void (*) (Transform_1_t3461 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m17670_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<FacebookProfileImageSize,UnityEngine.Texture2D,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m19699(__this, ___key, ___value, method) (( DictionaryEntry_t1663  (*) (Transform_1_t3461 *, int32_t, Texture2D_t65 *, const MethodInfo*))Transform_1_Invoke_m17671_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<FacebookProfileImageSize,UnityEngine.Texture2D,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m19700(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3461 *, int32_t, Texture2D_t65 *, AsyncCallback_t389 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m17672_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<FacebookProfileImageSize,UnityEngine.Texture2D,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m19701(__this, ___result, method) (( DictionaryEntry_t1663  (*) (Transform_1_t3461 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m17673_gshared)(__this, ___result, method)
