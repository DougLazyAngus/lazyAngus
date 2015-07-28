﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.DateTime,System.Collections.DictionaryEntry>
struct Transform_1_t7018;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.DateTime,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_79MethodDeclarations.h"
#define Transform_1__ctor_m44359(__this, ___object, ___method, method) (( void (*) (Transform_1_t7018 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m44360_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.DateTime,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m44361(__this, ___key, ___value, method) (( DictionaryEntry_t2080  (*) (Transform_1_t7018 *, String_t*, DateTime_t287 , const MethodInfo*))Transform_1_Invoke_m44362_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.DateTime,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m44363(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t7018 *, String_t*, DateTime_t287 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m44364_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.DateTime,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m44365(__this, ___result, method) (( DictionaryEntry_t2080  (*) (Transform_1_t7018 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m44366_gshared)(__this, ___result, method)
