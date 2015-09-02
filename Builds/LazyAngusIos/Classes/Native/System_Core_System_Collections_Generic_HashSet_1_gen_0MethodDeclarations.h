#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t1484;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1204;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t724;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Object[]
struct ObjectU5BU5D_t696;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__0.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m30925_gshared (HashSet_1_t1484 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m30925(__this, method) (( void (*) (HashSet_1_t1484 *, const MethodInfo*))HashSet_1__ctor_m30925_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m7633_gshared (HashSet_1_t1484 * __this, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1__ctor_m7633(__this, ___comparer, method) (( void (*) (HashSet_1_t1484 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m7633_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void HashSet_1__ctor_m30926_gshared (HashSet_1_t1484 * __this, Object_t* ___collection, const MethodInfo* method);
#define HashSet_1__ctor_m30926(__this, ___collection, method) (( void (*) (HashSet_1_t1484 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m30926_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m30927_gshared (HashSet_1_t1484 * __this, Object_t* ___collection, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1__ctor_m30927(__this, ___collection, ___comparer, method) (( void (*) (HashSet_1_t1484 *, Object_t*, Object_t*, const MethodInfo*))HashSet_1__ctor_m30927_gshared)(__this, ___collection, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m30928_gshared (HashSet_1_t1484 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m30928(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1484 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))HashSet_1__ctor_m30928_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30929_gshared (HashSet_1_t1484 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30929(__this, method) (( Object_t* (*) (HashSet_1_t1484 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30930_gshared (HashSet_1_t1484 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30930(__this, method) (( bool (*) (HashSet_1_t1484 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30930_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m30931_gshared (HashSet_1_t1484 * __this, ObjectU5BU5D_t696* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m30931(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1484 *, ObjectU5BU5D_t696*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m30931_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30932_gshared (HashSet_1_t1484 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30932(__this, ___item, method) (( void (*) (HashSet_1_t1484 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30932_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m30933_gshared (HashSet_1_t1484 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m30933(__this, method) (( Object_t * (*) (HashSet_1_t1484 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m30933_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m30934_gshared (HashSet_1_t1484 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m30934(__this, method) (( int32_t (*) (HashSet_1_t1484 *, const MethodInfo*))HashSet_1_get_Count_m30934_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m30935_gshared (HashSet_1_t1484 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m30935(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t1484 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m30935_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m30936_gshared (HashSet_1_t1484 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m30936(__this, ___size, method) (( void (*) (HashSet_1_t1484 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m30936_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m30937_gshared (HashSet_1_t1484 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m30937(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t1484 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m30937_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m30938_gshared (HashSet_1_t1484 * __this, ObjectU5BU5D_t696* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m30938(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1484 *, ObjectU5BU5D_t696*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m30938_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m30939_gshared (HashSet_1_t1484 * __this, ObjectU5BU5D_t696* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m30939(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t1484 *, ObjectU5BU5D_t696*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m30939_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m30940_gshared (HashSet_1_t1484 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m30940(__this, method) (( void (*) (HashSet_1_t1484 *, const MethodInfo*))HashSet_1_Resize_m30940_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m30941_gshared (HashSet_1_t1484 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m30941(__this, ___index, method) (( int32_t (*) (HashSet_1_t1484 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m30941_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m30942_gshared (HashSet_1_t1484 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m30942(__this, ___item, method) (( int32_t (*) (HashSet_1_t1484 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m30942_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m30943_gshared (HashSet_1_t1484 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m30943(__this, ___item, method) (( bool (*) (HashSet_1_t1484 *, Object_t *, const MethodInfo*))HashSet_1_Add_m30943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m30944_gshared (HashSet_1_t1484 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m30944(__this, method) (( void (*) (HashSet_1_t1484 *, const MethodInfo*))HashSet_1_Clear_m30944_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m30945_gshared (HashSet_1_t1484 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m30945(__this, ___item, method) (( bool (*) (HashSet_1_t1484 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m30945_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m30946_gshared (HashSet_1_t1484 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m30946(__this, ___item, method) (( bool (*) (HashSet_1_t1484 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m30946_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m30947_gshared (HashSet_1_t1484 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m30947(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1484 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))HashSet_1_GetObjectData_m30947_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m30948_gshared (HashSet_1_t1484 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m30948(__this, ___sender, method) (( void (*) (HashSet_1_t1484 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m30948_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t5977  HashSet_1_GetEnumerator_m30949_gshared (HashSet_1_t1484 * __this, const MethodInfo* method);
#define HashSet_1_GetEnumerator_m30949(__this, method) (( Enumerator_t5977  (*) (HashSet_1_t1484 *, const MethodInfo*))HashSet_1_GetEnumerator_m30949_gshared)(__this, method)
