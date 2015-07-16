﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,AN_ActivityTemplate,System.Collections.DictionaryEntry>
struct Transform_1_t3380;
// System.Object
struct Object_t;
// AN_ActivityTemplate
struct AN_ActivityTemplate_t75;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,AN_ActivityTemplate,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_9MethodDeclarations.h"
#define Transform_1__ctor_m18023(__this, ___object, ___method, method) (( void (*) (Transform_1_t3380 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m17998_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,AN_ActivityTemplate,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m18024(__this, ___key, ___value, method) (( DictionaryEntry_t1710  (*) (Transform_1_t3380 *, int32_t, AN_ActivityTemplate_t75 *, const MethodInfo*))Transform_1_Invoke_m17999_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,AN_ActivityTemplate,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m18025(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3380 *, int32_t, AN_ActivityTemplate_t75 *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m18000_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,AN_ActivityTemplate,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m18026(__this, ___result, method) (( DictionaryEntry_t1710  (*) (Transform_1_t3380 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m18001_gshared)(__this, ___result, method)
