﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct Predicate_1_t7620;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Predicate_1_gen_78MethodDeclarations.h"
#define Predicate_1__ctor_m51398(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7620 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m51296_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Invoke(T)
#define Predicate_1_Invoke_m51399(__this, ___obj, method) (( bool (*) (Predicate_1_t7620 *, KeyValuePair_2_t7163 , const MethodInfo*))Predicate_1_Invoke_m51297_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m51400(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7620 *, KeyValuePair_2_t7163 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m51298_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m51401(__this, ___result, method) (( bool (*) (Predicate_1_t7620 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m51299_gshared)(__this, ___result, method)