#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Specialized.StringCollection
struct StringCollection_t3451;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Specialized.StringEnumerator
struct StringEnumerator_t3742;

// System.Void System.Collections.Specialized.StringCollection::.ctor()
extern "C" void StringCollection__ctor_m14808 (StringCollection_t3451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.get_IsReadOnly()
extern "C" bool StringCollection_System_Collections_IList_get_IsReadOnly_m15765 (StringCollection_t3451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.get_IsFixedSize()
extern "C" bool StringCollection_System_Collections_IList_get_IsFixedSize_m15766 (StringCollection_t3451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.StringCollection::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * StringCollection_System_Collections_IList_get_Item_m15767 (StringCollection_t3451 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void StringCollection_System_Collections_IList_set_Item_m15768 (StringCollection_t3451 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.Add(System.Object)
extern "C" int32_t StringCollection_System_Collections_IList_Add_m15769 (StringCollection_t3451 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.Contains(System.Object)
extern "C" bool StringCollection_System_Collections_IList_Contains_m15770 (StringCollection_t3451 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t StringCollection_System_Collections_IList_IndexOf_m15771 (StringCollection_t3451 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void StringCollection_System_Collections_IList_Insert_m15772 (StringCollection_t3451 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Remove(System.Object)
extern "C" void StringCollection_System_Collections_IList_Remove_m15773 (StringCollection_t3451 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void StringCollection_System_Collections_ICollection_CopyTo_m15774 (StringCollection_t3451 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.StringCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * StringCollection_System_Collections_IEnumerable_GetEnumerator_m15775 (StringCollection_t3451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.StringCollection::get_Item(System.Int32)
extern "C" String_t* StringCollection_get_Item_m14802 (StringCollection_t3451 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::set_Item(System.Int32,System.String)
extern "C" void StringCollection_set_Item_m15776 (StringCollection_t3451 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::get_Count()
extern "C" int32_t StringCollection_get_Count_m15777 (StringCollection_t3451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::Add(System.String)
extern "C" int32_t StringCollection_Add_m14810 (StringCollection_t3451 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::Clear()
extern "C" void StringCollection_Clear_m15778 (StringCollection_t3451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::Contains(System.String)
extern "C" bool StringCollection_Contains_m14809 (StringCollection_t3451 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringEnumerator System.Collections.Specialized.StringCollection::GetEnumerator()
extern "C" StringEnumerator_t3742 * StringCollection_GetEnumerator_m14886 (StringCollection_t3451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::IndexOf(System.String)
extern "C" int32_t StringCollection_IndexOf_m15779 (StringCollection_t3451 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::Insert(System.Int32,System.String)
extern "C" void StringCollection_Insert_m15780 (StringCollection_t3451 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::get_IsReadOnly()
extern "C" bool StringCollection_get_IsReadOnly_m15781 (StringCollection_t3451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::get_IsSynchronized()
extern "C" bool StringCollection_get_IsSynchronized_m15782 (StringCollection_t3451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::Remove(System.String)
extern "C" void StringCollection_Remove_m15783 (StringCollection_t3451 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::RemoveAt(System.Int32)
extern "C" void StringCollection_RemoveAt_m15784 (StringCollection_t3451 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.StringCollection::get_SyncRoot()
extern "C" Object_t * StringCollection_get_SyncRoot_m15785 (StringCollection_t3451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
