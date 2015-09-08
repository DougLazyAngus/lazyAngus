#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t4290;
// System.Object
struct Object_t;
// System.Diagnostics.TraceListener
struct TraceListener_t4284;
// System.String
struct String_t;
// System.Array
struct Array_t;
// System.Diagnostics.TraceImplSettings
struct TraceImplSettings_t4287;
// System.Collections.IEnumerator
struct IEnumerator_t48;

// System.Void System.Diagnostics.TraceListenerCollection::.ctor()
extern "C" void TraceListenerCollection__ctor_m16076 (TraceListenerCollection_t4290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::.ctor(System.Boolean)
extern "C" void TraceListenerCollection__ctor_m16077 (TraceListenerCollection_t4290 * __this, bool ___addDefault, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Diagnostics.TraceListenerCollection::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * TraceListenerCollection_System_Collections_IList_get_Item_m16078 (TraceListenerCollection_t4290 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void TraceListenerCollection_System_Collections_IList_set_Item_m16079 (TraceListenerCollection_t4290 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceListenerCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool TraceListenerCollection_System_Collections_ICollection_get_IsSynchronized_m16080 (TraceListenerCollection_t4290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Diagnostics.TraceListenerCollection::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * TraceListenerCollection_System_Collections_ICollection_get_SyncRoot_m16081 (TraceListenerCollection_t4290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceListenerCollection::System.Collections.IList.get_IsFixedSize()
extern "C" bool TraceListenerCollection_System_Collections_IList_get_IsFixedSize_m16082 (TraceListenerCollection_t4290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceListenerCollection::System.Collections.IList.get_IsReadOnly()
extern "C" bool TraceListenerCollection_System_Collections_IList_get_IsReadOnly_m16083 (TraceListenerCollection_t4290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void TraceListenerCollection_System_Collections_ICollection_CopyTo_m16084 (TraceListenerCollection_t4290 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListenerCollection::System.Collections.IList.Add(System.Object)
extern "C" int32_t TraceListenerCollection_System_Collections_IList_Add_m16085 (TraceListenerCollection_t4290 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceListenerCollection::System.Collections.IList.Contains(System.Object)
extern "C" bool TraceListenerCollection_System_Collections_IList_Contains_m16086 (TraceListenerCollection_t4290 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListenerCollection::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t TraceListenerCollection_System_Collections_IList_IndexOf_m16087 (TraceListenerCollection_t4290 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void TraceListenerCollection_System_Collections_IList_Insert_m16088 (TraceListenerCollection_t4290 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::System.Collections.IList.Remove(System.Object)
extern "C" void TraceListenerCollection_System_Collections_IList_Remove_m16089 (TraceListenerCollection_t4290 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListenerCollection::get_Count()
extern "C" int32_t TraceListenerCollection_get_Count_m16090 (TraceListenerCollection_t4290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceListener System.Diagnostics.TraceListenerCollection::get_Item(System.String)
extern "C" TraceListener_t4284 * TraceListenerCollection_get_Item_m16091 (TraceListenerCollection_t4290 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::set_Item(System.Int32,System.Diagnostics.TraceListener)
extern "C" void TraceListenerCollection_set_Item_m16092 (TraceListenerCollection_t4290 * __this, int32_t ___index, TraceListener_t4284 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListenerCollection::Add(System.Diagnostics.TraceListener)
extern "C" int32_t TraceListenerCollection_Add_m16093 (TraceListenerCollection_t4290 * __this, TraceListener_t4284 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::Add(System.Diagnostics.TraceListener,System.Diagnostics.TraceImplSettings)
extern "C" void TraceListenerCollection_Add_m16094 (TraceListenerCollection_t4290 * __this, TraceListener_t4284 * ___listener, TraceImplSettings_t4287 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::InitializeListener(System.Diagnostics.TraceListener)
extern "C" void TraceListenerCollection_InitializeListener_m16095 (TraceListenerCollection_t4290 * __this, TraceListener_t4284 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::Clear()
extern "C" void TraceListenerCollection_Clear_m16096 (TraceListenerCollection_t4290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Diagnostics.TraceListenerCollection::GetEnumerator()
extern "C" Object_t * TraceListenerCollection_GetEnumerator_m16097 (TraceListenerCollection_t4290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::Insert(System.Int32,System.Diagnostics.TraceListener)
extern "C" void TraceListenerCollection_Insert_m16098 (TraceListenerCollection_t4290 * __this, int32_t ___index, TraceListener_t4284 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::Remove(System.String)
extern "C" void TraceListenerCollection_Remove_m16099 (TraceListenerCollection_t4290 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::RemoveAt(System.Int32)
extern "C" void TraceListenerCollection_RemoveAt_m16100 (TraceListenerCollection_t4290 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
