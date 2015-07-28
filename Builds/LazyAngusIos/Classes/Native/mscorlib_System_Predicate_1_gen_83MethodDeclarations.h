﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct Predicate_1_t7763;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
#include "mscorlib_System_Predicate_1_gen_82MethodDeclarations.h"
#define Predicate_1__ctor_m53264(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7763 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m53162_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::Invoke(T)
#define Predicate_1_Invoke_m53265(__this, ___obj, method) (( bool (*) (Predicate_1_t7763 *, KeyValuePair_2_t6993 , const MethodInfo*))Predicate_1_Invoke_m53163_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m53266(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7763 *, KeyValuePair_2_t6993 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m53164_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m53267(__this, ___result, method) (( bool (*) (Predicate_1_t7763 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m53165_gshared)(__this, ___result, method)