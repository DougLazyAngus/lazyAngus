#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>
struct Reference_t5848;
// System.WeakReference
struct WeakReference_t2165;
// System.Object
struct Object_t;

// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::.ctor(TKey)
extern "C" void Reference__ctor_m29595_gshared (Reference_t5848 * __this, Object_t * ___obj, const MethodInfo* method);
#define Reference__ctor_m29595(__this, ___obj, method) (( void (*) (Reference_t5848 *, Object_t *, const MethodInfo*))Reference__ctor_m29595_gshared)(__this, ___obj, method)
// System.WeakReference System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::get_WeakReference()
extern "C" WeakReference_t2165 * Reference_get_WeakReference_m29596_gshared (Reference_t5848 * __this, const MethodInfo* method);
#define Reference_get_WeakReference_m29596(__this, method) (( WeakReference_t2165 * (*) (Reference_t5848 *, const MethodInfo*))Reference_get_WeakReference_m29596_gshared)(__this, method)
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::set_WeakReference(System.WeakReference)
extern "C" void Reference_set_WeakReference_m29597_gshared (Reference_t5848 * __this, WeakReference_t2165 * ___value, const MethodInfo* method);
#define Reference_set_WeakReference_m29597(__this, ___value, method) (( void (*) (Reference_t5848 *, WeakReference_t2165 *, const MethodInfo*))Reference_set_WeakReference_m29597_gshared)(__this, ___value, method)
// TKey System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::get_Value()
extern "C" Object_t * Reference_get_Value_m29598_gshared (Reference_t5848 * __this, const MethodInfo* method);
#define Reference_get_Value_m29598(__this, method) (( Object_t * (*) (Reference_t5848 *, const MethodInfo*))Reference_get_Value_m29598_gshared)(__this, method)
// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::GetHashCode()
extern "C" int32_t Reference_GetHashCode_m29599_gshared (Reference_t5848 * __this, const MethodInfo* method);
#define Reference_GetHashCode_m29599(__this, method) (( int32_t (*) (Reference_t5848 *, const MethodInfo*))Reference_GetHashCode_m29599_gshared)(__this, method)
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::Equals(System.Object)
extern "C" bool Reference_Equals_m29600_gshared (Reference_t5848 * __this, Object_t * ___obj, const MethodInfo* method);
#define Reference_Equals_m29600(__this, ___obj, method) (( bool (*) (Reference_t5848 *, Object_t *, const MethodInfo*))Reference_Equals_m29600_gshared)(__this, ___obj, method)
