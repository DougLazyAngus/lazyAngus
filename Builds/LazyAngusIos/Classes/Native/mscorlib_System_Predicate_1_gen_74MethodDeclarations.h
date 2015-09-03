#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct Predicate_1_t7940;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m52873_gshared (Predicate_1_t7940 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m52873(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7940 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m52873_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m52874_gshared (Predicate_1_t7940 * __this, KeyValuePair_2_t7763  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m52874(__this, ___obj, method) (( bool (*) (Predicate_1_t7940 *, KeyValuePair_2_t7763 , const MethodInfo*))Predicate_1_Invoke_m52874_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m52875_gshared (Predicate_1_t7940 * __this, KeyValuePair_2_t7763  ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m52875(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7940 *, KeyValuePair_2_t7763 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m52875_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m52876_gshared (Predicate_1_t7940 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m52876(__this, ___result, method) (( bool (*) (Predicate_1_t7940 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m52876_gshared)(__this, ___result, method)
