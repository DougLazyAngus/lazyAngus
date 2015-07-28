﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct Predicate_1_t7820;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_52.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m53939_gshared (Predicate_1_t7820 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m53939(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7820 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m53939_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m53940_gshared (Predicate_1_t7820 * __this, KeyValuePair_2_t6918  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m53940(__this, ___obj, method) (( bool (*) (Predicate_1_t7820 *, KeyValuePair_2_t6918 , const MethodInfo*))Predicate_1_Invoke_m53940_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m53941_gshared (Predicate_1_t7820 * __this, KeyValuePair_2_t6918  ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m53941(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7820 *, KeyValuePair_2_t6918 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m53941_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m53942_gshared (Predicate_1_t7820 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m53942(__this, ___result, method) (( bool (*) (Predicate_1_t7820 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m53942_gshared)(__this, ___result, method)