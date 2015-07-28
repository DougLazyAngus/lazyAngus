#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t6287;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_t6228;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t6229;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9029;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte>
struct ReadOnlyCollection_1_t6289;
// System.Predicate`1<System.Byte>
struct Predicate_1_t6291;
// System.Collections.Generic.IComparer`1<System.Byte>
struct IComparer_1_t9095;
// System.Comparison`1<System.Byte>
struct Comparison_1_t6295;
// System.Collections.Generic.List`1/Enumerator<System.Byte>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_54.h"

// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
extern "C" void List_1__ctor_m34879_gshared (List_1_t6287 * __this, const MethodInfo* method);
#define List_1__ctor_m34879(__this, method) (( void (*) (List_1_t6287 *, const MethodInfo*))List_1__ctor_m34879_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m34880_gshared (List_1_t6287 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m34880(__this, ___collection, method) (( void (*) (List_1_t6287 *, Object_t*, const MethodInfo*))List_1__ctor_m34880_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Int32)
extern "C" void List_1__ctor_m34881_gshared (List_1_t6287 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m34881(__this, ___capacity, method) (( void (*) (List_1_t6287 *, int32_t, const MethodInfo*))List_1__ctor_m34881_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m34882_gshared (List_1_t6287 * __this, ByteU5BU5D_t66* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m34882(__this, ___data, ___size, method) (( void (*) (List_1_t6287 *, ByteU5BU5D_t66*, int32_t, const MethodInfo*))List_1__ctor_m34882_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.cctor()
extern "C" void List_1__cctor_m34883_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m34883(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m34883_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m34884_gshared (List_1_t6287 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m34884(__this, method) (( Object_t* (*) (List_1_t6287 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m34884_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m34885_gshared (List_1_t6287 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m34885(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6287 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m34885_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m34886_gshared (List_1_t6287 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m34886(__this, method) (( Object_t * (*) (List_1_t6287 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m34886_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m34887_gshared (List_1_t6287 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m34887(__this, ___item, method) (( int32_t (*) (List_1_t6287 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m34887_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m34888_gshared (List_1_t6287 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m34888(__this, ___item, method) (( bool (*) (List_1_t6287 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m34888_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m34889_gshared (List_1_t6287 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m34889(__this, ___item, method) (( int32_t (*) (List_1_t6287 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m34889_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m34890_gshared (List_1_t6287 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m34890(__this, ___index, ___item, method) (( void (*) (List_1_t6287 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m34890_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m34891_gshared (List_1_t6287 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m34891(__this, ___item, method) (( void (*) (List_1_t6287 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m34891_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m34892_gshared (List_1_t6287 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m34892(__this, method) (( bool (*) (List_1_t6287 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m34892_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m34893_gshared (List_1_t6287 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m34893(__this, method) (( bool (*) (List_1_t6287 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m34893_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m34894_gshared (List_1_t6287 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m34894(__this, method) (( Object_t * (*) (List_1_t6287 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m34894_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m34895_gshared (List_1_t6287 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m34895(__this, method) (( bool (*) (List_1_t6287 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m34895_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m34896_gshared (List_1_t6287 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m34896(__this, method) (( bool (*) (List_1_t6287 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m34896_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m34897_gshared (List_1_t6287 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m34897(__this, ___index, method) (( Object_t * (*) (List_1_t6287 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m34897_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m34898_gshared (List_1_t6287 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m34898(__this, ___index, ___value, method) (( void (*) (List_1_t6287 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m34898_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
extern "C" void List_1_Add_m34899_gshared (List_1_t6287 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Add_m34899(__this, ___item, method) (( void (*) (List_1_t6287 *, uint8_t, const MethodInfo*))List_1_Add_m34899_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m34900_gshared (List_1_t6287 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m34900(__this, ___newCount, method) (( void (*) (List_1_t6287 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m34900_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m34901_gshared (List_1_t6287 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m34901(__this, ___idx, ___count, method) (( void (*) (List_1_t6287 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m34901_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m34902_gshared (List_1_t6287 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m34902(__this, ___collection, method) (( void (*) (List_1_t6287 *, Object_t*, const MethodInfo*))List_1_AddCollection_m34902_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m34903_gshared (List_1_t6287 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m34903(__this, ___enumerable, method) (( void (*) (List_1_t6287 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m34903_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m34904_gshared (List_1_t6287 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m34904(__this, ___collection, method) (( void (*) (List_1_t6287 *, Object_t*, const MethodInfo*))List_1_AddRange_m34904_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Byte>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6289 * List_1_AsReadOnly_m34905_gshared (List_1_t6287 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m34905(__this, method) (( ReadOnlyCollection_1_t6289 * (*) (List_1_t6287 *, const MethodInfo*))List_1_AsReadOnly_m34905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Clear()
extern "C" void List_1_Clear_m34906_gshared (List_1_t6287 * __this, const MethodInfo* method);
#define List_1_Clear_m34906(__this, method) (( void (*) (List_1_t6287 *, const MethodInfo*))List_1_Clear_m34906_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Contains(T)
extern "C" bool List_1_Contains_m34907_gshared (List_1_t6287 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Contains_m34907(__this, ___item, method) (( bool (*) (List_1_t6287 *, uint8_t, const MethodInfo*))List_1_Contains_m34907_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m34908_gshared (List_1_t6287 * __this, ByteU5BU5D_t66* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m34908(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6287 *, ByteU5BU5D_t66*, int32_t, const MethodInfo*))List_1_CopyTo_m34908_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Byte>::Find(System.Predicate`1<T>)
extern "C" uint8_t List_1_Find_m34909_gshared (List_1_t6287 * __this, Predicate_1_t6291 * ___match, const MethodInfo* method);
#define List_1_Find_m34909(__this, ___match, method) (( uint8_t (*) (List_1_t6287 *, Predicate_1_t6291 *, const MethodInfo*))List_1_Find_m34909_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m34910_gshared (Object_t * __this /* static, unused */, Predicate_1_t6291 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m34910(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6291 *, const MethodInfo*))List_1_CheckMatch_m34910_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m34911_gshared (List_1_t6287 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6291 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m34911(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6287 *, int32_t, int32_t, Predicate_1_t6291 *, const MethodInfo*))List_1_GetIndex_m34911_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte>::GetEnumerator()
extern "C" Enumerator_t6288  List_1_GetEnumerator_m34912_gshared (List_1_t6287 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m34912(__this, method) (( Enumerator_t6288  (*) (List_1_t6287 *, const MethodInfo*))List_1_GetEnumerator_m34912_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Byte>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6287 * List_1_GetRange_m34913_gshared (List_1_t6287 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m34913(__this, ___index, ___count, method) (( List_1_t6287 * (*) (List_1_t6287 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m34913_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m34914_gshared (List_1_t6287 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m34914(__this, ___item, method) (( int32_t (*) (List_1_t6287 *, uint8_t, const MethodInfo*))List_1_IndexOf_m34914_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m34915_gshared (List_1_t6287 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m34915(__this, ___start, ___delta, method) (( void (*) (List_1_t6287 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m34915_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m34916_gshared (List_1_t6287 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m34916(__this, ___index, method) (( void (*) (List_1_t6287 *, int32_t, const MethodInfo*))List_1_CheckIndex_m34916_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m34917_gshared (List_1_t6287 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define List_1_Insert_m34917(__this, ___index, ___item, method) (( void (*) (List_1_t6287 *, int32_t, uint8_t, const MethodInfo*))List_1_Insert_m34917_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m34918_gshared (List_1_t6287 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m34918(__this, ___collection, method) (( void (*) (List_1_t6287 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m34918_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m34919_gshared (List_1_t6287 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m34919(__this, ___index, ___collection, method) (( void (*) (List_1_t6287 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m34919_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m34920_gshared (List_1_t6287 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m34920(__this, ___index, ___collection, method) (( void (*) (List_1_t6287 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m34920_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m34921_gshared (List_1_t6287 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m34921(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6287 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m34921_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Remove(T)
extern "C" bool List_1_Remove_m34922_gshared (List_1_t6287 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Remove_m34922(__this, ___item, method) (( bool (*) (List_1_t6287 *, uint8_t, const MethodInfo*))List_1_Remove_m34922_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m34923_gshared (List_1_t6287 * __this, Predicate_1_t6291 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m34923(__this, ___match, method) (( int32_t (*) (List_1_t6287 *, Predicate_1_t6291 *, const MethodInfo*))List_1_RemoveAll_m34923_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m34924_gshared (List_1_t6287 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m34924(__this, ___index, method) (( void (*) (List_1_t6287 *, int32_t, const MethodInfo*))List_1_RemoveAt_m34924_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m34925_gshared (List_1_t6287 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m34925(__this, ___index, ___count, method) (( void (*) (List_1_t6287 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m34925_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Reverse()
extern "C" void List_1_Reverse_m34926_gshared (List_1_t6287 * __this, const MethodInfo* method);
#define List_1_Reverse_m34926(__this, method) (( void (*) (List_1_t6287 *, const MethodInfo*))List_1_Reverse_m34926_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort()
extern "C" void List_1_Sort_m34927_gshared (List_1_t6287 * __this, const MethodInfo* method);
#define List_1_Sort_m34927(__this, method) (( void (*) (List_1_t6287 *, const MethodInfo*))List_1_Sort_m34927_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m34928_gshared (List_1_t6287 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m34928(__this, ___comparer, method) (( void (*) (List_1_t6287 *, Object_t*, const MethodInfo*))List_1_Sort_m34928_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m34929_gshared (List_1_t6287 * __this, Comparison_1_t6295 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m34929(__this, ___comparison, method) (( void (*) (List_1_t6287 *, Comparison_1_t6295 *, const MethodInfo*))List_1_Sort_m34929_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
extern "C" ByteU5BU5D_t66* List_1_ToArray_m34930_gshared (List_1_t6287 * __this, const MethodInfo* method);
#define List_1_ToArray_m34930(__this, method) (( ByteU5BU5D_t66* (*) (List_1_t6287 *, const MethodInfo*))List_1_ToArray_m34930_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::TrimExcess()
extern "C" void List_1_TrimExcess_m34931_gshared (List_1_t6287 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m34931(__this, method) (( void (*) (List_1_t6287 *, const MethodInfo*))List_1_TrimExcess_m34931_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m34932_gshared (List_1_t6287 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m34932(__this, method) (( int32_t (*) (List_1_t6287 *, const MethodInfo*))List_1_get_Capacity_m34932_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m34933_gshared (List_1_t6287 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m34933(__this, ___value, method) (( void (*) (List_1_t6287 *, int32_t, const MethodInfo*))List_1_set_Capacity_m34933_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Count()
extern "C" int32_t List_1_get_Count_m34934_gshared (List_1_t6287 * __this, const MethodInfo* method);
#define List_1_get_Count_m34934(__this, method) (( int32_t (*) (List_1_t6287 *, const MethodInfo*))List_1_get_Count_m34934_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte>::get_Item(System.Int32)
extern "C" uint8_t List_1_get_Item_m34935_gshared (List_1_t6287 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m34935(__this, ___index, method) (( uint8_t (*) (List_1_t6287 *, int32_t, const MethodInfo*))List_1_get_Item_m34935_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m34936_gshared (List_1_t6287 * __this, int32_t ___index, uint8_t ___value, const MethodInfo* method);
#define List_1_set_Item_m34936(__this, ___index, ___value, method) (( void (*) (List_1_t6287 *, int32_t, uint8_t, const MethodInfo*))List_1_set_Item_m34936_gshared)(__this, ___index, ___value, method)
