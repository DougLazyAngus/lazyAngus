﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Facebook.FacebookDelegate,System.Collections.DictionaryEntry>
struct Transform_1_t3561;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Facebook.FacebookDelegate
struct FacebookDelegate_t350;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Facebook.FacebookDelegate,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m20890(__this, ___object, ___method, method) (( void (*) (Transform_1_t3561 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m17207_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Facebook.FacebookDelegate,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m20891(__this, ___key, ___value, method) (( DictionaryEntry_t1710  (*) (Transform_1_t3561 *, String_t*, FacebookDelegate_t350 *, const MethodInfo*))Transform_1_Invoke_m17208_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Facebook.FacebookDelegate,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m20892(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3561 *, String_t*, FacebookDelegate_t350 *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m17209_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Facebook.FacebookDelegate,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m20893(__this, ___result, method) (( DictionaryEntry_t1710  (*) (Transform_1_t3561 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m17210_gshared)(__this, ___result, method)
