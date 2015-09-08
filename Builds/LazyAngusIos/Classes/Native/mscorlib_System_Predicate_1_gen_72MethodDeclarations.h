#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct Predicate_1_t7864;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m51817_gshared (Predicate_1_t7864 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m51817(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7864 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m51817_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m51818_gshared (Predicate_1_t7864 * __this, KeyValuePair_2_t6752  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m51818(__this, ___obj, method) (( bool (*) (Predicate_1_t7864 *, KeyValuePair_2_t6752 , const MethodInfo*))Predicate_1_Invoke_m51818_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m51819_gshared (Predicate_1_t7864 * __this, KeyValuePair_2_t6752  ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m51819(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7864 *, KeyValuePair_2_t6752 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m51819_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m51820_gshared (Predicate_1_t7864 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m51820(__this, ___result, method) (( bool (*) (Predicate_1_t7864 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m51820_gshared)(__this, ___result, method)
