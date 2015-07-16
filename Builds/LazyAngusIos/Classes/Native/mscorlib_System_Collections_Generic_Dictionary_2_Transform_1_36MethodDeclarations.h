﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.DictionaryEntry>
struct Transform_1_t3838;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t64;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m24848(__this, ___object, ___method, method) (( void (*) (Transform_1_t3838 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m17243_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m24849(__this, ___key, ___value, method) (( DictionaryEntry_t1718  (*) (Transform_1_t3838 *, String_t*, GUIStyle_t64 *, const MethodInfo*))Transform_1_Invoke_m17244_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m24850(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3838 *, String_t*, GUIStyle_t64 *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m17245_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m24851(__this, ___result, method) (( DictionaryEntry_t1718  (*) (Transform_1_t3838 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m17246_gshared)(__this, ___result, method)
