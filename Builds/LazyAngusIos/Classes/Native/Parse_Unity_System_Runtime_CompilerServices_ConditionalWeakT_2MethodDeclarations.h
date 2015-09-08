#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>
struct Reference_t6505;
// System.WeakReference
struct WeakReference_t2245;
// System.Object
struct Object_t;

// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::.ctor(TKey)
extern "C" void Reference__ctor_m35049_gshared (Reference_t6505 * __this, Object_t * ___obj, const MethodInfo* method);
#define Reference__ctor_m35049(__this, ___obj, method) (( void (*) (Reference_t6505 *, Object_t *, const MethodInfo*))Reference__ctor_m35049_gshared)(__this, ___obj, method)
// System.WeakReference System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::get_WeakReference()
extern "C" WeakReference_t2245 * Reference_get_WeakReference_m35050_gshared (Reference_t6505 * __this, const MethodInfo* method);
#define Reference_get_WeakReference_m35050(__this, method) (( WeakReference_t2245 * (*) (Reference_t6505 *, const MethodInfo*))Reference_get_WeakReference_m35050_gshared)(__this, method)
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::set_WeakReference(System.WeakReference)
extern "C" void Reference_set_WeakReference_m35051_gshared (Reference_t6505 * __this, WeakReference_t2245 * ___value, const MethodInfo* method);
#define Reference_set_WeakReference_m35051(__this, ___value, method) (( void (*) (Reference_t6505 *, WeakReference_t2245 *, const MethodInfo*))Reference_set_WeakReference_m35051_gshared)(__this, ___value, method)
// TKey System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::get_Value()
extern "C" Object_t * Reference_get_Value_m35052_gshared (Reference_t6505 * __this, const MethodInfo* method);
#define Reference_get_Value_m35052(__this, method) (( Object_t * (*) (Reference_t6505 *, const MethodInfo*))Reference_get_Value_m35052_gshared)(__this, method)
// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::GetHashCode()
extern "C" int32_t Reference_GetHashCode_m35053_gshared (Reference_t6505 * __this, const MethodInfo* method);
#define Reference_GetHashCode_m35053(__this, method) (( int32_t (*) (Reference_t6505 *, const MethodInfo*))Reference_GetHashCode_m35053_gshared)(__this, method)
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::Equals(System.Object)
extern "C" bool Reference_Equals_m35054_gshared (Reference_t6505 * __this, Object_t * ___obj, const MethodInfo* method);
#define Reference_Equals_m35054(__this, ___obj, method) (( bool (*) (Reference_t6505 *, Object_t *, const MethodInfo*))Reference_Equals_m35054_gshared)(__this, ___obj, method)
