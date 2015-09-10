#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.SByte>
struct List_1_t7007;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.SByte>
struct IEnumerable_1_t6899;
// System.SByte[]
struct SByteU5BU5D_t5380;
// System.Collections.Generic.IEnumerator`1<System.SByte>
struct IEnumerator_1_t6900;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9845;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.SByte>
struct ReadOnlyCollection_1_t7009;
// System.Predicate`1<System.SByte>
struct Predicate_1_t7014;
// System.Collections.Generic.IComparer`1<System.SByte>
struct IComparer_1_t5765;
// System.Comparison`1<System.SByte>
struct Comparison_1_t7018;
// System.Collections.Generic.List`1/Enumerator<System.SByte>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_62.h"

// System.Void System.Collections.Generic.List`1<System.SByte>::.ctor()
extern "C" void List_1__ctor_m41221_gshared (List_1_t7007 * __this, const MethodInfo* method);
#define List_1__ctor_m41221(__this, method) (( void (*) (List_1_t7007 *, const MethodInfo*))List_1__ctor_m41221_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m41222_gshared (List_1_t7007 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m41222(__this, ___collection, method) (( void (*) (List_1_t7007 *, Object_t*, const MethodInfo*))List_1__ctor_m41222_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::.ctor(System.Int32)
extern "C" void List_1__ctor_m41223_gshared (List_1_t7007 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m41223(__this, ___capacity, method) (( void (*) (List_1_t7007 *, int32_t, const MethodInfo*))List_1__ctor_m41223_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m41224_gshared (List_1_t7007 * __this, SByteU5BU5D_t5380* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m41224(__this, ___data, ___size, method) (( void (*) (List_1_t7007 *, SByteU5BU5D_t5380*, int32_t, const MethodInfo*))List_1__ctor_m41224_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::.cctor()
extern "C" void List_1__cctor_m41225_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m41225(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m41225_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.SByte>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41226_gshared (List_1_t7007 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41226(__this, method) (( Object_t* (*) (List_1_t7007 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41226_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m41227_gshared (List_1_t7007 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m41227(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7007 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m41227_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m41228_gshared (List_1_t7007 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m41228(__this, method) (( Object_t * (*) (List_1_t7007 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m41228_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m41229_gshared (List_1_t7007 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m41229(__this, ___item, method) (( int32_t (*) (List_1_t7007 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m41229_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m41230_gshared (List_1_t7007 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m41230(__this, ___item, method) (( bool (*) (List_1_t7007 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m41230_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m41231_gshared (List_1_t7007 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m41231(__this, ___item, method) (( int32_t (*) (List_1_t7007 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m41231_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m41232_gshared (List_1_t7007 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m41232(__this, ___index, ___item, method) (( void (*) (List_1_t7007 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m41232_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m41233_gshared (List_1_t7007 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m41233(__this, ___item, method) (( void (*) (List_1_t7007 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m41233_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41234_gshared (List_1_t7007 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41234(__this, method) (( bool (*) (List_1_t7007 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41234_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m41235_gshared (List_1_t7007 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m41235(__this, method) (( bool (*) (List_1_t7007 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m41235_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.SByte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m41236_gshared (List_1_t7007 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m41236(__this, method) (( Object_t * (*) (List_1_t7007 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m41236_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m41237_gshared (List_1_t7007 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m41237(__this, method) (( bool (*) (List_1_t7007 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m41237_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m41238_gshared (List_1_t7007 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m41238(__this, method) (( bool (*) (List_1_t7007 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m41238_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m41239_gshared (List_1_t7007 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m41239(__this, ___index, method) (( Object_t * (*) (List_1_t7007 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m41239_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m41240_gshared (List_1_t7007 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m41240(__this, ___index, ___value, method) (( void (*) (List_1_t7007 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m41240_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Add(T)
extern "C" void List_1_Add_m41241_gshared (List_1_t7007 * __this, int8_t ___item, const MethodInfo* method);
#define List_1_Add_m41241(__this, ___item, method) (( void (*) (List_1_t7007 *, int8_t, const MethodInfo*))List_1_Add_m41241_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m41242_gshared (List_1_t7007 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m41242(__this, ___newCount, method) (( void (*) (List_1_t7007 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m41242_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m41243_gshared (List_1_t7007 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m41243(__this, ___idx, ___count, method) (( void (*) (List_1_t7007 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m41243_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m41244_gshared (List_1_t7007 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m41244(__this, ___collection, method) (( void (*) (List_1_t7007 *, Object_t*, const MethodInfo*))List_1_AddCollection_m41244_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m41245_gshared (List_1_t7007 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m41245(__this, ___enumerable, method) (( void (*) (List_1_t7007 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m41245_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m41246_gshared (List_1_t7007 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m41246(__this, ___collection, method) (( void (*) (List_1_t7007 *, Object_t*, const MethodInfo*))List_1_AddRange_m41246_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.SByte>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7009 * List_1_AsReadOnly_m41247_gshared (List_1_t7007 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m41247(__this, method) (( ReadOnlyCollection_1_t7009 * (*) (List_1_t7007 *, const MethodInfo*))List_1_AsReadOnly_m41247_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Clear()
extern "C" void List_1_Clear_m41248_gshared (List_1_t7007 * __this, const MethodInfo* method);
#define List_1_Clear_m41248(__this, method) (( void (*) (List_1_t7007 *, const MethodInfo*))List_1_Clear_m41248_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::Contains(T)
extern "C" bool List_1_Contains_m41249_gshared (List_1_t7007 * __this, int8_t ___item, const MethodInfo* method);
#define List_1_Contains_m41249(__this, ___item, method) (( bool (*) (List_1_t7007 *, int8_t, const MethodInfo*))List_1_Contains_m41249_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m41250_gshared (List_1_t7007 * __this, SByteU5BU5D_t5380* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m41250(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7007 *, SByteU5BU5D_t5380*, int32_t, const MethodInfo*))List_1_CopyTo_m41250_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.SByte>::Find(System.Predicate`1<T>)
extern "C" int8_t List_1_Find_m41251_gshared (List_1_t7007 * __this, Predicate_1_t7014 * ___match, const MethodInfo* method);
#define List_1_Find_m41251(__this, ___match, method) (( int8_t (*) (List_1_t7007 *, Predicate_1_t7014 *, const MethodInfo*))List_1_Find_m41251_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m41252_gshared (Object_t * __this /* static, unused */, Predicate_1_t7014 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m41252(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7014 *, const MethodInfo*))List_1_CheckMatch_m41252_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m41253_gshared (List_1_t7007 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7014 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m41253(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7007 *, int32_t, int32_t, Predicate_1_t7014 *, const MethodInfo*))List_1_GetIndex_m41253_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.SByte>::GetEnumerator()
extern "C" Enumerator_t7008  List_1_GetEnumerator_m41254_gshared (List_1_t7007 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m41254(__this, method) (( Enumerator_t7008  (*) (List_1_t7007 *, const MethodInfo*))List_1_GetEnumerator_m41254_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.SByte>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7007 * List_1_GetRange_m41255_gshared (List_1_t7007 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m41255(__this, ___index, ___count, method) (( List_1_t7007 * (*) (List_1_t7007 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m41255_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m41256_gshared (List_1_t7007 * __this, int8_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m41256(__this, ___item, method) (( int32_t (*) (List_1_t7007 *, int8_t, const MethodInfo*))List_1_IndexOf_m41256_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m41257_gshared (List_1_t7007 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m41257(__this, ___start, ___delta, method) (( void (*) (List_1_t7007 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m41257_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m41258_gshared (List_1_t7007 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m41258(__this, ___index, method) (( void (*) (List_1_t7007 *, int32_t, const MethodInfo*))List_1_CheckIndex_m41258_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m41259_gshared (List_1_t7007 * __this, int32_t ___index, int8_t ___item, const MethodInfo* method);
#define List_1_Insert_m41259(__this, ___index, ___item, method) (( void (*) (List_1_t7007 *, int32_t, int8_t, const MethodInfo*))List_1_Insert_m41259_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m41260_gshared (List_1_t7007 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m41260(__this, ___collection, method) (( void (*) (List_1_t7007 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m41260_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m41261_gshared (List_1_t7007 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m41261(__this, ___index, ___collection, method) (( void (*) (List_1_t7007 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m41261_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m41262_gshared (List_1_t7007 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m41262(__this, ___index, ___collection, method) (( void (*) (List_1_t7007 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m41262_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m41263_gshared (List_1_t7007 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m41263(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7007 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m41263_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::Remove(T)
extern "C" bool List_1_Remove_m41264_gshared (List_1_t7007 * __this, int8_t ___item, const MethodInfo* method);
#define List_1_Remove_m41264(__this, ___item, method) (( bool (*) (List_1_t7007 *, int8_t, const MethodInfo*))List_1_Remove_m41264_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m41265_gshared (List_1_t7007 * __this, Predicate_1_t7014 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m41265(__this, ___match, method) (( int32_t (*) (List_1_t7007 *, Predicate_1_t7014 *, const MethodInfo*))List_1_RemoveAll_m41265_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m41266_gshared (List_1_t7007 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m41266(__this, ___index, method) (( void (*) (List_1_t7007 *, int32_t, const MethodInfo*))List_1_RemoveAt_m41266_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m41267_gshared (List_1_t7007 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m41267(__this, ___index, ___count, method) (( void (*) (List_1_t7007 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m41267_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Reverse()
extern "C" void List_1_Reverse_m41268_gshared (List_1_t7007 * __this, const MethodInfo* method);
#define List_1_Reverse_m41268(__this, method) (( void (*) (List_1_t7007 *, const MethodInfo*))List_1_Reverse_m41268_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Sort()
extern "C" void List_1_Sort_m41269_gshared (List_1_t7007 * __this, const MethodInfo* method);
#define List_1_Sort_m41269(__this, method) (( void (*) (List_1_t7007 *, const MethodInfo*))List_1_Sort_m41269_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m41270_gshared (List_1_t7007 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m41270(__this, ___comparer, method) (( void (*) (List_1_t7007 *, Object_t*, const MethodInfo*))List_1_Sort_m41270_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m41271_gshared (List_1_t7007 * __this, Comparison_1_t7018 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m41271(__this, ___comparison, method) (( void (*) (List_1_t7007 *, Comparison_1_t7018 *, const MethodInfo*))List_1_Sort_m41271_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.SByte>::ToArray()
extern "C" SByteU5BU5D_t5380* List_1_ToArray_m41272_gshared (List_1_t7007 * __this, const MethodInfo* method);
#define List_1_ToArray_m41272(__this, method) (( SByteU5BU5D_t5380* (*) (List_1_t7007 *, const MethodInfo*))List_1_ToArray_m41272_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::TrimExcess()
extern "C" void List_1_TrimExcess_m41273_gshared (List_1_t7007 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m41273(__this, method) (( void (*) (List_1_t7007 *, const MethodInfo*))List_1_TrimExcess_m41273_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m41274_gshared (List_1_t7007 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m41274(__this, method) (( int32_t (*) (List_1_t7007 *, const MethodInfo*))List_1_get_Capacity_m41274_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m41275_gshared (List_1_t7007 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m41275(__this, ___value, method) (( void (*) (List_1_t7007 *, int32_t, const MethodInfo*))List_1_set_Capacity_m41275_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::get_Count()
extern "C" int32_t List_1_get_Count_m41276_gshared (List_1_t7007 * __this, const MethodInfo* method);
#define List_1_get_Count_m41276(__this, method) (( int32_t (*) (List_1_t7007 *, const MethodInfo*))List_1_get_Count_m41276_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.SByte>::get_Item(System.Int32)
extern "C" int8_t List_1_get_Item_m41277_gshared (List_1_t7007 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m41277(__this, ___index, method) (( int8_t (*) (List_1_t7007 *, int32_t, const MethodInfo*))List_1_get_Item_m41277_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m41278_gshared (List_1_t7007 * __this, int32_t ___index, int8_t ___value, const MethodInfo* method);
#define List_1_set_Item_m41278(__this, ___index, ___value, method) (( void (*) (List_1_t7007 *, int32_t, int8_t, const MethodInfo*))List_1_set_Item_m41278_gshared)(__this, ___index, ___value, method)
