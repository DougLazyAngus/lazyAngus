#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1318;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5778;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t734;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t1488;
// System.String[]
struct StringU5BU5D_t75;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.HashSet`1/Enumerator<System.String>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__1.h"

// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
// System.Collections.Generic.HashSet`1<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_gen_0MethodDeclarations.h"
#define HashSet_1__ctor_m7666(__this, method) (( void (*) (HashSet_1_t1318 *, const MethodInfo*))HashSet_1__ctor_m35230_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1__ctor_m36874(__this, ___comparer, method) (( void (*) (HashSet_1_t1318 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m7708_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define HashSet_1__ctor_m7669(__this, ___collection, method) (( void (*) (HashSet_1_t1318 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m35231_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1__ctor_m36875(__this, ___collection, ___comparer, method) (( void (*) (HashSet_1_t1318 *, Object_t*, Object_t*, const MethodInfo*))HashSet_1__ctor_m35232_gshared)(__this, ___collection, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define HashSet_1__ctor_m36876(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1318 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))HashSet_1__ctor_m35233_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36877(__this, method) (( Object_t* (*) (HashSet_1_t1318 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35234_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36878(__this, method) (( bool (*) (HashSet_1_t1318 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35235_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m36879(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1318 *, StringU5BU5D_t75*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m35236_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.ICollection<T>.Add(T)
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m36880(__this, ___item, method) (( void (*) (HashSet_1_t1318 *, String_t*, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m35237_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m36881(__this, method) (( Object_t * (*) (HashSet_1_t1318 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m35238_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::get_Count()
#define HashSet_1_get_Count_m36882(__this, method) (( int32_t (*) (HashSet_1_t1318 *, const MethodInfo*))HashSet_1_get_Count_m35239_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1_Init_m36883(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t1318 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m35240_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::InitArrays(System.Int32)
#define HashSet_1_InitArrays_m36884(__this, ___size, method) (( void (*) (HashSet_1_t1318 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m35241_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::SlotsContainsAt(System.Int32,System.Int32,T)
#define HashSet_1_SlotsContainsAt_m36885(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t1318 *, int32_t, int32_t, String_t*, const MethodInfo*))HashSet_1_SlotsContainsAt_m35242_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::CopyTo(T[],System.Int32)
#define HashSet_1_CopyTo_m36886(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1318 *, StringU5BU5D_t75*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m35243_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::CopyTo(T[],System.Int32,System.Int32)
#define HashSet_1_CopyTo_m36887(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t1318 *, StringU5BU5D_t75*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m35244_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::Resize()
#define HashSet_1_Resize_m36888(__this, method) (( void (*) (HashSet_1_t1318 *, const MethodInfo*))HashSet_1_Resize_m35245_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::GetLinkHashCode(System.Int32)
#define HashSet_1_GetLinkHashCode_m36889(__this, ___index, method) (( int32_t (*) (HashSet_1_t1318 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m35246_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::GetItemHashCode(T)
#define HashSet_1_GetItemHashCode_m36890(__this, ___item, method) (( int32_t (*) (HashSet_1_t1318 *, String_t*, const MethodInfo*))HashSet_1_GetItemHashCode_m35247_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(T)
#define HashSet_1_Add_m7886(__this, ___item, method) (( bool (*) (HashSet_1_t1318 *, String_t*, const MethodInfo*))HashSet_1_Add_m35248_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::Clear()
#define HashSet_1_Clear_m36891(__this, method) (( void (*) (HashSet_1_t1318 *, const MethodInfo*))HashSet_1_Clear_m35249_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(T)
#define HashSet_1_Contains_m36892(__this, ___item, method) (( bool (*) (HashSet_1_t1318 *, String_t*, const MethodInfo*))HashSet_1_Contains_m35250_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Remove(T)
#define HashSet_1_Remove_m36893(__this, ___item, method) (( bool (*) (HashSet_1_t1318 *, String_t*, const MethodInfo*))HashSet_1_Remove_m35251_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define HashSet_1_GetObjectData_m36894(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1318 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))HashSet_1_GetObjectData_m35252_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::OnDeserialization(System.Object)
#define HashSet_1_OnDeserialization_m36895(__this, ___sender, method) (( void (*) (HashSet_1_t1318 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m35253_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.String>::GetEnumerator()
#define HashSet_1_GetEnumerator_m36896(__this, method) (( Enumerator_t6674  (*) (HashSet_1_t1318 *, const MethodInfo*))HashSet_1_GetEnumerator_m35254_gshared)(__this, method)
