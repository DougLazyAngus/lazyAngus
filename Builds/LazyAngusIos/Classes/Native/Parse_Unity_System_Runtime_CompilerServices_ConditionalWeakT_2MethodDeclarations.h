#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>
struct Reference_t6512;
// System.WeakReference
struct WeakReference_t2252;
// System.Object
struct Object_t;

// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::.ctor(TKey)
extern "C" void Reference__ctor_m35106_gshared (Reference_t6512 * __this, Object_t * ___obj, const MethodInfo* method);
#define Reference__ctor_m35106(__this, ___obj, method) (( void (*) (Reference_t6512 *, Object_t *, const MethodInfo*))Reference__ctor_m35106_gshared)(__this, ___obj, method)
// System.WeakReference System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::get_WeakReference()
extern "C" WeakReference_t2252 * Reference_get_WeakReference_m35107_gshared (Reference_t6512 * __this, const MethodInfo* method);
#define Reference_get_WeakReference_m35107(__this, method) (( WeakReference_t2252 * (*) (Reference_t6512 *, const MethodInfo*))Reference_get_WeakReference_m35107_gshared)(__this, method)
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::set_WeakReference(System.WeakReference)
extern "C" void Reference_set_WeakReference_m35108_gshared (Reference_t6512 * __this, WeakReference_t2252 * ___value, const MethodInfo* method);
#define Reference_set_WeakReference_m35108(__this, ___value, method) (( void (*) (Reference_t6512 *, WeakReference_t2252 *, const MethodInfo*))Reference_set_WeakReference_m35108_gshared)(__this, ___value, method)
// TKey System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::get_Value()
extern "C" Object_t * Reference_get_Value_m35109_gshared (Reference_t6512 * __this, const MethodInfo* method);
#define Reference_get_Value_m35109(__this, method) (( Object_t * (*) (Reference_t6512 *, const MethodInfo*))Reference_get_Value_m35109_gshared)(__this, method)
// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::GetHashCode()
extern "C" int32_t Reference_GetHashCode_m35110_gshared (Reference_t6512 * __this, const MethodInfo* method);
#define Reference_GetHashCode_m35110(__this, method) (( int32_t (*) (Reference_t6512 *, const MethodInfo*))Reference_GetHashCode_m35110_gshared)(__this, method)
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::Equals(System.Object)
extern "C" bool Reference_Equals_m35111_gshared (Reference_t6512 * __this, Object_t * ___obj, const MethodInfo* method);
#define Reference_Equals_m35111(__this, ___obj, method) (( bool (*) (Reference_t6512 *, Object_t *, const MethodInfo*))Reference_Equals_m35111_gshared)(__this, ___obj, method)
