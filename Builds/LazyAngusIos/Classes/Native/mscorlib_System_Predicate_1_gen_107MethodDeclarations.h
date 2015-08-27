#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Predicate_1_t8626;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m63621_gshared (Predicate_1_t8626 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m63621(__this, ___object, ___method, method) (( void (*) (Predicate_1_t8626 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m63621_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m63622_gshared (Predicate_1_t8626 * __this, KeyValuePair_2_t3380  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m63622(__this, ___obj, method) (( bool (*) (Predicate_1_t8626 *, KeyValuePair_2_t3380 , const MethodInfo*))Predicate_1_Invoke_m63622_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m63623_gshared (Predicate_1_t8626 * __this, KeyValuePair_2_t3380  ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m63623(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t8626 *, KeyValuePair_2_t3380 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m63623_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m63624_gshared (Predicate_1_t8626 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m63624(__this, ___result, method) (( bool (*) (Predicate_1_t8626 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m63624_gshared)(__this, ___result, method)
