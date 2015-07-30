#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>
struct Reference_t5855;
// System.WeakReference
struct WeakReference_t2171;
// System.Object
struct Object_t;

// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::.ctor(TKey)
extern "C" void Reference__ctor_m29642_gshared (Reference_t5855 * __this, Object_t * ___obj, const MethodInfo* method);
#define Reference__ctor_m29642(__this, ___obj, method) (( void (*) (Reference_t5855 *, Object_t *, const MethodInfo*))Reference__ctor_m29642_gshared)(__this, ___obj, method)
// System.WeakReference System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::get_WeakReference()
extern "C" WeakReference_t2171 * Reference_get_WeakReference_m29643_gshared (Reference_t5855 * __this, const MethodInfo* method);
#define Reference_get_WeakReference_m29643(__this, method) (( WeakReference_t2171 * (*) (Reference_t5855 *, const MethodInfo*))Reference_get_WeakReference_m29643_gshared)(__this, method)
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::set_WeakReference(System.WeakReference)
extern "C" void Reference_set_WeakReference_m29644_gshared (Reference_t5855 * __this, WeakReference_t2171 * ___value, const MethodInfo* method);
#define Reference_set_WeakReference_m29644(__this, ___value, method) (( void (*) (Reference_t5855 *, WeakReference_t2171 *, const MethodInfo*))Reference_set_WeakReference_m29644_gshared)(__this, ___value, method)
// TKey System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::get_Value()
extern "C" Object_t * Reference_get_Value_m29645_gshared (Reference_t5855 * __this, const MethodInfo* method);
#define Reference_get_Value_m29645(__this, method) (( Object_t * (*) (Reference_t5855 *, const MethodInfo*))Reference_get_Value_m29645_gshared)(__this, method)
// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::GetHashCode()
extern "C" int32_t Reference_GetHashCode_m29646_gshared (Reference_t5855 * __this, const MethodInfo* method);
#define Reference_GetHashCode_m29646(__this, method) (( int32_t (*) (Reference_t5855 *, const MethodInfo*))Reference_GetHashCode_m29646_gshared)(__this, method)
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::Equals(System.Object)
extern "C" bool Reference_Equals_m29647_gshared (Reference_t5855 * __this, Object_t * ___obj, const MethodInfo* method);
#define Reference_Equals_m29647(__this, ___obj, method) (( bool (*) (Reference_t5855 *, Object_t *, const MethodInfo*))Reference_Equals_m29647_gshared)(__this, ___obj, method)
