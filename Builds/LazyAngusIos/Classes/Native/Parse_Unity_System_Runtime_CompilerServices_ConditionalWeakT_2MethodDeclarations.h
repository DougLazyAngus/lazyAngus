#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>
struct Reference_t6499;
// System.WeakReference
struct WeakReference_t2241;
// System.Object
struct Object_t;

// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::.ctor(TKey)
extern "C" void Reference__ctor_m35024_gshared (Reference_t6499 * __this, Object_t * ___obj, const MethodInfo* method);
#define Reference__ctor_m35024(__this, ___obj, method) (( void (*) (Reference_t6499 *, Object_t *, const MethodInfo*))Reference__ctor_m35024_gshared)(__this, ___obj, method)
// System.WeakReference System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::get_WeakReference()
extern "C" WeakReference_t2241 * Reference_get_WeakReference_m35025_gshared (Reference_t6499 * __this, const MethodInfo* method);
#define Reference_get_WeakReference_m35025(__this, method) (( WeakReference_t2241 * (*) (Reference_t6499 *, const MethodInfo*))Reference_get_WeakReference_m35025_gshared)(__this, method)
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::set_WeakReference(System.WeakReference)
extern "C" void Reference_set_WeakReference_m35026_gshared (Reference_t6499 * __this, WeakReference_t2241 * ___value, const MethodInfo* method);
#define Reference_set_WeakReference_m35026(__this, ___value, method) (( void (*) (Reference_t6499 *, WeakReference_t2241 *, const MethodInfo*))Reference_set_WeakReference_m35026_gshared)(__this, ___value, method)
// TKey System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::get_Value()
extern "C" Object_t * Reference_get_Value_m35027_gshared (Reference_t6499 * __this, const MethodInfo* method);
#define Reference_get_Value_m35027(__this, method) (( Object_t * (*) (Reference_t6499 *, const MethodInfo*))Reference_get_Value_m35027_gshared)(__this, method)
// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::GetHashCode()
extern "C" int32_t Reference_GetHashCode_m35028_gshared (Reference_t6499 * __this, const MethodInfo* method);
#define Reference_GetHashCode_m35028(__this, method) (( int32_t (*) (Reference_t6499 *, const MethodInfo*))Reference_GetHashCode_m35028_gshared)(__this, method)
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::Equals(System.Object)
extern "C" bool Reference_Equals_m35029_gshared (Reference_t6499 * __this, Object_t * ___obj, const MethodInfo* method);
#define Reference_Equals_m35029(__this, ___obj, method) (( bool (*) (Reference_t6499 *, Object_t *, const MethodInfo*))Reference_Equals_m35029_gshared)(__this, ___obj, method)
