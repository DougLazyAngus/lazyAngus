#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct List_1_t7869;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerable_1_t7769;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7868;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t7770;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct ICollection_1_t10001;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct ReadOnlyCollection_1_t7872;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct Predicate_1_t7876;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IComparer_1_t10002;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct Comparison_1_t7879;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_76.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor()
extern "C" void List_1__ctor_m51747_gshared (List_1_t7869 * __this, const MethodInfo* method);
#define List_1__ctor_m51747(__this, method) (( void (*) (List_1_t7869 *, const MethodInfo*))List_1__ctor_m51747_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m51748_gshared (List_1_t7869 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m51748(__this, ___collection, method) (( void (*) (List_1_t7869 *, Object_t*, const MethodInfo*))List_1__ctor_m51748_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m51749_gshared (List_1_t7869 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m51749(__this, ___capacity, method) (( void (*) (List_1_t7869 *, int32_t, const MethodInfo*))List_1__ctor_m51749_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m51750_gshared (List_1_t7869 * __this, KeyValuePair_2U5BU5D_t7868* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m51750(__this, ___data, ___size, method) (( void (*) (List_1_t7869 *, KeyValuePair_2U5BU5D_t7868*, int32_t, const MethodInfo*))List_1__ctor_m51750_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.cctor()
extern "C" void List_1__cctor_m51751_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m51751(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m51751_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51752_gshared (List_1_t7869 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51752(__this, method) (( Object_t* (*) (List_1_t7869 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51752_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m51753_gshared (List_1_t7869 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m51753(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7869 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m51753_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m51754_gshared (List_1_t7869 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m51754(__this, method) (( Object_t * (*) (List_1_t7869 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m51754_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m51755_gshared (List_1_t7869 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m51755(__this, ___item, method) (( int32_t (*) (List_1_t7869 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m51755_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m51756_gshared (List_1_t7869 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m51756(__this, ___item, method) (( bool (*) (List_1_t7869 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m51756_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m51757_gshared (List_1_t7869 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m51757(__this, ___item, method) (( int32_t (*) (List_1_t7869 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m51757_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m51758_gshared (List_1_t7869 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m51758(__this, ___index, ___item, method) (( void (*) (List_1_t7869 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m51758_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m51759_gshared (List_1_t7869 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m51759(__this, ___item, method) (( void (*) (List_1_t7869 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m51759_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51760_gshared (List_1_t7869 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51760(__this, method) (( bool (*) (List_1_t7869 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51760_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m51761_gshared (List_1_t7869 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m51761(__this, method) (( bool (*) (List_1_t7869 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m51761_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m51762_gshared (List_1_t7869 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m51762(__this, method) (( Object_t * (*) (List_1_t7869 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m51762_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m51763_gshared (List_1_t7869 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m51763(__this, method) (( bool (*) (List_1_t7869 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m51763_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m51764_gshared (List_1_t7869 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m51764(__this, method) (( bool (*) (List_1_t7869 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m51764_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m51765_gshared (List_1_t7869 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m51765(__this, ___index, method) (( Object_t * (*) (List_1_t7869 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m51765_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m51766_gshared (List_1_t7869 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m51766(__this, ___index, ___value, method) (( void (*) (List_1_t7869 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m51766_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Add(T)
extern "C" void List_1_Add_m51767_gshared (List_1_t7869 * __this, KeyValuePair_2_t6764  ___item, const MethodInfo* method);
#define List_1_Add_m51767(__this, ___item, method) (( void (*) (List_1_t7869 *, KeyValuePair_2_t6764 , const MethodInfo*))List_1_Add_m51767_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m51768_gshared (List_1_t7869 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m51768(__this, ___newCount, method) (( void (*) (List_1_t7869 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m51768_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m51769_gshared (List_1_t7869 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m51769(__this, ___idx, ___count, method) (( void (*) (List_1_t7869 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m51769_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m51770_gshared (List_1_t7869 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m51770(__this, ___collection, method) (( void (*) (List_1_t7869 *, Object_t*, const MethodInfo*))List_1_AddCollection_m51770_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m51771_gshared (List_1_t7869 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m51771(__this, ___enumerable, method) (( void (*) (List_1_t7869 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m51771_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m51772_gshared (List_1_t7869 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m51772(__this, ___collection, method) (( void (*) (List_1_t7869 *, Object_t*, const MethodInfo*))List_1_AddRange_m51772_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7872 * List_1_AsReadOnly_m51773_gshared (List_1_t7869 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m51773(__this, method) (( ReadOnlyCollection_1_t7872 * (*) (List_1_t7869 *, const MethodInfo*))List_1_AsReadOnly_m51773_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Clear()
extern "C" void List_1_Clear_m51774_gshared (List_1_t7869 * __this, const MethodInfo* method);
#define List_1_Clear_m51774(__this, method) (( void (*) (List_1_t7869 *, const MethodInfo*))List_1_Clear_m51774_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Contains(T)
extern "C" bool List_1_Contains_m51775_gshared (List_1_t7869 * __this, KeyValuePair_2_t6764  ___item, const MethodInfo* method);
#define List_1_Contains_m51775(__this, ___item, method) (( bool (*) (List_1_t7869 *, KeyValuePair_2_t6764 , const MethodInfo*))List_1_Contains_m51775_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m51776_gshared (List_1_t7869 * __this, KeyValuePair_2U5BU5D_t7868* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m51776(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7869 *, KeyValuePair_2U5BU5D_t7868*, int32_t, const MethodInfo*))List_1_CopyTo_m51776_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t6764  List_1_Find_m51777_gshared (List_1_t7869 * __this, Predicate_1_t7876 * ___match, const MethodInfo* method);
#define List_1_Find_m51777(__this, ___match, method) (( KeyValuePair_2_t6764  (*) (List_1_t7869 *, Predicate_1_t7876 *, const MethodInfo*))List_1_Find_m51777_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m51778_gshared (Object_t * __this /* static, unused */, Predicate_1_t7876 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m51778(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7876 *, const MethodInfo*))List_1_CheckMatch_m51778_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m51779_gshared (List_1_t7869 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7876 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m51779(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7869 *, int32_t, int32_t, Predicate_1_t7876 *, const MethodInfo*))List_1_GetIndex_m51779_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetEnumerator()
extern "C" Enumerator_t7870  List_1_GetEnumerator_m51780_gshared (List_1_t7869 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m51780(__this, method) (( Enumerator_t7870  (*) (List_1_t7869 *, const MethodInfo*))List_1_GetEnumerator_m51780_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7869 * List_1_GetRange_m51781_gshared (List_1_t7869 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m51781(__this, ___index, ___count, method) (( List_1_t7869 * (*) (List_1_t7869 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m51781_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m51782_gshared (List_1_t7869 * __this, KeyValuePair_2_t6764  ___item, const MethodInfo* method);
#define List_1_IndexOf_m51782(__this, ___item, method) (( int32_t (*) (List_1_t7869 *, KeyValuePair_2_t6764 , const MethodInfo*))List_1_IndexOf_m51782_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m51783_gshared (List_1_t7869 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m51783(__this, ___start, ___delta, method) (( void (*) (List_1_t7869 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m51783_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m51784_gshared (List_1_t7869 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m51784(__this, ___index, method) (( void (*) (List_1_t7869 *, int32_t, const MethodInfo*))List_1_CheckIndex_m51784_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m51785_gshared (List_1_t7869 * __this, int32_t ___index, KeyValuePair_2_t6764  ___item, const MethodInfo* method);
#define List_1_Insert_m51785(__this, ___index, ___item, method) (( void (*) (List_1_t7869 *, int32_t, KeyValuePair_2_t6764 , const MethodInfo*))List_1_Insert_m51785_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m51786_gshared (List_1_t7869 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m51786(__this, ___collection, method) (( void (*) (List_1_t7869 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m51786_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m51787_gshared (List_1_t7869 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m51787(__this, ___index, ___collection, method) (( void (*) (List_1_t7869 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m51787_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m51788_gshared (List_1_t7869 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m51788(__this, ___index, ___collection, method) (( void (*) (List_1_t7869 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m51788_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m51789_gshared (List_1_t7869 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m51789(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7869 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m51789_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Remove(T)
extern "C" bool List_1_Remove_m51790_gshared (List_1_t7869 * __this, KeyValuePair_2_t6764  ___item, const MethodInfo* method);
#define List_1_Remove_m51790(__this, ___item, method) (( bool (*) (List_1_t7869 *, KeyValuePair_2_t6764 , const MethodInfo*))List_1_Remove_m51790_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m51791_gshared (List_1_t7869 * __this, Predicate_1_t7876 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m51791(__this, ___match, method) (( int32_t (*) (List_1_t7869 *, Predicate_1_t7876 *, const MethodInfo*))List_1_RemoveAll_m51791_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m51792_gshared (List_1_t7869 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m51792(__this, ___index, method) (( void (*) (List_1_t7869 *, int32_t, const MethodInfo*))List_1_RemoveAt_m51792_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m51793_gshared (List_1_t7869 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m51793(__this, ___index, ___count, method) (( void (*) (List_1_t7869 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m51793_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Reverse()
extern "C" void List_1_Reverse_m51794_gshared (List_1_t7869 * __this, const MethodInfo* method);
#define List_1_Reverse_m51794(__this, method) (( void (*) (List_1_t7869 *, const MethodInfo*))List_1_Reverse_m51794_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Sort()
extern "C" void List_1_Sort_m51795_gshared (List_1_t7869 * __this, const MethodInfo* method);
#define List_1_Sort_m51795(__this, method) (( void (*) (List_1_t7869 *, const MethodInfo*))List_1_Sort_m51795_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m51796_gshared (List_1_t7869 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m51796(__this, ___comparer, method) (( void (*) (List_1_t7869 *, Object_t*, const MethodInfo*))List_1_Sort_m51796_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m51797_gshared (List_1_t7869 * __this, Comparison_1_t7879 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m51797(__this, ___comparison, method) (( void (*) (List_1_t7869 *, Comparison_1_t7879 *, const MethodInfo*))List_1_Sort_m51797_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7868* List_1_ToArray_m51798_gshared (List_1_t7869 * __this, const MethodInfo* method);
#define List_1_ToArray_m51798(__this, method) (( KeyValuePair_2U5BU5D_t7868* (*) (List_1_t7869 *, const MethodInfo*))List_1_ToArray_m51798_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::TrimExcess()
extern "C" void List_1_TrimExcess_m51799_gshared (List_1_t7869 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m51799(__this, method) (( void (*) (List_1_t7869 *, const MethodInfo*))List_1_TrimExcess_m51799_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m51800_gshared (List_1_t7869 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m51800(__this, method) (( int32_t (*) (List_1_t7869 *, const MethodInfo*))List_1_get_Capacity_m51800_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m51801_gshared (List_1_t7869 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m51801(__this, ___value, method) (( void (*) (List_1_t7869 *, int32_t, const MethodInfo*))List_1_set_Capacity_m51801_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Count()
extern "C" int32_t List_1_get_Count_m51802_gshared (List_1_t7869 * __this, const MethodInfo* method);
#define List_1_get_Count_m51802(__this, method) (( int32_t (*) (List_1_t7869 *, const MethodInfo*))List_1_get_Count_m51802_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t6764  List_1_get_Item_m51803_gshared (List_1_t7869 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m51803(__this, ___index, method) (( KeyValuePair_2_t6764  (*) (List_1_t7869 *, int32_t, const MethodInfo*))List_1_get_Item_m51803_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m51804_gshared (List_1_t7869 * __this, int32_t ___index, KeyValuePair_2_t6764  ___value, const MethodInfo* method);
#define List_1_set_Item_m51804(__this, ___index, ___value, method) (( void (*) (List_1_t7869 *, int32_t, KeyValuePair_2_t6764 , const MethodInfo*))List_1_set_Item_m51804_gshared)(__this, ___index, ___value, method)
