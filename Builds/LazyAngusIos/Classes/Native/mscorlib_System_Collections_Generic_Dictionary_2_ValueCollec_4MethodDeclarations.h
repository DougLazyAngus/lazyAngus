#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t2933;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t312;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object[]
struct ObjectU5BU5D_t682;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_95.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_8MethodDeclarations.h"
#define ValueCollection__ctor_m22095(__this, ___dictionary, method) (( void (*) (ValueCollection_t2933 *, Dictionary_2_t312 *, const MethodInfo*))ValueCollection__ctor_m21946_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m22096(__this, ___item, method) (( void (*) (ValueCollection_t2933 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m21947_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m22097(__this, method) (( void (*) (ValueCollection_t2933 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m21948_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m22098(__this, ___item, method) (( bool (*) (ValueCollection_t2933 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m21949_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m22099(__this, ___item, method) (( bool (*) (ValueCollection_t2933 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m21950_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m22100(__this, method) (( Object_t* (*) (ValueCollection_t2933 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m21951_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m22101(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2933 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m21952_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m22102(__this, method) (( Object_t * (*) (ValueCollection_t2933 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m21953_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m22103(__this, method) (( bool (*) (ValueCollection_t2933 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m21954_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m22104(__this, method) (( bool (*) (ValueCollection_t2933 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m21955_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m22105(__this, method) (( Object_t * (*) (ValueCollection_t2933 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m21956_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m22106(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2933 *, ObjectU5BU5D_t682*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m21957_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::GetEnumerator()
#define ValueCollection_GetEnumerator_m22107(__this, method) (( Enumerator_t8721  (*) (ValueCollection_t2933 *, const MethodInfo*))ValueCollection_GetEnumerator_m21958_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::get_Count()
#define ValueCollection_get_Count_m22108(__this, method) (( int32_t (*) (ValueCollection_t2933 *, const MethodInfo*))ValueCollection_get_Count_m21959_gshared)(__this, method)
