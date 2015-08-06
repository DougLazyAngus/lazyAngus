#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t6297;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_t6238;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t6239;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9039;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte>
struct ReadOnlyCollection_1_t6299;
// System.Predicate`1<System.Byte>
struct Predicate_1_t6301;
// System.Collections.Generic.IComparer`1<System.Byte>
struct IComparer_1_t9105;
// System.Comparison`1<System.Byte>
struct Comparison_1_t6305;
// System.Collections.Generic.List`1/Enumerator<System.Byte>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_54.h"

// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
extern "C" void List_1__ctor_m34942_gshared (List_1_t6297 * __this, const MethodInfo* method);
#define List_1__ctor_m34942(__this, method) (( void (*) (List_1_t6297 *, const MethodInfo*))List_1__ctor_m34942_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m34943_gshared (List_1_t6297 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m34943(__this, ___collection, method) (( void (*) (List_1_t6297 *, Object_t*, const MethodInfo*))List_1__ctor_m34943_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Int32)
extern "C" void List_1__ctor_m34944_gshared (List_1_t6297 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m34944(__this, ___capacity, method) (( void (*) (List_1_t6297 *, int32_t, const MethodInfo*))List_1__ctor_m34944_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m34945_gshared (List_1_t6297 * __this, ByteU5BU5D_t66* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m34945(__this, ___data, ___size, method) (( void (*) (List_1_t6297 *, ByteU5BU5D_t66*, int32_t, const MethodInfo*))List_1__ctor_m34945_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.cctor()
extern "C" void List_1__cctor_m34946_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m34946(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m34946_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m34947_gshared (List_1_t6297 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m34947(__this, method) (( Object_t* (*) (List_1_t6297 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m34947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m34948_gshared (List_1_t6297 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m34948(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6297 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m34948_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m34949_gshared (List_1_t6297 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m34949(__this, method) (( Object_t * (*) (List_1_t6297 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m34949_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m34950_gshared (List_1_t6297 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m34950(__this, ___item, method) (( int32_t (*) (List_1_t6297 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m34950_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m34951_gshared (List_1_t6297 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m34951(__this, ___item, method) (( bool (*) (List_1_t6297 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m34951_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m34952_gshared (List_1_t6297 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m34952(__this, ___item, method) (( int32_t (*) (List_1_t6297 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m34952_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m34953_gshared (List_1_t6297 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m34953(__this, ___index, ___item, method) (( void (*) (List_1_t6297 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m34953_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m34954_gshared (List_1_t6297 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m34954(__this, ___item, method) (( void (*) (List_1_t6297 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m34954_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m34955_gshared (List_1_t6297 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m34955(__this, method) (( bool (*) (List_1_t6297 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m34955_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m34956_gshared (List_1_t6297 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m34956(__this, method) (( bool (*) (List_1_t6297 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m34956_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m34957_gshared (List_1_t6297 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m34957(__this, method) (( Object_t * (*) (List_1_t6297 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m34957_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m34958_gshared (List_1_t6297 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m34958(__this, method) (( bool (*) (List_1_t6297 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m34958_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m34959_gshared (List_1_t6297 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m34959(__this, method) (( bool (*) (List_1_t6297 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m34959_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m34960_gshared (List_1_t6297 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m34960(__this, ___index, method) (( Object_t * (*) (List_1_t6297 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m34960_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m34961_gshared (List_1_t6297 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m34961(__this, ___index, ___value, method) (( void (*) (List_1_t6297 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m34961_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
extern "C" void List_1_Add_m34962_gshared (List_1_t6297 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Add_m34962(__this, ___item, method) (( void (*) (List_1_t6297 *, uint8_t, const MethodInfo*))List_1_Add_m34962_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m34963_gshared (List_1_t6297 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m34963(__this, ___newCount, method) (( void (*) (List_1_t6297 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m34963_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m34964_gshared (List_1_t6297 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m34964(__this, ___idx, ___count, method) (( void (*) (List_1_t6297 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m34964_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m34965_gshared (List_1_t6297 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m34965(__this, ___collection, method) (( void (*) (List_1_t6297 *, Object_t*, const MethodInfo*))List_1_AddCollection_m34965_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m34966_gshared (List_1_t6297 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m34966(__this, ___enumerable, method) (( void (*) (List_1_t6297 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m34966_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m34967_gshared (List_1_t6297 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m34967(__this, ___collection, method) (( void (*) (List_1_t6297 *, Object_t*, const MethodInfo*))List_1_AddRange_m34967_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Byte>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6299 * List_1_AsReadOnly_m34968_gshared (List_1_t6297 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m34968(__this, method) (( ReadOnlyCollection_1_t6299 * (*) (List_1_t6297 *, const MethodInfo*))List_1_AsReadOnly_m34968_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Clear()
extern "C" void List_1_Clear_m34969_gshared (List_1_t6297 * __this, const MethodInfo* method);
#define List_1_Clear_m34969(__this, method) (( void (*) (List_1_t6297 *, const MethodInfo*))List_1_Clear_m34969_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Contains(T)
extern "C" bool List_1_Contains_m34970_gshared (List_1_t6297 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Contains_m34970(__this, ___item, method) (( bool (*) (List_1_t6297 *, uint8_t, const MethodInfo*))List_1_Contains_m34970_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m34971_gshared (List_1_t6297 * __this, ByteU5BU5D_t66* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m34971(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6297 *, ByteU5BU5D_t66*, int32_t, const MethodInfo*))List_1_CopyTo_m34971_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Byte>::Find(System.Predicate`1<T>)
extern "C" uint8_t List_1_Find_m34972_gshared (List_1_t6297 * __this, Predicate_1_t6301 * ___match, const MethodInfo* method);
#define List_1_Find_m34972(__this, ___match, method) (( uint8_t (*) (List_1_t6297 *, Predicate_1_t6301 *, const MethodInfo*))List_1_Find_m34972_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m34973_gshared (Object_t * __this /* static, unused */, Predicate_1_t6301 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m34973(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6301 *, const MethodInfo*))List_1_CheckMatch_m34973_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m34974_gshared (List_1_t6297 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6301 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m34974(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6297 *, int32_t, int32_t, Predicate_1_t6301 *, const MethodInfo*))List_1_GetIndex_m34974_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte>::GetEnumerator()
extern "C" Enumerator_t6298  List_1_GetEnumerator_m34975_gshared (List_1_t6297 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m34975(__this, method) (( Enumerator_t6298  (*) (List_1_t6297 *, const MethodInfo*))List_1_GetEnumerator_m34975_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Byte>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6297 * List_1_GetRange_m34976_gshared (List_1_t6297 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m34976(__this, ___index, ___count, method) (( List_1_t6297 * (*) (List_1_t6297 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m34976_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m34977_gshared (List_1_t6297 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m34977(__this, ___item, method) (( int32_t (*) (List_1_t6297 *, uint8_t, const MethodInfo*))List_1_IndexOf_m34977_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m34978_gshared (List_1_t6297 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m34978(__this, ___start, ___delta, method) (( void (*) (List_1_t6297 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m34978_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m34979_gshared (List_1_t6297 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m34979(__this, ___index, method) (( void (*) (List_1_t6297 *, int32_t, const MethodInfo*))List_1_CheckIndex_m34979_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m34980_gshared (List_1_t6297 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define List_1_Insert_m34980(__this, ___index, ___item, method) (( void (*) (List_1_t6297 *, int32_t, uint8_t, const MethodInfo*))List_1_Insert_m34980_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m34981_gshared (List_1_t6297 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m34981(__this, ___collection, method) (( void (*) (List_1_t6297 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m34981_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m34982_gshared (List_1_t6297 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m34982(__this, ___index, ___collection, method) (( void (*) (List_1_t6297 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m34982_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m34983_gshared (List_1_t6297 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m34983(__this, ___index, ___collection, method) (( void (*) (List_1_t6297 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m34983_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m34984_gshared (List_1_t6297 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m34984(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6297 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m34984_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Remove(T)
extern "C" bool List_1_Remove_m34985_gshared (List_1_t6297 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Remove_m34985(__this, ___item, method) (( bool (*) (List_1_t6297 *, uint8_t, const MethodInfo*))List_1_Remove_m34985_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m34986_gshared (List_1_t6297 * __this, Predicate_1_t6301 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m34986(__this, ___match, method) (( int32_t (*) (List_1_t6297 *, Predicate_1_t6301 *, const MethodInfo*))List_1_RemoveAll_m34986_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m34987_gshared (List_1_t6297 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m34987(__this, ___index, method) (( void (*) (List_1_t6297 *, int32_t, const MethodInfo*))List_1_RemoveAt_m34987_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m34988_gshared (List_1_t6297 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m34988(__this, ___index, ___count, method) (( void (*) (List_1_t6297 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m34988_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Reverse()
extern "C" void List_1_Reverse_m34989_gshared (List_1_t6297 * __this, const MethodInfo* method);
#define List_1_Reverse_m34989(__this, method) (( void (*) (List_1_t6297 *, const MethodInfo*))List_1_Reverse_m34989_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort()
extern "C" void List_1_Sort_m34990_gshared (List_1_t6297 * __this, const MethodInfo* method);
#define List_1_Sort_m34990(__this, method) (( void (*) (List_1_t6297 *, const MethodInfo*))List_1_Sort_m34990_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m34991_gshared (List_1_t6297 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m34991(__this, ___comparer, method) (( void (*) (List_1_t6297 *, Object_t*, const MethodInfo*))List_1_Sort_m34991_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m34992_gshared (List_1_t6297 * __this, Comparison_1_t6305 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m34992(__this, ___comparison, method) (( void (*) (List_1_t6297 *, Comparison_1_t6305 *, const MethodInfo*))List_1_Sort_m34992_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
extern "C" ByteU5BU5D_t66* List_1_ToArray_m34993_gshared (List_1_t6297 * __this, const MethodInfo* method);
#define List_1_ToArray_m34993(__this, method) (( ByteU5BU5D_t66* (*) (List_1_t6297 *, const MethodInfo*))List_1_ToArray_m34993_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::TrimExcess()
extern "C" void List_1_TrimExcess_m34994_gshared (List_1_t6297 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m34994(__this, method) (( void (*) (List_1_t6297 *, const MethodInfo*))List_1_TrimExcess_m34994_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m34995_gshared (List_1_t6297 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m34995(__this, method) (( int32_t (*) (List_1_t6297 *, const MethodInfo*))List_1_get_Capacity_m34995_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m34996_gshared (List_1_t6297 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m34996(__this, ___value, method) (( void (*) (List_1_t6297 *, int32_t, const MethodInfo*))List_1_set_Capacity_m34996_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Count()
extern "C" int32_t List_1_get_Count_m34997_gshared (List_1_t6297 * __this, const MethodInfo* method);
#define List_1_get_Count_m34997(__this, method) (( int32_t (*) (List_1_t6297 *, const MethodInfo*))List_1_get_Count_m34997_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte>::get_Item(System.Int32)
extern "C" uint8_t List_1_get_Item_m34998_gshared (List_1_t6297 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m34998(__this, ___index, method) (( uint8_t (*) (List_1_t6297 *, int32_t, const MethodInfo*))List_1_get_Item_m34998_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m34999_gshared (List_1_t6297 * __this, int32_t ___index, uint8_t ___value, const MethodInfo* method);
#define List_1_set_Item_m34999(__this, ___index, ___value, method) (( void (*) (List_1_t6297 *, int32_t, uint8_t, const MethodInfo*))List_1_set_Item_m34999_gshared)(__this, ___index, ___value, method)
