#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Double>
struct Collection_1_t6672;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Double[]
struct DoubleU5BU5D_t4817;
// System.Collections.Generic.IEnumerator`1<System.Double>
struct IEnumerator_1_t6278;
// System.Collections.Generic.IList`1<System.Double>
struct IList_1_t6275;

// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::.ctor()
extern "C" void Collection_1__ctor_m39954_gshared (Collection_1_t6672 * __this, const MethodInfo* method);
#define Collection_1__ctor_m39954(__this, method) (( void (*) (Collection_1_t6672 *, const MethodInfo*))Collection_1__ctor_m39954_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39955_gshared (Collection_1_t6672 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39955(__this, method) (( bool (*) (Collection_1_t6672 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39955_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m39956_gshared (Collection_1_t6672 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m39956(__this, ___array, ___index, method) (( void (*) (Collection_1_t6672 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m39956_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m39957_gshared (Collection_1_t6672 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m39957(__this, method) (( Object_t * (*) (Collection_1_t6672 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m39957_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m39958_gshared (Collection_1_t6672 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m39958(__this, ___value, method) (( int32_t (*) (Collection_1_t6672 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m39958_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m39959_gshared (Collection_1_t6672 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m39959(__this, ___value, method) (( bool (*) (Collection_1_t6672 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m39959_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m39960_gshared (Collection_1_t6672 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m39960(__this, ___value, method) (( int32_t (*) (Collection_1_t6672 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m39960_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m39961_gshared (Collection_1_t6672 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m39961(__this, ___index, ___value, method) (( void (*) (Collection_1_t6672 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m39961_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m39962_gshared (Collection_1_t6672 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m39962(__this, ___value, method) (( void (*) (Collection_1_t6672 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m39962_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m39963_gshared (Collection_1_t6672 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m39963(__this, method) (( bool (*) (Collection_1_t6672 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m39963_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m39964_gshared (Collection_1_t6672 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m39964(__this, method) (( Object_t * (*) (Collection_1_t6672 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m39964_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m39965_gshared (Collection_1_t6672 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m39965(__this, method) (( bool (*) (Collection_1_t6672 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m39965_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m39966_gshared (Collection_1_t6672 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m39966(__this, method) (( bool (*) (Collection_1_t6672 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m39966_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m39967_gshared (Collection_1_t6672 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m39967(__this, ___index, method) (( Object_t * (*) (Collection_1_t6672 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m39967_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m39968_gshared (Collection_1_t6672 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m39968(__this, ___index, ___value, method) (( void (*) (Collection_1_t6672 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m39968_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::Add(T)
extern "C" void Collection_1_Add_m39969_gshared (Collection_1_t6672 * __this, double ___item, const MethodInfo* method);
#define Collection_1_Add_m39969(__this, ___item, method) (( void (*) (Collection_1_t6672 *, double, const MethodInfo*))Collection_1_Add_m39969_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::Clear()
extern "C" void Collection_1_Clear_m39970_gshared (Collection_1_t6672 * __this, const MethodInfo* method);
#define Collection_1_Clear_m39970(__this, method) (( void (*) (Collection_1_t6672 *, const MethodInfo*))Collection_1_Clear_m39970_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::ClearItems()
extern "C" void Collection_1_ClearItems_m39971_gshared (Collection_1_t6672 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m39971(__this, method) (( void (*) (Collection_1_t6672 *, const MethodInfo*))Collection_1_ClearItems_m39971_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::Contains(T)
extern "C" bool Collection_1_Contains_m39972_gshared (Collection_1_t6672 * __this, double ___item, const MethodInfo* method);
#define Collection_1_Contains_m39972(__this, ___item, method) (( bool (*) (Collection_1_t6672 *, double, const MethodInfo*))Collection_1_Contains_m39972_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m39973_gshared (Collection_1_t6672 * __this, DoubleU5BU5D_t4817* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m39973(__this, ___array, ___index, method) (( void (*) (Collection_1_t6672 *, DoubleU5BU5D_t4817*, int32_t, const MethodInfo*))Collection_1_CopyTo_m39973_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Double>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m39974_gshared (Collection_1_t6672 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m39974(__this, method) (( Object_t* (*) (Collection_1_t6672 *, const MethodInfo*))Collection_1_GetEnumerator_m39974_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m39975_gshared (Collection_1_t6672 * __this, double ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m39975(__this, ___item, method) (( int32_t (*) (Collection_1_t6672 *, double, const MethodInfo*))Collection_1_IndexOf_m39975_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m39976_gshared (Collection_1_t6672 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define Collection_1_Insert_m39976(__this, ___index, ___item, method) (( void (*) (Collection_1_t6672 *, int32_t, double, const MethodInfo*))Collection_1_Insert_m39976_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m39977_gshared (Collection_1_t6672 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m39977(__this, ___index, ___item, method) (( void (*) (Collection_1_t6672 *, int32_t, double, const MethodInfo*))Collection_1_InsertItem_m39977_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::Remove(T)
extern "C" bool Collection_1_Remove_m39978_gshared (Collection_1_t6672 * __this, double ___item, const MethodInfo* method);
#define Collection_1_Remove_m39978(__this, ___item, method) (( bool (*) (Collection_1_t6672 *, double, const MethodInfo*))Collection_1_Remove_m39978_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m39979_gshared (Collection_1_t6672 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m39979(__this, ___index, method) (( void (*) (Collection_1_t6672 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m39979_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m39980_gshared (Collection_1_t6672 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m39980(__this, ___index, method) (( void (*) (Collection_1_t6672 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m39980_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::get_Count()
extern "C" int32_t Collection_1_get_Count_m39981_gshared (Collection_1_t6672 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m39981(__this, method) (( int32_t (*) (Collection_1_t6672 *, const MethodInfo*))Collection_1_get_Count_m39981_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Double>::get_Item(System.Int32)
extern "C" double Collection_1_get_Item_m39982_gshared (Collection_1_t6672 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m39982(__this, ___index, method) (( double (*) (Collection_1_t6672 *, int32_t, const MethodInfo*))Collection_1_get_Item_m39982_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m39983_gshared (Collection_1_t6672 * __this, int32_t ___index, double ___value, const MethodInfo* method);
#define Collection_1_set_Item_m39983(__this, ___index, ___value, method) (( void (*) (Collection_1_t6672 *, int32_t, double, const MethodInfo*))Collection_1_set_Item_m39983_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m39984_gshared (Collection_1_t6672 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define Collection_1_SetItem_m39984(__this, ___index, ___item, method) (( void (*) (Collection_1_t6672 *, int32_t, double, const MethodInfo*))Collection_1_SetItem_m39984_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m39985_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m39985(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m39985_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Double>::ConvertItem(System.Object)
extern "C" double Collection_1_ConvertItem_m39986_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m39986(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m39986_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m39987_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m39987(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m39987_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m39988_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m39988(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m39988_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m39989_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m39989(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m39989_gshared)(__this /* static, unused */, ___list, method)
